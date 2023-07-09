// Generated by gencpp from file ds_sensor_msgs/RdiPD5.msg
// DO NOT EDIT!


#ifndef DS_SENSOR_MSGS_MESSAGE_RDIPD5_H
#define DS_SENSOR_MSGS_MESSAGE_RDIPD5_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>

namespace ds_sensor_msgs
{
template <class ContainerAllocator>
struct RdiPD5_
{
  typedef RdiPD5_<ContainerAllocator> Type;

  RdiPD5_()
    : header()
    , ds_header()
    , dvl_type(0)
    , altitude_sum(0.0)
    , speed_gnd(0.0)
    , course_gnd(0.0)
    , good_beams(0)
    , dvl_time(0.0)
    , config(0)
    , coord_mode(0)
    , velocity()
    , range()
    , bottom_status(0)
    , layer_velocity()
    , ref_layer_start(0.0)
    , ref_layer_end(0.0)
    , ref_layer_status(0)
    , tofp_hour(0)
    , tofp_minute(0)
    , tofp_second(0)
    , tofp_hundreths(0)
    , bit_results(0)
    , sound_vel(0)
    , temperature(0.0)
    , salinity(0.0)
    , depth(0.0)
    , pitch(0.0)
    , roll(0.0)
    , heading(0.0)
    , bt_distance_east(0)
    , bt_distance_north(0)
    , bt_distance_up(0)
    , bt_distance_error(0)
    , ref_distance_east(0)
    , ref_distance_north(0)
    , ref_distance_up(0)
    , ref_distance_error(0)  {
      velocity.assign(0.0);

      range.assign(0.0);

      layer_velocity.assign(0.0);
  }
  RdiPD5_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , dvl_type(0)
    , altitude_sum(0.0)
    , speed_gnd(0.0)
    , course_gnd(0.0)
    , good_beams(0)
    , dvl_time(0.0)
    , config(0)
    , coord_mode(0)
    , velocity()
    , range()
    , bottom_status(0)
    , layer_velocity()
    , ref_layer_start(0.0)
    , ref_layer_end(0.0)
    , ref_layer_status(0)
    , tofp_hour(0)
    , tofp_minute(0)
    , tofp_second(0)
    , tofp_hundreths(0)
    , bit_results(0)
    , sound_vel(0)
    , temperature(0.0)
    , salinity(0.0)
    , depth(0.0)
    , pitch(0.0)
    , roll(0.0)
    , heading(0.0)
    , bt_distance_east(0)
    , bt_distance_north(0)
    , bt_distance_up(0)
    , bt_distance_error(0)
    , ref_distance_east(0)
    , ref_distance_north(0)
    , ref_distance_up(0)
    , ref_distance_error(0)  {
  (void)_alloc;
      velocity.assign(0.0);

      range.assign(0.0);

      layer_velocity.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef uint8_t _dvl_type_type;
  _dvl_type_type dvl_type;

   typedef double _altitude_sum_type;
  _altitude_sum_type altitude_sum;

   typedef double _speed_gnd_type;
  _speed_gnd_type speed_gnd;

   typedef double _course_gnd_type;
  _course_gnd_type course_gnd;

   typedef uint8_t _good_beams_type;
  _good_beams_type good_beams;

   typedef double _dvl_time_type;
  _dvl_time_type dvl_time;

   typedef uint8_t _config_type;
  _config_type config;

   typedef uint8_t _coord_mode_type;
  _coord_mode_type coord_mode;

   typedef boost::array<double, 4>  _velocity_type;
  _velocity_type velocity;

   typedef boost::array<double, 4>  _range_type;
  _range_type range;

   typedef uint8_t _bottom_status_type;
  _bottom_status_type bottom_status;

   typedef boost::array<double, 4>  _layer_velocity_type;
  _layer_velocity_type layer_velocity;

   typedef double _ref_layer_start_type;
  _ref_layer_start_type ref_layer_start;

   typedef double _ref_layer_end_type;
  _ref_layer_end_type ref_layer_end;

   typedef uint8_t _ref_layer_status_type;
  _ref_layer_status_type ref_layer_status;

   typedef uint8_t _tofp_hour_type;
  _tofp_hour_type tofp_hour;

   typedef uint8_t _tofp_minute_type;
  _tofp_minute_type tofp_minute;

   typedef uint8_t _tofp_second_type;
  _tofp_second_type tofp_second;

   typedef uint8_t _tofp_hundreths_type;
  _tofp_hundreths_type tofp_hundreths;

   typedef uint16_t _bit_results_type;
  _bit_results_type bit_results;

   typedef uint32_t _sound_vel_type;
  _sound_vel_type sound_vel;

   typedef double _temperature_type;
  _temperature_type temperature;

   typedef double _salinity_type;
  _salinity_type salinity;

   typedef double _depth_type;
  _depth_type depth;

   typedef double _pitch_type;
  _pitch_type pitch;

   typedef double _roll_type;
  _roll_type roll;

   typedef double _heading_type;
  _heading_type heading;

   typedef uint32_t _bt_distance_east_type;
  _bt_distance_east_type bt_distance_east;

   typedef uint32_t _bt_distance_north_type;
  _bt_distance_north_type bt_distance_north;

   typedef uint32_t _bt_distance_up_type;
  _bt_distance_up_type bt_distance_up;

   typedef uint32_t _bt_distance_error_type;
  _bt_distance_error_type bt_distance_error;

   typedef uint32_t _ref_distance_east_type;
  _ref_distance_east_type ref_distance_east;

   typedef uint32_t _ref_distance_north_type;
  _ref_distance_north_type ref_distance_north;

   typedef uint32_t _ref_distance_up_type;
  _ref_distance_up_type ref_distance_up;

   typedef uint32_t _ref_distance_error_type;
  _ref_distance_error_type ref_distance_error;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(DVL_TYPE_PISTON)
  #undef DVL_TYPE_PISTON
#endif
#if defined(_WIN32) && defined(DVL_TYPE_PHASED_ARRAY)
  #undef DVL_TYPE_PHASED_ARRAY
#endif

  enum {
    DVL_TYPE_PISTON = 0u,
    DVL_TYPE_PHASED_ARRAY = 1u,
  };


  typedef boost::shared_ptr< ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> const> ConstPtr;

}; // struct RdiPD5_

typedef ::ds_sensor_msgs::RdiPD5_<std::allocator<void> > RdiPD5;

typedef boost::shared_ptr< ::ds_sensor_msgs::RdiPD5 > RdiPD5Ptr;
typedef boost::shared_ptr< ::ds_sensor_msgs::RdiPD5 const> RdiPD5ConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_sensor_msgs::RdiPD5_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::RdiPD5_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.dvl_type == rhs.dvl_type &&
    lhs.altitude_sum == rhs.altitude_sum &&
    lhs.speed_gnd == rhs.speed_gnd &&
    lhs.course_gnd == rhs.course_gnd &&
    lhs.good_beams == rhs.good_beams &&
    lhs.dvl_time == rhs.dvl_time &&
    lhs.config == rhs.config &&
    lhs.coord_mode == rhs.coord_mode &&
    lhs.velocity == rhs.velocity &&
    lhs.range == rhs.range &&
    lhs.bottom_status == rhs.bottom_status &&
    lhs.layer_velocity == rhs.layer_velocity &&
    lhs.ref_layer_start == rhs.ref_layer_start &&
    lhs.ref_layer_end == rhs.ref_layer_end &&
    lhs.ref_layer_status == rhs.ref_layer_status &&
    lhs.tofp_hour == rhs.tofp_hour &&
    lhs.tofp_minute == rhs.tofp_minute &&
    lhs.tofp_second == rhs.tofp_second &&
    lhs.tofp_hundreths == rhs.tofp_hundreths &&
    lhs.bit_results == rhs.bit_results &&
    lhs.sound_vel == rhs.sound_vel &&
    lhs.temperature == rhs.temperature &&
    lhs.salinity == rhs.salinity &&
    lhs.depth == rhs.depth &&
    lhs.pitch == rhs.pitch &&
    lhs.roll == rhs.roll &&
    lhs.heading == rhs.heading &&
    lhs.bt_distance_east == rhs.bt_distance_east &&
    lhs.bt_distance_north == rhs.bt_distance_north &&
    lhs.bt_distance_up == rhs.bt_distance_up &&
    lhs.bt_distance_error == rhs.bt_distance_error &&
    lhs.ref_distance_east == rhs.ref_distance_east &&
    lhs.ref_distance_north == rhs.ref_distance_north &&
    lhs.ref_distance_up == rhs.ref_distance_up &&
    lhs.ref_distance_error == rhs.ref_distance_error;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_sensor_msgs::RdiPD5_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::RdiPD5_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_sensor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "55e9b7b226954be00690cf16366fbd41";
  }

  static const char* value(const ::ds_sensor_msgs::RdiPD5_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x55e9b7b226954be0ULL;
  static const uint64_t static_value2 = 0x0690cf16366fbd41ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_sensor_msgs/RdiPD5";
  }

  static const char* value(const ::ds_sensor_msgs::RdiPD5_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"################################\n"
"# Standard DVL type disclaimer #\n"
"################################\n"
"\n"
"# Standard array with one piston transducer for each beam\n"
"# If you have 4-5 individual disks on your DVL, use this one.\n"
"# Examples include Sonardyne Syrinx, Nortek DVLs, and RDI Workhorse\n"
"uint8 DVL_TYPE_PISTON=0\n"
"\n"
"# Newfangled phased-array DVL.  If you have one giant disk with complicated stuff on it,\n"
"# probably this one.\n"
"# Examples include newer RDI DVLs such as pathfinder, pioneer, and tasman.\n"
"uint8 DVL_TYPE_PHASED_ARRAY=1\n"
"\n"
"# Type of DVL array employed (see above).  Necessary when\n"
"# deciding how to apply sound velocity corrections\n"
"uint8 dvl_type\n"
"\n"
"#################\n"
"# DVL processed #\n"
"#################\n"
"\n"
"float64 altitude_sum\n"
"float64 speed_gnd\n"
"float64 course_gnd\n"
"uint8 good_beams\n"
"float64 dvl_time\n"
"\n"
"#################\n"
"# Raw Data      #\n"
"#################\n"
"\n"
"uint8 config\n"
"uint8 coord_mode\n"
"float64[4] velocity\n"
"float64[4] range\n"
"uint8 bottom_status\n"
"float64[4] layer_velocity\n"
"float64 ref_layer_start\n"
"float64 ref_layer_end\n"
"uint8 ref_layer_status\n"
"uint8 tofp_hour\n"
"uint8 tofp_minute\n"
"uint8 tofp_second\n"
"uint8 tofp_hundreths\n"
"uint16 bit_results\n"
"uint32 sound_vel\n"
"float64 temperature\n"
"float64 salinity\n"
"float64 depth\n"
"float64 pitch\n"
"float64 roll\n"
"float64 heading\n"
"uint32 bt_distance_east\n"
"uint32 bt_distance_north\n"
"uint32 bt_distance_up\n"
"uint32 bt_distance_error\n"
"uint32 ref_distance_east\n"
"uint32 ref_distance_north\n"
"uint32 ref_distance_up\n"
"uint32 ref_distance_error\n"
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
;
  }

  static const char* value(const ::ds_sensor_msgs::RdiPD5_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.dvl_type);
      stream.next(m.altitude_sum);
      stream.next(m.speed_gnd);
      stream.next(m.course_gnd);
      stream.next(m.good_beams);
      stream.next(m.dvl_time);
      stream.next(m.config);
      stream.next(m.coord_mode);
      stream.next(m.velocity);
      stream.next(m.range);
      stream.next(m.bottom_status);
      stream.next(m.layer_velocity);
      stream.next(m.ref_layer_start);
      stream.next(m.ref_layer_end);
      stream.next(m.ref_layer_status);
      stream.next(m.tofp_hour);
      stream.next(m.tofp_minute);
      stream.next(m.tofp_second);
      stream.next(m.tofp_hundreths);
      stream.next(m.bit_results);
      stream.next(m.sound_vel);
      stream.next(m.temperature);
      stream.next(m.salinity);
      stream.next(m.depth);
      stream.next(m.pitch);
      stream.next(m.roll);
      stream.next(m.heading);
      stream.next(m.bt_distance_east);
      stream.next(m.bt_distance_north);
      stream.next(m.bt_distance_up);
      stream.next(m.bt_distance_error);
      stream.next(m.ref_distance_east);
      stream.next(m.ref_distance_north);
      stream.next(m.ref_distance_up);
      stream.next(m.ref_distance_error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RdiPD5_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_sensor_msgs::RdiPD5_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_sensor_msgs::RdiPD5_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "dvl_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dvl_type);
    s << indent << "altitude_sum: ";
    Printer<double>::stream(s, indent + "  ", v.altitude_sum);
    s << indent << "speed_gnd: ";
    Printer<double>::stream(s, indent + "  ", v.speed_gnd);
    s << indent << "course_gnd: ";
    Printer<double>::stream(s, indent + "  ", v.course_gnd);
    s << indent << "good_beams: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.good_beams);
    s << indent << "dvl_time: ";
    Printer<double>::stream(s, indent + "  ", v.dvl_time);
    s << indent << "config: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.config);
    s << indent << "coord_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.coord_mode);
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "range[]" << std::endl;
    for (size_t i = 0; i < v.range.size(); ++i)
    {
      s << indent << "  range[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.range[i]);
    }
    s << indent << "bottom_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bottom_status);
    s << indent << "layer_velocity[]" << std::endl;
    for (size_t i = 0; i < v.layer_velocity.size(); ++i)
    {
      s << indent << "  layer_velocity[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.layer_velocity[i]);
    }
    s << indent << "ref_layer_start: ";
    Printer<double>::stream(s, indent + "  ", v.ref_layer_start);
    s << indent << "ref_layer_end: ";
    Printer<double>::stream(s, indent + "  ", v.ref_layer_end);
    s << indent << "ref_layer_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ref_layer_status);
    s << indent << "tofp_hour: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tofp_hour);
    s << indent << "tofp_minute: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tofp_minute);
    s << indent << "tofp_second: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tofp_second);
    s << indent << "tofp_hundreths: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tofp_hundreths);
    s << indent << "bit_results: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.bit_results);
    s << indent << "sound_vel: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sound_vel);
    s << indent << "temperature: ";
    Printer<double>::stream(s, indent + "  ", v.temperature);
    s << indent << "salinity: ";
    Printer<double>::stream(s, indent + "  ", v.salinity);
    s << indent << "depth: ";
    Printer<double>::stream(s, indent + "  ", v.depth);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
    s << indent << "bt_distance_east: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.bt_distance_east);
    s << indent << "bt_distance_north: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.bt_distance_north);
    s << indent << "bt_distance_up: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.bt_distance_up);
    s << indent << "bt_distance_error: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.bt_distance_error);
    s << indent << "ref_distance_east: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ref_distance_east);
    s << indent << "ref_distance_north: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ref_distance_north);
    s << indent << "ref_distance_up: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ref_distance_up);
    s << indent << "ref_distance_error: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ref_distance_error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_SENSOR_MSGS_MESSAGE_RDIPD5_H
