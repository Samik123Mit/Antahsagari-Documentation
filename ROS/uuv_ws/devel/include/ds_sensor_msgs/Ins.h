// Generated by gencpp from file ds_sensor_msgs/Ins.msg
// DO NOT EDIT!


#ifndef DS_SENSOR_MSGS_MESSAGE_INS_H
#define DS_SENSOR_MSGS_MESSAGE_INS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace ds_sensor_msgs
{
template <class ContainerAllocator>
struct Ins_
{
  typedef Ins_<ContainerAllocator> Type;

  Ins_()
    : header()
    , ds_header()
    , roll(0.0)
    , pitch(0.0)
    , heading(0.0)
    , orientation()
    , angular_velocity()
    , linear_velocity()
    , linear_acceleration()
    , latitude(0.0)  {
    }
  Ins_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , roll(0.0)
    , pitch(0.0)
    , heading(0.0)
    , orientation(_alloc)
    , angular_velocity(_alloc)
    , linear_velocity(_alloc)
    , linear_acceleration(_alloc)
    , latitude(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef double _roll_type;
  _roll_type roll;

   typedef double _pitch_type;
  _pitch_type pitch;

   typedef double _heading_type;
  _heading_type heading;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _angular_velocity_type;
  _angular_velocity_type angular_velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _linear_velocity_type;
  _linear_velocity_type linear_velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _linear_acceleration_type;
  _linear_acceleration_type linear_acceleration;

   typedef double _latitude_type;
  _latitude_type latitude;





  typedef boost::shared_ptr< ::ds_sensor_msgs::Ins_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_sensor_msgs::Ins_<ContainerAllocator> const> ConstPtr;

}; // struct Ins_

typedef ::ds_sensor_msgs::Ins_<std::allocator<void> > Ins;

typedef boost::shared_ptr< ::ds_sensor_msgs::Ins > InsPtr;
typedef boost::shared_ptr< ::ds_sensor_msgs::Ins const> InsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_sensor_msgs::Ins_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_sensor_msgs::Ins_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_sensor_msgs::Ins_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::Ins_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.roll == rhs.roll &&
    lhs.pitch == rhs.pitch &&
    lhs.heading == rhs.heading &&
    lhs.orientation == rhs.orientation &&
    lhs.angular_velocity == rhs.angular_velocity &&
    lhs.linear_velocity == rhs.linear_velocity &&
    lhs.linear_acceleration == rhs.linear_acceleration &&
    lhs.latitude == rhs.latitude;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_sensor_msgs::Ins_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::Ins_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_sensor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::Ins_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::Ins_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::Ins_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::Ins_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::Ins_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::Ins_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_sensor_msgs::Ins_<ContainerAllocator> >
{
  static const char* value()
  {
    return "170b13080c60d3dbce83a0db9104f813";
  }

  static const char* value(const ::ds_sensor_msgs::Ins_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x170b13080c60d3dbULL;
  static const uint64_t static_value2 = 0xce83a0db9104f813ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_sensor_msgs::Ins_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_sensor_msgs/Ins";
  }

  static const char* value(const ::ds_sensor_msgs::Ins_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_sensor_msgs::Ins_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message for an Inertial Navigation System \n"
"# operating not-quite in INS mode\n"
"\n"
"# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"# In degrees.  For humans.\n"
"# Follows Fossen N-E-D notation\n"
"float64 roll\n"
"float64 pitch\n"
"float64 heading\n"
"\n"
"# modelled after sensor_msgs/Imu.msg\n"
"\n"
"# Global-frame, E/N/U\n"
"geometry_msgs/Quaternion orientation\n"
"\n"
"# Global-frame, X/Y/Z\n"
"geometry_msgs/Vector3 angular_velocity\n"
"\n"
"# Global-frame, E-N-U\n"
"geometry_msgs/Vector3 linear_velocity\n"
"\n"
"# Global-frame, E-N-U\n"
"geometry_msgs/Vector3 linear_acceleration\n"
"\n"
"\n"
"# VERY approximate latitude\n"
"float64 latitude\n"
"\n"
"\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::ds_sensor_msgs::Ins_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_sensor_msgs::Ins_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.heading);
      stream.next(m.orientation);
      stream.next(m.angular_velocity);
      stream.next(m.linear_velocity);
      stream.next(m.linear_acceleration);
      stream.next(m.latitude);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Ins_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_sensor_msgs::Ins_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_sensor_msgs::Ins_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
    s << indent << "angular_velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.angular_velocity);
    s << indent << "linear_velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.linear_velocity);
    s << indent << "linear_acceleration: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.linear_acceleration);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_SENSOR_MSGS_MESSAGE_INS_H
