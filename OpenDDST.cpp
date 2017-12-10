
#include <dds/DCPS/Marked_Default_Qos.h>
#include <dds/DCPS/Service_Participant.h>

#include <string> 
#include <thread>
#include <iostream> //cout
#include <ctime> //time format
#include <conio.h> //key press
#include <map>	//map - list of vehicles




#include "MriTypeSupportImpl.h"
#include "DataWriter_Aux2Strings.h"
#include "DataReader_Aux2Strings.h"
#include "DataReader_V2XMessage.h"
#include "DataWriter_V2XMessage.h"
#include "DataReader_VehData.h"

#include "QueueTs.h"
#include "TimeSync.h"
#include "OpenDDS.h"

using std::cerr;
using std::cout;
using std::endl;
using std::string;


Mri::Aux2StringsDataWriter_var  writer_global_aux2strings;
Mri::V2XMessageDataWriter_var  writer_global_v2xmessage;
long veh_id_to_remove;

QueueTs<Mri::VehData> vehdata_queue;
std::map<long, Mri::VehData> vehs_map;

//std::queue<Mri::V2XMessage> v2x_queue;
QueueTs<Mri::V2XMessage> v2x_queue;


bool finish_application;
bool threadOpenDDS_initialized;




void vehsMapThread() {
	

	Mri::VehData _veh;
	
	//std::map<long, Mri::VehData> vehs_map;
	std::map<long, Mri::VehData>::iterator it;
	
	veh_id_to_remove = -1; // initial value
	
	while (!finish_application)
	{
		//wait for something at the queue
		vehdata_queue.pop(_veh);
		{
			it = vehs_map.find(_veh.vehicle_id);
			if (it != vehs_map.end()) {
				//there is a car with id = _veh.vehicle_id


				//check if new data is older than in vehs_map
				if (_veh.timestamp >  it->second.timestamp)
				{
					//update data in vehs_map
					vehs_map[it->first] = _veh;
				}
				else
				{
					cout << "OpenDDS data is older than data in vehs_list. Veh_id=" << _veh.vehicle_id
						<< " timestamp_vehs_list=" << it->second.timestamp
						<< " timestamp_OpenDDS=" << _veh.timestamp << endl;
				}
			}
			else
			{
				//no car with id = _veh.vehicle_id
				vehs_map.emplace(_veh.vehicle_id, _veh);

			}



			//check if we have to remove a car

			if (veh_id_to_remove!=-1)
			{
				it = vehs_map.find(veh_id_to_remove);
				if (it != vehs_map.end()) 
				{
					vehs_map.erase(it);
					cout << endl << "####################################################################################" << endl;
					cout << "############  Removed from vehsMap vehicle_id =" << veh_id_to_remove << "     ############" << endl<<endl;
					veh_id_to_remove = -1; //reset this variable
				}
			}



			//cout << "Timestamp: " << _veh.timestamp << " id=" << _veh.vehicle_id << endl;

			//cout << "Timestamp: " << _veh.timestamp << " size of map=" << vehs_map.size() << endl << endl;
		}
	}
}


void OpenDDSThread(int argc, char* argv[]){
	// start thread
	

	/*int argc;
	char* argv[]={ "-DCPSConfigFile","rtps.ini" };*/


	char key = ' ';

	DDS::DomainId_t DomainID{ 246 };

	const char * topic_traffic_vehs_name = "Mri_TrafficVeh";
	const char * topic_subject_car_name = "Mri_SubjectCar";
	
	try
	{
		std::thread threadTimestamp(TimestampThread);
		//std::cout << "*****************   Timestamp: " << GetTimestamp() << std::endl << std::endl;

		// Initialize DomainParticipantFactory
 		DDS::DomainParticipantFactory_var dpf =
			TheParticipantFactoryWithArgs(argc, argv);

		// Create DomainParticipant
		DDS::DomainParticipant_var participant =
			dpf->create_participant(DomainID,
				PARTICIPANT_QOS_DEFAULT,
				0,
				OpenDDS::DCPS::DEFAULT_STATUS_MASK);
		if (CORBA::is_nil(participant.in())) {
			cerr << "Participant: Failed to create participant..." << endl;
		}
		else {
			cout << "Participant: participant created successfully" << endl;
		}

		// Create Subscriber
		DDS::Subscriber_var subscriber = participant->create_subscriber(
			SUBSCRIBER_QOS_DEFAULT,
			DDS::SubscriberListener::_nil(),
			OpenDDS::DCPS::DEFAULT_STATUS_MASK);

		if (CORBA::is_nil(subscriber.in())) {
			cerr << "create_subscriber failed." << endl;
		}
		else {
			cout << "SubscriberClass: subscriber created correctly" << endl;
		}

		// Create Publisher
		DDS::Publisher_var publisher = participant->create_publisher(
			PUBLISHER_QOS_DEFAULT,
			DDS::PublisherListener::_nil(),
			::OpenDDS::DCPS::DEFAULT_STATUS_MASK
		);
		if (CORBA::is_nil(publisher.in())) {
			cerr << "create_publisher failed." << endl;
		}
		else {
			cout << "PublisherClass: publisher created correctly" << endl;
		}

		// run timestamp synchronization
		TimeSynchronization(participant, subscriber, publisher);


		//create reader to receive V2X message  Mri_V2XfromNS3  Mri_V2XtoNS3
		DataReader_V2XMessage reader_v2xmessage(participant, subscriber, "Mri_V2XtoNS3");
		// writer
		//DataWriter_V2XMessage writer_v2xMessage(participant, publisher, "Mri_V2XtoNS3");


		// topics:	Mri_TrafficVeh Mri_SubjectCar
		//WARNING: both readers uses the same "on_data_available" code in DataReaderListenerImpl_VehData
		//we can do this, because formats of the messages are the same
		DataReader_VehData reader_traffic_vehs(participant, subscriber, "Mri_TrafficVeh");
		DataReader_VehData reader_subject_car(participant, subscriber, "Mri_SubjectCar");



		long old_veh_timestamp = 0;
		std::map<long, Mri::VehData> vehs_map_copy;
		
		threadOpenDDS_initialized = true;

		while (key != 'q')
		{
			//Sleep(200);
			getInput(&key);

			Sleep(100);
			old_veh_timestamp = GetTimestamp() - 50;	//to find veh data not updated for 50 x 10ms = 500 ms
			if (vehs_map.size() > 0)
			{
				vehs_map_copy = vehs_map;

				for (auto& x : vehs_map_copy) {
					if (x.second.timestamp < old_veh_timestamp)
					{
						//select this veh_id to removing
						veh_id_to_remove = x.second.vehicle_id;

					}
					//std::cout << "timestamp=" << x.second.timestamp << " veh_id=" << x.second.vehicle_id << " x=" << x.second.position_x << " y=" << x.second.position_y << std::endl;
				}
				//std::cout << std::endl << std::endl;
			}

		}

		

		// Clean-up!
		participant->delete_contained_entities();
		dpf->delete_participant(participant);

		TheServiceParticipant->shutdown();
		
		threadTimestamp.detach();
		finish_application = true; 
		
	}
	catch (const CORBA::Exception& e) {
		e._tao_print_exception("Exception caught in OpenDDSThread:");
		
	}
}


bool getInput(char *c)
{
	if (_kbhit())
	{
		*c = _getch();
		return true; // Key Was Hit
	}
	return false; // No keys were pressed
}