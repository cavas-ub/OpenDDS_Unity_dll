#include <thread>

#include <iostream> //cout
#include <queue>
#include <utility>      // std::pair, std::make_pair
#include <math.h>       // pow, sqrt
#include <stdlib.h>     /* srand, rand */
#include <atomic> //access

#include <dds/DCPS/Service_Participant.h>	//neccessary to start_opendds OpenDDSThreat without error
#include "OpenDDS.h"	//to start_opendds OpenDDSThread
#include "MriTypeSupportImpl.h"	//Mri data formats

#include "Sleep.h"	// Sleep()
#include "TimeSync.h"
#include "QueueTs.h"
//#include "main.h"
#include "Start.h"


double const fullAngle = 2 * PI;

extern bool finish_application;
extern bool threadOpenDDS_initialized;
extern std::map<long, Mri::VehData> vehs_map;

std::thread threadVehsMap;
std::thread threadPublishSubjectCarLocation;
std::thread threadOpenDDS;
std::thread threadTimestamp;

int vehdataCount;

std::string log_rd;
//Mri::VehData* vehdata_array;

//Mri::VehData vehArray[100];



extern std::map<long, UnityVehicle> unityVehsMap;
extern std::map<long, std::set<UnityVehicle>> unityVehsMapSets;
extern std::atomic<int> access_unityVehMapSets;




extern Mri::VehData subjectCar;
extern QueueTs<Mri::VehData> vehdata_queue_in;


extern long veh_id_to_remove;


UnityVehicle unityVehArray[200];


//void getVehsArray(int* Num_Vehicles, UnityVehicle** VehicleData) {
//
//
//	int indx = 0;
//	*Num_Vehicles = 0;
//
//
//	if (vehs_map.size()>0)
//	{
//		std::map<long, Mri::VehData> vehs_map_copy2;
//		vehs_map_copy2 = vehs_map;
//
//		std::cout << "............." << std::endl;
//
//		for (auto& x : vehs_map_copy2) {
//			vehArray[indx] = x.second;
//
//			indx++;
//
//			std::cout << x.second.timestamp << "   vehId:" << x.second.vehicle_id << std::endl;
//
//		}
//
//		*VehicleData = vehArray;
//		*Num_Vehicles = indx;
//
//	}
//	else
//	{
//		std::cout << "..VehsMap empty ..." << std::endl;
//
//	}
//
//}


void getVehsArray(int* Num_Vehicles, UnityVehicle** unityVehicleData) {


	int indx = 0;
	*Num_Vehicles = 0;
	log_rd = "";


	if (access_unityVehMapSets != ACCESS_none  && access_unityVehMapSets != ACCESS_getVehsArray)
	{
		//request for access
		access_unityVehMapSets = ACCESS_request_getVehsArray;
	}

	while (access_unityVehMapSets != ACCESS_none && access_unityVehMapSets != ACCESS_getVehsArray) {             // wait while getVehsArray accessing VehMapSets
		
		std::this_thread::yield();
	}

	access_unityVehMapSets = ACCESS_getVehsArray;

	try
	{
		if (unityVehsMapSets.size()>0)
		{

			long interpolate_timestamp = GetTimestamp() - 15;	//interpolate location of vehicle 15 x 10 ms = 150 ms ago
			long elapsedMicrosecondsFromLastTimeSTamp = GetElapsedMicroseconds();

			//std::map<long, std::set<UnityVehicle>> vehs_map_copy2;
			//vehs_map_copy2 = unityVehsMapSets;

			std::set<UnityVehicle> setUnityVehs;




			log_rd += " before auto x";





			//std::cout << "    interpolate timestamp=" << interpolate_timestamp << std::endl;

			for (auto& x : unityVehsMapSets) {

				setUnityVehs = x.second;


				log_rd = "START, go to interpolate";
				
				
				
				
				UnityVehicle uVeh = interpolateVehPosition(&setUnityVehs, interpolate_timestamp, elapsedMicrosecondsFromLastTimeSTamp);


				log_rd += ", after interpolate, indx=";
				log_rd += std::to_string(indx);

				// vehicle_id!=-1 means we couldn't get interpolated location of vehicle
				if (uVeh.vehicle_id != -1)
				{
					unityVehArray[indx] = uVeh;
					indx++;

					// update map
					x.second = setUnityVehs;

					log_rd += ", after update map";
				}





				//std::cout << x.second.timestamp << "   vehId:" << x.second.vehicle_id << std::endl;

			}

			*unityVehicleData = unityVehArray;
			*Num_Vehicles = indx;

			log_rd += ", almost end, indx=";
			log_rd += std::to_string(indx);

			std::cout << "------------------------------------------------------num vehs=" << indx << std::endl;

		}

		else

		{
			std::cout << "..VehsMap empty ..." << std::endl;

		}

		access_unityVehMapSets = ACCESS_none;
		log_rd += ", END  ";
		
		
	}
	catch (const std::exception&)
	{
		std::cout << "ERROR !" << std::endl;
		access_unityVehMapSets = ACCESS_none;
		log_rd += ", Error at the end";
	}
	

	
}



UnityVehicle interpolateVehPosition(std::set<UnityVehicle> *  _set, long x_timestamp, long x_elapsed_microseconds) {

	UnityVehicle unityVehicle;
	UnityVehicle uPrev;
	UnityVehicle uNext;

	//if we didn't interpolate, return id=-1
	unityVehicle.vehicle_id = -1;

	int setSize = _set->size();

	if (setSize >= 4)
	{

		//std::cout << ' ' << it.;
		try
		{
			for (std::set<UnityVehicle>::iterator it = _set->begin(); it != _set->end(); ++it)
			{
				if (x_timestamp < it->timestamp)
				{

					uNext = *it;

					log_rd += ", before lerp";

					//check if it is no beginning of the set
					if (it != _set->begin())
					{
						it--;
						uPrev = *it;
						unityVehicle = lerpRD(&uPrev, &uNext, x_timestamp, x_elapsed_microseconds);

						//check if it is no beginning of the set

						{
							if (it != _set->begin()) {
								//std::cout << "............erase%%%%";
								it--;
								_set->erase(_set->begin(), it);
								//std::cout << "%%set......" << std::endl << std::endl;
								log_rd += ", after erase";
							}

						}
					}












					break;
				}

			}

		}
		catch (const std::exception&)
		{
			
				std::cout << "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEERRRRRRRRRRRRRRRRRRRRRoR" << std::endl;
			
		}


		


	}

	return unityVehicle;

}

UnityVehicle lerpRD(UnityVehicle * u_prev, UnityVehicle * u_next, long x_timestamp, long elapsedMicrosecond) {


	UnityVehicle _vehicle = *u_prev;
	try
	{
		long timestamp_prev_us = u_prev->timestamp * 1000; //in microseconds
		long timestamp_next_us = u_next->timestamp * 1000;
		long x_timestamp_us = (x_timestamp * 1000) + elapsedMicrosecond;

		//long timestamp_prev = u_prev->timestamp;
		//long timestamp_next = u_next->timestamp;

		float factor = (float)(x_timestamp_us - timestamp_prev_us) / (timestamp_next_us - timestamp_prev_us);

		_vehicle.position_x = u_prev->position_x + ((u_next->position_x - u_prev->position_x) * factor);
		_vehicle.position_y = u_prev->position_y + ((u_next->position_y - u_prev->position_y) * factor);
		_vehicle.position_z = u_prev->position_z + ((u_next->position_z - u_prev->position_z) * factor);
	}
	catch (const std::exception&)
	{
		std::cout << "ERROR" << std::endl;
	}
	

	


	return _vehicle;
}



void updateSubjectCarLocation(long veh_id, float pos_x, float pos_y, float pos_z, float heading, float pitch, float roll) {
	
	// normalize radian angle
	
	//fullAngle - const = 2 * PI

	double heading_rad = fmod((heading + (PI / 2) + fullAngle), fullAngle);
	double pitch_rad = fmod((pitch + (PI / 2) + fullAngle), fullAngle);
	double roll_rad = fmod((roll + (PI / 2) + fullAngle), fullAngle);



	subjectCar.vehicle_id = veh_id;
	subjectCar.position_x = (double)pos_x;
	subjectCar.position_y = (double)pos_y;
	subjectCar.position_z = (double)pos_z;

	subjectCar.orient_heading = (double)heading_rad;
	subjectCar.orient_pitch = (double)pitch_rad;
	subjectCar.orient_roll = (double)roll_rad;

}


//void getVehsArray(int* Num_Vehicles, UnityVehicle** unityVehicleData) {
//
//
//	int indx = 0;
//	*Num_Vehicles = 0;
//
//
//	if (unityVehsMap.size()>0)
//	{
//		std::map<long, UnityVehicle> vehs_map_copy2;
//		vehs_map_copy2 = unityVehsMap;
//
//		//std::cout << "............." << std::endl;
//
//		for (auto& x : vehs_map_copy2) {
//			unityVehArray[indx] = x.second;
//
//			indx++;
//
//			//std::cout << x.second.timestamp << "   vehId:" << x.second.vehicle_id << std::endl;
//
//		}
//
//		*unityVehicleData = unityVehArray;
//		*Num_Vehicles = indx;
//
//	}
//	else
//	{
//		std::cout << "..VehsMap empty ..." << std::endl;
//
//	}
//
//
//
//
//}


//void getVehs() {
//	Mri::VehData vehArray[100];
//
//	if (vehs_map.size()>0)
//	{
//		std::map<long, Mri::VehData> vehs_map_copy2;
//		vehs_map_copy2 = vehs_map;
//
//		std::cout << "............." << std::endl;
//
//		int indx = 0;
//
//		for (auto& x : vehs_map_copy2) {
//			vehArray[indx] = x.second;
//			indx++;
//			std::cout << x.second.timestamp << "   vehId:" << x.second.vehicle_id<< std::endl;
//		}
//	}
//	else
//	{
//		std::cout << "..VehsMap empty ..." << std::endl;
//
//	}
//
//
//}

void start_opendds() {

	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&  START &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&";
	finish_application = false;

	threadOpenDDS_initialized = false;
	char *argv2[] = { "-DCPSConfigFile","C:\\rtps\\rtps.ini" };
	int argc = 2;


	long old_veh_timestamp = 0;

	//unityVehArray
	unityVehsMap.clear();


	//clear vehdata_queue_in
	std::queue <Mri::VehData>vehdata_queue_empty;
	vehdata_queue_in.swap(&vehdata_queue_empty);



	threadTimestamp = std::thread (TimestampThread);

	//std::thread threadOpenDDS(OpenDDSThread, argc, argv2);

	threadOpenDDS = std::thread(OpenDDSThread, argc, argv2);


	while (!threadOpenDDS_initialized)
	{
		//wait until threadOpenDDS is initialized;
	}

	//std::thread threadVehsMap(vehsMapThread);

	threadVehsMap = std::thread( unityVehsMapThread);
	threadPublishSubjectCarLocation = std::thread(publishSubjectCarLocationThread);

	//srand(time(NULL));











	//std::map<long, UnityVehicle> unityVehsMap_copy;

	//std::chrono::time_point<std::chrono::system_clock> t = std::chrono::system_clock::now();	//sleep below
	//																							// main loop
	//while (!finish_application)
	//{
	//	//std::cout << "From Start.cpp: " << argc << std::endl;


	//	t += std::chrono::milliseconds(500);	//each loop 50 ms
	//	std::this_thread::sleep_until(t);



	//	old_veh_timestamp = GetTimestamp() - 50;	//to find veh data not updated for 50 x 10ms = 500 ms
	//	if (unityVehsMap.size() > 0)
	//	{
	//		unityVehsMap_copy = unityVehsMap;

	//		for (auto& x : unityVehsMap_copy) {
	//			if (x.second.timestamp < old_veh_timestamp)
	//			{
	//				//select this veh_id to removing
	//				veh_id_to_remove = x.second.vehicle_id;

	//			}
	//			//std::cout << "timestamp=" << x.second.timestamp << " veh_id=" << x.second.vehicle_id << " x=" << x.second.position_x << " y=" << x.second.position_y << std::endl;
	//		}






	//	}

	//}
	////wait for a finish of all threads

	std::cout << "Thread unityVehsMap started "<< std::endl;

	


	/*threadOpenDDS.detach();
	threadVehsMap.detach();*/



	

}


void stop_opendds() {
	std::cout << "---------------------------------  Try to  STOP ------------------------------------";
	
	finish_application = true;
	

	threadTimestamp.detach();
	threadVehsMap.detach();
	threadPublishSubjectCarLocation.detach();
	Sleep(1000);
	threadOpenDDS.detach();
	

	

	
	std::cout << "---------------------------------   STOPPED ------------------------------------";
	
	
}

int  getR() {

	int numVehicles;
	UnityVehicle * vehicleData;

	getVehsArray(&numVehicles, &vehicleData);

	//getVehs();

	return numVehicles;
}



int getD() {
	return 34;
}