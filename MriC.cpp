// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p12
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// e:\opendds312\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:376


#include "MriC.h"
#include "tao/CDR.h"

#if !defined (__ACE_INLINE__)
#include "MriC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// e:\opendds312\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Mri::Aux2Strings &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.receiverId) &&
    (strm << _tao_aggregate.senderId) &&
    (strm << _tao_aggregate.str1.in ()) &&
    (strm << _tao_aggregate.str2.in ()) &&
    (strm << _tao_aggregate.tag.in ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Mri::Aux2Strings &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.receiverId) &&
    (strm >> _tao_aggregate.senderId) &&
    (strm >> _tao_aggregate.str1.out ()) &&
    (strm >> _tao_aggregate.str2.out ()) &&
    (strm >> _tao_aggregate.tag.out ());
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\opendds312\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Mri::V2XMessage &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.sender_id) &&
    (strm << _tao_aggregate.sender_timestamp) &&
    (strm << _tao_aggregate.message.in ()) &&
    (strm << _tao_aggregate.recipient_id) &&
    (strm << _tao_aggregate.recipient_timestamp);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Mri::V2XMessage &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.sender_id) &&
    (strm >> _tao_aggregate.sender_timestamp) &&
    (strm >> _tao_aggregate.message.out ()) &&
    (strm >> _tao_aggregate.recipient_id) &&
    (strm >> _tao_aggregate.recipient_timestamp);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\opendds312\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Mri::VehData &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.timestamp) &&
    (strm << _tao_aggregate.vehicle_id) &&
    (strm << _tao_aggregate.vehicle_type) &&
    (strm << _tao_aggregate.model_file_name.in ()) &&
    (strm << _tao_aggregate.color) &&
    (strm << _tao_aggregate.position_x) &&
    (strm << _tao_aggregate.position_y) &&
    (strm << _tao_aggregate.position_z) &&
    (strm << _tao_aggregate.orient_heading) &&
    (strm << _tao_aggregate.orient_pitch) &&
    (strm << _tao_aggregate.orient_roll) &&
    (strm << _tao_aggregate.speed) &&
    (strm << _tao_aggregate.leading_vehicle_id) &&
    (strm << _tao_aggregate.trailing_vehicle_id) &&
    (strm << _tao_aggregate.link_id) &&
    (strm << _tao_aggregate.link_name.in ()) &&
    (strm << _tao_aggregate.link_coordinate) &&
    (strm << _tao_aggregate.lane_index) &&
    (strm << _tao_aggregate.turning_indicator);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Mri::VehData &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.timestamp) &&
    (strm >> _tao_aggregate.vehicle_id) &&
    (strm >> _tao_aggregate.vehicle_type) &&
    (strm >> _tao_aggregate.model_file_name.out ()) &&
    (strm >> _tao_aggregate.color) &&
    (strm >> _tao_aggregate.position_x) &&
    (strm >> _tao_aggregate.position_y) &&
    (strm >> _tao_aggregate.position_z) &&
    (strm >> _tao_aggregate.orient_heading) &&
    (strm >> _tao_aggregate.orient_pitch) &&
    (strm >> _tao_aggregate.orient_roll) &&
    (strm >> _tao_aggregate.speed) &&
    (strm >> _tao_aggregate.leading_vehicle_id) &&
    (strm >> _tao_aggregate.trailing_vehicle_id) &&
    (strm >> _tao_aggregate.link_id) &&
    (strm >> _tao_aggregate.link_name.out ()) &&
    (strm >> _tao_aggregate.link_coordinate) &&
    (strm >> _tao_aggregate.lane_index) &&
    (strm >> _tao_aggregate.turning_indicator);
}

TAO_END_VERSIONED_NAMESPACE_DECL


