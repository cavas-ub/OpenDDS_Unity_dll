/* -*- C++ -*- */
/* Generated by ..\..\..\bin\opendds_idl version 3.12 (ACE version 6.2a_p12) running on input file Mri.idl */
#ifndef OPENDDS_IDL_GENERATED_MRITYPESUPPORTIMPL_H_OJWMGO
#define OPENDDS_IDL_GENERATED_MRITYPESUPPORTIMPL_H_OJWMGO
#include "MriC.h"
#include "dds/DCPS/Definitions.h"
#include "dds/DdsDcpsC.h"
#include "MriTypeSupportC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/TypeSupportImpl.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: Mri */



/* Begin STRUCT: Aux2Strings */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

mriCommon_Export
void gen_find_size(const Mri::Aux2Strings& stru, size_t& size, size_t& padding);

mriCommon_Export
bool operator<<(Serializer& strm, const Mri::Aux2Strings& stru);

mriCommon_Export
bool operator>>(Serializer& strm, Mri::Aux2Strings& stru);

mriCommon_Export
size_t gen_max_marshaled_size(const Mri::Aux2Strings& stru, bool align);

mriCommon_Export
size_t gen_max_marshaled_size(KeyOnly<const Mri::Aux2Strings> stru, bool align);

mriCommon_Export
void gen_find_size(KeyOnly<const Mri::Aux2Strings> stru, size_t& size, size_t& padding);

mriCommon_Export
bool operator<<(Serializer& strm, KeyOnly<const Mri::Aux2Strings> stru);

mriCommon_Export
bool operator>>(Serializer& strm, KeyOnly<Mri::Aux2Strings> stru);

template <>
struct MarshalTraits<Mri::Aux2Strings> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Mri {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct mriCommon_Export Aux2Strings_OpenDDS_KeyLessThan {
  bool operator()(const Mri::Aux2Strings&, const Mri::Aux2Strings&) const
  {
    // Eith no DCPS_DATA_KEYs, return false
    // to allow use of map with just one entry
    return false;
  }
};
}


namespace Mri {
class Aux2StringsTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Mri::Aux2Strings> {
  typedef Mri::Aux2Strings MessageType;
  typedef Mri::Aux2StringsSeq MessageSequenceType;
  typedef Mri::Aux2StringsTypeSupport TypeSupportType;
  typedef Mri::Aux2StringsTypeSupportImpl TypeSupportTypeImpl;
  typedef Mri::Aux2StringsDataWriter DataWriterType;
  typedef Mri::Aux2StringsDataReader DataReaderType;
  typedef Mri::Aux2Strings_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Mri::Aux2Strings"; }
  static bool gen_has_key () { return false; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Mri {
class mriCommon_Export Aux2StringsTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<Aux2StringsTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Aux2Strings> TraitsType;
  typedef Aux2StringsTypeSupport TypeSupportType;
  typedef Aux2StringsTypeSupport::_var_type _var_type;
  typedef Aux2StringsTypeSupport::_ptr_type _ptr_type;

  Aux2StringsTypeSupportImpl() {}
  virtual ~Aux2StringsTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static Aux2StringsTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
mriCommon_Export
const MetaStruct& getMetaStruct<Mri::Aux2Strings>();
mriCommon_Export
bool gen_skip_over(Serializer& ser, Mri::Aux2Strings*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Aux2Strings */


/* Begin STRUCT: V2XMessage */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

mriCommon_Export
void gen_find_size(const Mri::V2XMessage& stru, size_t& size, size_t& padding);

mriCommon_Export
bool operator<<(Serializer& strm, const Mri::V2XMessage& stru);

mriCommon_Export
bool operator>>(Serializer& strm, Mri::V2XMessage& stru);

mriCommon_Export
size_t gen_max_marshaled_size(const Mri::V2XMessage& stru, bool align);

mriCommon_Export
size_t gen_max_marshaled_size(KeyOnly<const Mri::V2XMessage> stru, bool align);

mriCommon_Export
void gen_find_size(KeyOnly<const Mri::V2XMessage> stru, size_t& size, size_t& padding);

mriCommon_Export
bool operator<<(Serializer& strm, KeyOnly<const Mri::V2XMessage> stru);

mriCommon_Export
bool operator>>(Serializer& strm, KeyOnly<Mri::V2XMessage> stru);

template <>
struct MarshalTraits<Mri::V2XMessage> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Mri {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct mriCommon_Export V2XMessage_OpenDDS_KeyLessThan {
  bool operator()(const Mri::V2XMessage& v1, const Mri::V2XMessage& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.sender_id < v2.sender_id) return true;
    if (v2.sender_id < v1.sender_id) return false;
    return false;
  }
};
}


namespace Mri {
class V2XMessageTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Mri::V2XMessage> {
  typedef Mri::V2XMessage MessageType;
  typedef Mri::V2XMessageSeq MessageSequenceType;
  typedef Mri::V2XMessageTypeSupport TypeSupportType;
  typedef Mri::V2XMessageTypeSupportImpl TypeSupportTypeImpl;
  typedef Mri::V2XMessageDataWriter DataWriterType;
  typedef Mri::V2XMessageDataReader DataReaderType;
  typedef Mri::V2XMessage_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Mri::V2XMessage"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Mri {
class mriCommon_Export V2XMessageTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<V2XMessageTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<V2XMessage> TraitsType;
  typedef V2XMessageTypeSupport TypeSupportType;
  typedef V2XMessageTypeSupport::_var_type _var_type;
  typedef V2XMessageTypeSupport::_ptr_type _ptr_type;

  V2XMessageTypeSupportImpl() {}
  virtual ~V2XMessageTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static V2XMessageTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
mriCommon_Export
const MetaStruct& getMetaStruct<Mri::V2XMessage>();
mriCommon_Export
bool gen_skip_over(Serializer& ser, Mri::V2XMessage*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: V2XMessage */


/* Begin STRUCT: VehData */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

mriCommon_Export
void gen_find_size(const Mri::VehData& stru, size_t& size, size_t& padding);

mriCommon_Export
bool operator<<(Serializer& strm, const Mri::VehData& stru);

mriCommon_Export
bool operator>>(Serializer& strm, Mri::VehData& stru);

mriCommon_Export
size_t gen_max_marshaled_size(const Mri::VehData& stru, bool align);

mriCommon_Export
size_t gen_max_marshaled_size(KeyOnly<const Mri::VehData> stru, bool align);

mriCommon_Export
void gen_find_size(KeyOnly<const Mri::VehData> stru, size_t& size, size_t& padding);

mriCommon_Export
bool operator<<(Serializer& strm, KeyOnly<const Mri::VehData> stru);

mriCommon_Export
bool operator>>(Serializer& strm, KeyOnly<Mri::VehData> stru);

template <>
struct MarshalTraits<Mri::VehData> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Mri {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct mriCommon_Export VehData_OpenDDS_KeyLessThan {
  bool operator()(const Mri::VehData&, const Mri::VehData&) const
  {
    // Eith no DCPS_DATA_KEYs, return false
    // to allow use of map with just one entry
    return false;
  }
};
}


namespace Mri {
class VehDataTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Mri::VehData> {
  typedef Mri::VehData MessageType;
  typedef Mri::VehDataSeq MessageSequenceType;
  typedef Mri::VehDataTypeSupport TypeSupportType;
  typedef Mri::VehDataTypeSupportImpl TypeSupportTypeImpl;
  typedef Mri::VehDataDataWriter DataWriterType;
  typedef Mri::VehDataDataReader DataReaderType;
  typedef Mri::VehData_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Mri::VehData"; }
  static bool gen_has_key () { return false; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Mri {
class mriCommon_Export VehDataTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<VehDataTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<VehData> TraitsType;
  typedef VehDataTypeSupport TypeSupportType;
  typedef VehDataTypeSupport::_var_type _var_type;
  typedef VehDataTypeSupport::_ptr_type _ptr_type;

  VehDataTypeSupportImpl() {}
  virtual ~VehDataTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static VehDataTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
mriCommon_Export
const MetaStruct& getMetaStruct<Mri::VehData>();
mriCommon_Export
bool gen_skip_over(Serializer& ser, Mri::VehData*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: VehData */

/* End MODULE: Mri */
#endif /* OPENDDS_IDL_GENERATED_MRITYPESUPPORTIMPL_H_OJWMGO */
