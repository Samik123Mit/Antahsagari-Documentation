// Generated by gencpp from file ds_ocomms_msgs/XfrStatus.msg
// DO NOT EDIT!


#ifndef DS_OCOMMS_MSGS_MESSAGE_XFRSTATUS_H
#define DS_OCOMMS_MSGS_MESSAGE_XFRSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>

namespace ds_ocomms_msgs
{
template <class ContainerAllocator>
struct XfrStatus_
{
  typedef XfrStatus_<ContainerAllocator> Type;

  XfrStatus_()
    : header()
    , ds_header()
    , source()
    , transmit_xfr_state()
    , to_send(0.0)
    , sent(0.0)
    , bytes_sent(0.0)
    , tot_bytes_send(0.0)
    , receive_xfr_state()
    , to_except(0.0)
    , received(0.0)
    , tot_bytes_expected(0.0)
    , tot_bytes_received(0.0)  {
    }
  XfrStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , source(_alloc)
    , transmit_xfr_state(_alloc)
    , to_send(0.0)
    , sent(0.0)
    , bytes_sent(0.0)
    , tot_bytes_send(0.0)
    , receive_xfr_state(_alloc)
    , to_except(0.0)
    , received(0.0)
    , tot_bytes_expected(0.0)
    , tot_bytes_received(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _source_type;
  _source_type source;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _transmit_xfr_state_type;
  _transmit_xfr_state_type transmit_xfr_state;

   typedef float _to_send_type;
  _to_send_type to_send;

   typedef float _sent_type;
  _sent_type sent;

   typedef float _bytes_sent_type;
  _bytes_sent_type bytes_sent;

   typedef float _tot_bytes_send_type;
  _tot_bytes_send_type tot_bytes_send;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _receive_xfr_state_type;
  _receive_xfr_state_type receive_xfr_state;

   typedef float _to_except_type;
  _to_except_type to_except;

   typedef float _received_type;
  _received_type received;

   typedef float _tot_bytes_expected_type;
  _tot_bytes_expected_type tot_bytes_expected;

   typedef float _tot_bytes_received_type;
  _tot_bytes_received_type tot_bytes_received;





  typedef boost::shared_ptr< ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> const> ConstPtr;

}; // struct XfrStatus_

typedef ::ds_ocomms_msgs::XfrStatus_<std::allocator<void> > XfrStatus;

typedef boost::shared_ptr< ::ds_ocomms_msgs::XfrStatus > XfrStatusPtr;
typedef boost::shared_ptr< ::ds_ocomms_msgs::XfrStatus const> XfrStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator1> & lhs, const ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.source == rhs.source &&
    lhs.transmit_xfr_state == rhs.transmit_xfr_state &&
    lhs.to_send == rhs.to_send &&
    lhs.sent == rhs.sent &&
    lhs.bytes_sent == rhs.bytes_sent &&
    lhs.tot_bytes_send == rhs.tot_bytes_send &&
    lhs.receive_xfr_state == rhs.receive_xfr_state &&
    lhs.to_except == rhs.to_except &&
    lhs.received == rhs.received &&
    lhs.tot_bytes_expected == rhs.tot_bytes_expected &&
    lhs.tot_bytes_received == rhs.tot_bytes_received;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator1> & lhs, const ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_ocomms_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "add2839e93cd26a7df60b1fe2e0680e7";
  }

  static const char* value(const ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xadd2839e93cd26a7ULL;
  static const uint64_t static_value2 = 0xdf60b1fe2e0680e7ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_ocomms_msgs/XfrStatus";
  }

  static const char* value(const ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"string source\n"
"string transmit_xfr_state\n"
"float32 to_send\n"
"float32 sent\n"
"float32 bytes_sent\n"
"float32 tot_bytes_send\n"
"string receive_xfr_state\n"
"float32 to_except\n"
"float32 received\n"
"float32 tot_bytes_expected\n"
"float32 tot_bytes_received\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: ds_core_msgs/DsHeader\n"
"# This is half our standard header for ds_msgs; see\n"
"# HEADERS.md for details\n"
"\n"
"# This header should ALWAYS be paired with a std_msgs/Header\n"
"# and should ALWAYS reference HEADERS.md.  If you're looking at this\n"
"# file to add headers to a type, you probably want to copy/paste\n"
"# the following block:\n"
"#\n"
"#     # The standard 2-part DsHeader block\n"
"#     # This allows both a standard ROS header and DS-specific header blocks\n"
"#     # See HEADERS.md in ds_core_msgs for details\n"
"#     std_msgs/Header header\n"
"#     ds_core_msgs/DsHeader ds_header\n"
"#\n"
"\n"
"# Time data was received or sent out (i/o time)\n"
"time io_time\n"
"\n"
"# Sensor source UUID\n"
"uint8[16] source_uuid\n"
"\n"
;
  }

  static const char* value(const ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.source);
      stream.next(m.transmit_xfr_state);
      stream.next(m.to_send);
      stream.next(m.sent);
      stream.next(m.bytes_sent);
      stream.next(m.tot_bytes_send);
      stream.next(m.receive_xfr_state);
      stream.next(m.to_except);
      stream.next(m.received);
      stream.next(m.tot_bytes_expected);
      stream.next(m.tot_bytes_received);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct XfrStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_ocomms_msgs::XfrStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "source: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.source);
    s << indent << "transmit_xfr_state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.transmit_xfr_state);
    s << indent << "to_send: ";
    Printer<float>::stream(s, indent + "  ", v.to_send);
    s << indent << "sent: ";
    Printer<float>::stream(s, indent + "  ", v.sent);
    s << indent << "bytes_sent: ";
    Printer<float>::stream(s, indent + "  ", v.bytes_sent);
    s << indent << "tot_bytes_send: ";
    Printer<float>::stream(s, indent + "  ", v.tot_bytes_send);
    s << indent << "receive_xfr_state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.receive_xfr_state);
    s << indent << "to_except: ";
    Printer<float>::stream(s, indent + "  ", v.to_except);
    s << indent << "received: ";
    Printer<float>::stream(s, indent + "  ", v.received);
    s << indent << "tot_bytes_expected: ";
    Printer<float>::stream(s, indent + "  ", v.tot_bytes_expected);
    s << indent << "tot_bytes_received: ";
    Printer<float>::stream(s, indent + "  ", v.tot_bytes_received);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_OCOMMS_MSGS_MESSAGE_XFRSTATUS_H
