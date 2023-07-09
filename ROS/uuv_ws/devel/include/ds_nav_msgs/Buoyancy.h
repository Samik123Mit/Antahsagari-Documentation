// Generated by gencpp from file ds_nav_msgs/Buoyancy.msg
// DO NOT EDIT!


#ifndef DS_NAV_MSGS_MESSAGE_BUOYANCY_H
#define DS_NAV_MSGS_MESSAGE_BUOYANCY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>

namespace ds_nav_msgs
{
template <class ContainerAllocator>
struct Buoyancy_
{
  typedef Buoyancy_<ContainerAllocator> Type;

  Buoyancy_()
    : header()
    , ds_header()
    , buoyancy(0.0)  {
    }
  Buoyancy_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , buoyancy(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef double _buoyancy_type;
  _buoyancy_type buoyancy;





  typedef boost::shared_ptr< ::ds_nav_msgs::Buoyancy_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_nav_msgs::Buoyancy_<ContainerAllocator> const> ConstPtr;

}; // struct Buoyancy_

typedef ::ds_nav_msgs::Buoyancy_<std::allocator<void> > Buoyancy;

typedef boost::shared_ptr< ::ds_nav_msgs::Buoyancy > BuoyancyPtr;
typedef boost::shared_ptr< ::ds_nav_msgs::Buoyancy const> BuoyancyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_nav_msgs::Buoyancy_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_nav_msgs::Buoyancy_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_nav_msgs::Buoyancy_<ContainerAllocator1> & lhs, const ::ds_nav_msgs::Buoyancy_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.buoyancy == rhs.buoyancy;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_nav_msgs::Buoyancy_<ContainerAllocator1> & lhs, const ::ds_nav_msgs::Buoyancy_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_nav_msgs::Buoyancy_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_nav_msgs::Buoyancy_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_nav_msgs::Buoyancy_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_nav_msgs::Buoyancy_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nav_msgs::Buoyancy_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nav_msgs::Buoyancy_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_nav_msgs::Buoyancy_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8b121cdd301714002177e61b4eab5532";
  }

  static const char* value(const ::ds_nav_msgs::Buoyancy_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8b121cdd30171400ULL;
  static const uint64_t static_value2 = 0x2177e61b4eab5532ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_nav_msgs::Buoyancy_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_nav_msgs/Buoyancy";
  }

  static const char* value(const ::ds_nav_msgs::Buoyancy_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_nav_msgs::Buoyancy_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"# Buoyancy term in Newtons\n"
"float64 buoyancy\n"
"\n"
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

  static const char* value(const ::ds_nav_msgs::Buoyancy_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_nav_msgs::Buoyancy_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.buoyancy);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Buoyancy_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_nav_msgs::Buoyancy_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_nav_msgs::Buoyancy_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "buoyancy: ";
    Printer<double>::stream(s, indent + "  ", v.buoyancy);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_NAV_MSGS_MESSAGE_BUOYANCY_H