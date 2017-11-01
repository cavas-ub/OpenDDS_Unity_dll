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


#include "MriTypeSupportC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "MriTypeSupportC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// e:\opendds312\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:51

// Traits specializations for Mri::Aux2StringsTypeSupport.

Mri::Aux2StringsTypeSupport_ptr
TAO::Objref_Traits<Mri::Aux2StringsTypeSupport>::duplicate (
    Mri::Aux2StringsTypeSupport_ptr p)
{
  return Mri::Aux2StringsTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<Mri::Aux2StringsTypeSupport>::release (
    Mri::Aux2StringsTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

Mri::Aux2StringsTypeSupport_ptr
TAO::Objref_Traits<Mri::Aux2StringsTypeSupport>::nil (void)
{
  return Mri::Aux2StringsTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Mri::Aux2StringsTypeSupport>::marshal (
    const Mri::Aux2StringsTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Mri::Aux2StringsTypeSupport::Aux2StringsTypeSupport (void)
{}

Mri::Aux2StringsTypeSupport::~Aux2StringsTypeSupport (void)
{
}

Mri::Aux2StringsTypeSupport_ptr
Mri::Aux2StringsTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Aux2StringsTypeSupport::_duplicate (
      dynamic_cast<Aux2StringsTypeSupport_ptr> (_tao_objref)
    );
}

Mri::Aux2StringsTypeSupport_ptr
Mri::Aux2StringsTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Aux2StringsTypeSupport::_duplicate (
      dynamic_cast<Aux2StringsTypeSupport_ptr> (_tao_objref)
    );
}

Mri::Aux2StringsTypeSupport_ptr
Mri::Aux2StringsTypeSupport::_nil (void)
{
  return 0;
}

Mri::Aux2StringsTypeSupport_ptr
Mri::Aux2StringsTypeSupport::_duplicate (Aux2StringsTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Mri::Aux2StringsTypeSupport::_tao_release (Aux2StringsTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Mri::Aux2StringsTypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Mri/Aux2StringsTypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Mri::Aux2StringsTypeSupport::_interface_repository_id (void) const
{
  return "IDL:Mri/Aux2StringsTypeSupport:1.0";
}

::CORBA::Boolean
Mri::Aux2StringsTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// e:\opendds312\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:51

// Traits specializations for Mri::Aux2StringsDataWriter.

Mri::Aux2StringsDataWriter_ptr
TAO::Objref_Traits<Mri::Aux2StringsDataWriter>::duplicate (
    Mri::Aux2StringsDataWriter_ptr p)
{
  return Mri::Aux2StringsDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<Mri::Aux2StringsDataWriter>::release (
    Mri::Aux2StringsDataWriter_ptr p)
{
  ::CORBA::release (p);
}

Mri::Aux2StringsDataWriter_ptr
TAO::Objref_Traits<Mri::Aux2StringsDataWriter>::nil (void)
{
  return Mri::Aux2StringsDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Mri::Aux2StringsDataWriter>::marshal (
    const Mri::Aux2StringsDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Mri::Aux2StringsDataWriter::Aux2StringsDataWriter (void)
{}

Mri::Aux2StringsDataWriter::~Aux2StringsDataWriter (void)
{
}

Mri::Aux2StringsDataWriter_ptr
Mri::Aux2StringsDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Aux2StringsDataWriter::_duplicate (
      dynamic_cast<Aux2StringsDataWriter_ptr> (_tao_objref)
    );
}

Mri::Aux2StringsDataWriter_ptr
Mri::Aux2StringsDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Aux2StringsDataWriter::_duplicate (
      dynamic_cast<Aux2StringsDataWriter_ptr> (_tao_objref)
    );
}

Mri::Aux2StringsDataWriter_ptr
Mri::Aux2StringsDataWriter::_nil (void)
{
  return 0;
}

Mri::Aux2StringsDataWriter_ptr
Mri::Aux2StringsDataWriter::_duplicate (Aux2StringsDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Mri::Aux2StringsDataWriter::_tao_release (Aux2StringsDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Mri::Aux2StringsDataWriter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Mri/Aux2StringsDataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Mri::Aux2StringsDataWriter::_interface_repository_id (void) const
{
  return "IDL:Mri/Aux2StringsDataWriter:1.0";
}

::CORBA::Boolean
Mri::Aux2StringsDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// e:\opendds312\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:51

// Traits specializations for Mri::Aux2StringsDataReader.

Mri::Aux2StringsDataReader_ptr
TAO::Objref_Traits<Mri::Aux2StringsDataReader>::duplicate (
    Mri::Aux2StringsDataReader_ptr p)
{
  return Mri::Aux2StringsDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<Mri::Aux2StringsDataReader>::release (
    Mri::Aux2StringsDataReader_ptr p)
{
  ::CORBA::release (p);
}

Mri::Aux2StringsDataReader_ptr
TAO::Objref_Traits<Mri::Aux2StringsDataReader>::nil (void)
{
  return Mri::Aux2StringsDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Mri::Aux2StringsDataReader>::marshal (
    const Mri::Aux2StringsDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Mri::Aux2StringsDataReader::Aux2StringsDataReader (void)
{}

Mri::Aux2StringsDataReader::~Aux2StringsDataReader (void)
{
}

Mri::Aux2StringsDataReader_ptr
Mri::Aux2StringsDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Aux2StringsDataReader::_duplicate (
      dynamic_cast<Aux2StringsDataReader_ptr> (_tao_objref)
    );
}

Mri::Aux2StringsDataReader_ptr
Mri::Aux2StringsDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Aux2StringsDataReader::_duplicate (
      dynamic_cast<Aux2StringsDataReader_ptr> (_tao_objref)
    );
}

Mri::Aux2StringsDataReader_ptr
Mri::Aux2StringsDataReader::_nil (void)
{
  return 0;
}

Mri::Aux2StringsDataReader_ptr
Mri::Aux2StringsDataReader::_duplicate (Aux2StringsDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Mri::Aux2StringsDataReader::_tao_release (Aux2StringsDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Mri::Aux2StringsDataReader::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderEx:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Mri/Aux2StringsDataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Mri::Aux2StringsDataReader::_interface_repository_id (void) const
{
  return "IDL:Mri/Aux2StringsDataReader:1.0";
}

::CORBA::Boolean
Mri::Aux2StringsDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// e:\opendds312\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:51

// Traits specializations for Mri::V2XMessageTypeSupport.

Mri::V2XMessageTypeSupport_ptr
TAO::Objref_Traits<Mri::V2XMessageTypeSupport>::duplicate (
    Mri::V2XMessageTypeSupport_ptr p)
{
  return Mri::V2XMessageTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<Mri::V2XMessageTypeSupport>::release (
    Mri::V2XMessageTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

Mri::V2XMessageTypeSupport_ptr
TAO::Objref_Traits<Mri::V2XMessageTypeSupport>::nil (void)
{
  return Mri::V2XMessageTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Mri::V2XMessageTypeSupport>::marshal (
    const Mri::V2XMessageTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Mri::V2XMessageTypeSupport::V2XMessageTypeSupport (void)
{}

Mri::V2XMessageTypeSupport::~V2XMessageTypeSupport (void)
{
}

Mri::V2XMessageTypeSupport_ptr
Mri::V2XMessageTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return V2XMessageTypeSupport::_duplicate (
      dynamic_cast<V2XMessageTypeSupport_ptr> (_tao_objref)
    );
}

Mri::V2XMessageTypeSupport_ptr
Mri::V2XMessageTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return V2XMessageTypeSupport::_duplicate (
      dynamic_cast<V2XMessageTypeSupport_ptr> (_tao_objref)
    );
}

Mri::V2XMessageTypeSupport_ptr
Mri::V2XMessageTypeSupport::_nil (void)
{
  return 0;
}

Mri::V2XMessageTypeSupport_ptr
Mri::V2XMessageTypeSupport::_duplicate (V2XMessageTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Mri::V2XMessageTypeSupport::_tao_release (V2XMessageTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Mri::V2XMessageTypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Mri/V2XMessageTypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Mri::V2XMessageTypeSupport::_interface_repository_id (void) const
{
  return "IDL:Mri/V2XMessageTypeSupport:1.0";
}

::CORBA::Boolean
Mri::V2XMessageTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// e:\opendds312\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:51

// Traits specializations for Mri::V2XMessageDataWriter.

Mri::V2XMessageDataWriter_ptr
TAO::Objref_Traits<Mri::V2XMessageDataWriter>::duplicate (
    Mri::V2XMessageDataWriter_ptr p)
{
  return Mri::V2XMessageDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<Mri::V2XMessageDataWriter>::release (
    Mri::V2XMessageDataWriter_ptr p)
{
  ::CORBA::release (p);
}

Mri::V2XMessageDataWriter_ptr
TAO::Objref_Traits<Mri::V2XMessageDataWriter>::nil (void)
{
  return Mri::V2XMessageDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Mri::V2XMessageDataWriter>::marshal (
    const Mri::V2XMessageDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Mri::V2XMessageDataWriter::V2XMessageDataWriter (void)
{}

Mri::V2XMessageDataWriter::~V2XMessageDataWriter (void)
{
}

Mri::V2XMessageDataWriter_ptr
Mri::V2XMessageDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return V2XMessageDataWriter::_duplicate (
      dynamic_cast<V2XMessageDataWriter_ptr> (_tao_objref)
    );
}

Mri::V2XMessageDataWriter_ptr
Mri::V2XMessageDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return V2XMessageDataWriter::_duplicate (
      dynamic_cast<V2XMessageDataWriter_ptr> (_tao_objref)
    );
}

Mri::V2XMessageDataWriter_ptr
Mri::V2XMessageDataWriter::_nil (void)
{
  return 0;
}

Mri::V2XMessageDataWriter_ptr
Mri::V2XMessageDataWriter::_duplicate (V2XMessageDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Mri::V2XMessageDataWriter::_tao_release (V2XMessageDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Mri::V2XMessageDataWriter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Mri/V2XMessageDataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Mri::V2XMessageDataWriter::_interface_repository_id (void) const
{
  return "IDL:Mri/V2XMessageDataWriter:1.0";
}

::CORBA::Boolean
Mri::V2XMessageDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// e:\opendds312\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:51

// Traits specializations for Mri::V2XMessageDataReader.

Mri::V2XMessageDataReader_ptr
TAO::Objref_Traits<Mri::V2XMessageDataReader>::duplicate (
    Mri::V2XMessageDataReader_ptr p)
{
  return Mri::V2XMessageDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<Mri::V2XMessageDataReader>::release (
    Mri::V2XMessageDataReader_ptr p)
{
  ::CORBA::release (p);
}

Mri::V2XMessageDataReader_ptr
TAO::Objref_Traits<Mri::V2XMessageDataReader>::nil (void)
{
  return Mri::V2XMessageDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Mri::V2XMessageDataReader>::marshal (
    const Mri::V2XMessageDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Mri::V2XMessageDataReader::V2XMessageDataReader (void)
{}

Mri::V2XMessageDataReader::~V2XMessageDataReader (void)
{
}

Mri::V2XMessageDataReader_ptr
Mri::V2XMessageDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return V2XMessageDataReader::_duplicate (
      dynamic_cast<V2XMessageDataReader_ptr> (_tao_objref)
    );
}

Mri::V2XMessageDataReader_ptr
Mri::V2XMessageDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return V2XMessageDataReader::_duplicate (
      dynamic_cast<V2XMessageDataReader_ptr> (_tao_objref)
    );
}

Mri::V2XMessageDataReader_ptr
Mri::V2XMessageDataReader::_nil (void)
{
  return 0;
}

Mri::V2XMessageDataReader_ptr
Mri::V2XMessageDataReader::_duplicate (V2XMessageDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Mri::V2XMessageDataReader::_tao_release (V2XMessageDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Mri::V2XMessageDataReader::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderEx:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Mri/V2XMessageDataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Mri::V2XMessageDataReader::_interface_repository_id (void) const
{
  return "IDL:Mri/V2XMessageDataReader:1.0";
}

::CORBA::Boolean
Mri::V2XMessageDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// e:\opendds312\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:51

// Traits specializations for Mri::VehDataTypeSupport.

Mri::VehDataTypeSupport_ptr
TAO::Objref_Traits<Mri::VehDataTypeSupport>::duplicate (
    Mri::VehDataTypeSupport_ptr p)
{
  return Mri::VehDataTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<Mri::VehDataTypeSupport>::release (
    Mri::VehDataTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

Mri::VehDataTypeSupport_ptr
TAO::Objref_Traits<Mri::VehDataTypeSupport>::nil (void)
{
  return Mri::VehDataTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Mri::VehDataTypeSupport>::marshal (
    const Mri::VehDataTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Mri::VehDataTypeSupport::VehDataTypeSupport (void)
{}

Mri::VehDataTypeSupport::~VehDataTypeSupport (void)
{
}

Mri::VehDataTypeSupport_ptr
Mri::VehDataTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return VehDataTypeSupport::_duplicate (
      dynamic_cast<VehDataTypeSupport_ptr> (_tao_objref)
    );
}

Mri::VehDataTypeSupport_ptr
Mri::VehDataTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return VehDataTypeSupport::_duplicate (
      dynamic_cast<VehDataTypeSupport_ptr> (_tao_objref)
    );
}

Mri::VehDataTypeSupport_ptr
Mri::VehDataTypeSupport::_nil (void)
{
  return 0;
}

Mri::VehDataTypeSupport_ptr
Mri::VehDataTypeSupport::_duplicate (VehDataTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Mri::VehDataTypeSupport::_tao_release (VehDataTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Mri::VehDataTypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Mri/VehDataTypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Mri::VehDataTypeSupport::_interface_repository_id (void) const
{
  return "IDL:Mri/VehDataTypeSupport:1.0";
}

::CORBA::Boolean
Mri::VehDataTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// e:\opendds312\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:51

// Traits specializations for Mri::VehDataDataWriter.

Mri::VehDataDataWriter_ptr
TAO::Objref_Traits<Mri::VehDataDataWriter>::duplicate (
    Mri::VehDataDataWriter_ptr p)
{
  return Mri::VehDataDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<Mri::VehDataDataWriter>::release (
    Mri::VehDataDataWriter_ptr p)
{
  ::CORBA::release (p);
}

Mri::VehDataDataWriter_ptr
TAO::Objref_Traits<Mri::VehDataDataWriter>::nil (void)
{
  return Mri::VehDataDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Mri::VehDataDataWriter>::marshal (
    const Mri::VehDataDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Mri::VehDataDataWriter::VehDataDataWriter (void)
{}

Mri::VehDataDataWriter::~VehDataDataWriter (void)
{
}

Mri::VehDataDataWriter_ptr
Mri::VehDataDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return VehDataDataWriter::_duplicate (
      dynamic_cast<VehDataDataWriter_ptr> (_tao_objref)
    );
}

Mri::VehDataDataWriter_ptr
Mri::VehDataDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return VehDataDataWriter::_duplicate (
      dynamic_cast<VehDataDataWriter_ptr> (_tao_objref)
    );
}

Mri::VehDataDataWriter_ptr
Mri::VehDataDataWriter::_nil (void)
{
  return 0;
}

Mri::VehDataDataWriter_ptr
Mri::VehDataDataWriter::_duplicate (VehDataDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Mri::VehDataDataWriter::_tao_release (VehDataDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Mri::VehDataDataWriter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Mri/VehDataDataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Mri::VehDataDataWriter::_interface_repository_id (void) const
{
  return "IDL:Mri/VehDataDataWriter:1.0";
}

::CORBA::Boolean
Mri::VehDataDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// e:\opendds312\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:51

// Traits specializations for Mri::VehDataDataReader.

Mri::VehDataDataReader_ptr
TAO::Objref_Traits<Mri::VehDataDataReader>::duplicate (
    Mri::VehDataDataReader_ptr p)
{
  return Mri::VehDataDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<Mri::VehDataDataReader>::release (
    Mri::VehDataDataReader_ptr p)
{
  ::CORBA::release (p);
}

Mri::VehDataDataReader_ptr
TAO::Objref_Traits<Mri::VehDataDataReader>::nil (void)
{
  return Mri::VehDataDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Mri::VehDataDataReader>::marshal (
    const Mri::VehDataDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Mri::VehDataDataReader::VehDataDataReader (void)
{}

Mri::VehDataDataReader::~VehDataDataReader (void)
{
}

Mri::VehDataDataReader_ptr
Mri::VehDataDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return VehDataDataReader::_duplicate (
      dynamic_cast<VehDataDataReader_ptr> (_tao_objref)
    );
}

Mri::VehDataDataReader_ptr
Mri::VehDataDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return VehDataDataReader::_duplicate (
      dynamic_cast<VehDataDataReader_ptr> (_tao_objref)
    );
}

Mri::VehDataDataReader_ptr
Mri::VehDataDataReader::_nil (void)
{
  return 0;
}

Mri::VehDataDataReader_ptr
Mri::VehDataDataReader::_duplicate (VehDataDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Mri::VehDataDataReader::_tao_release (VehDataDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Mri::VehDataDataReader::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderEx:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Mri/VehDataDataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Mri::VehDataDataReader::_interface_repository_id (void) const
{
  return "IDL:Mri/VehDataDataReader:1.0";
}

::CORBA::Boolean
Mri::VehDataDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}
