// Generated by gencpp from file ds_acomms_msgs/AcousticModemData.msg
// DO NOT EDIT!


#ifndef DS_ACOMMS_MSGS_MESSAGE_ACOUSTICMODEMDATA_H
#define DS_ACOMMS_MSGS_MESSAGE_ACOUSTICMODEMDATA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_acomms_msgs
{
template <class ContainerAllocator>
struct AcousticModemData_
{
  typedef AcousticModemData_<ContainerAllocator> Type;

  AcousticModemData_()
    : stamp()
    , local_addr(0)
    , remote_addr(0)
    , payload()  {
    }
  AcousticModemData_(const ContainerAllocator& _alloc)
    : stamp()
    , local_addr(0)
    , remote_addr(0)
    , payload(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef uint16_t _local_addr_type;
  _local_addr_type local_addr;

   typedef uint16_t _remote_addr_type;
  _remote_addr_type remote_addr;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _payload_type;
  _payload_type payload;





  typedef boost::shared_ptr< ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> const> ConstPtr;

}; // struct AcousticModemData_

typedef ::ds_acomms_msgs::AcousticModemData_<std::allocator<void> > AcousticModemData;

typedef boost::shared_ptr< ::ds_acomms_msgs::AcousticModemData > AcousticModemDataPtr;
typedef boost::shared_ptr< ::ds_acomms_msgs::AcousticModemData const> AcousticModemDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator1> & lhs, const ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator2> & rhs)
{
  return lhs.stamp == rhs.stamp &&
    lhs.local_addr == rhs.local_addr &&
    lhs.remote_addr == rhs.remote_addr &&
    lhs.payload == rhs.payload;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator1> & lhs, const ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_acomms_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "22d7d9be9c4fdb70275e4faa1b656066";
  }

  static const char* value(const ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x22d7d9be9c4fdb70ULL;
  static const uint64_t static_value2 = 0x275e4faa1b656066ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_acomms_msgs/AcousticModemData";
  }

  static const char* value(const ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
"# Acoustic Modem Data\n"
"#\n"
"# Message type for sending/receiving data via acoustic modems\n"
"\n"
"# Timestamp\n"
"time stamp\n"
"\n"
"# Local modem address\n"
"#\n"
"# This is the address of the modem that received the data\n"
"uint16 local_addr\n"
"\n"
"# Remote modem address\n"
"#\n"
"# This is the address of the modem that sent the data\n"
"uint16 remote_addr\n"
"\n"
"# Data payload\n"
"uint8[] payload\n"
;
  }

  static const char* value(const ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.local_addr);
      stream.next(m.remote_addr);
      stream.next(m.payload);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AcousticModemData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_acomms_msgs::AcousticModemData_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "local_addr: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.local_addr);
    s << indent << "remote_addr: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.remote_addr);
    s << indent << "payload[]" << std::endl;
    for (size_t i = 0; i < v.payload.size(); ++i)
    {
      s << indent << "  payload[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.payload[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_ACOMMS_MSGS_MESSAGE_ACOUSTICMODEMDATA_H
