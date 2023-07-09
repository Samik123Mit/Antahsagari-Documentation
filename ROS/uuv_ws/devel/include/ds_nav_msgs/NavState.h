// Generated by gencpp from file ds_nav_msgs/NavState.msg
// DO NOT EDIT!


#ifndef DS_NAV_MSGS_MESSAGE_NAVSTATE_H
#define DS_NAV_MSGS_MESSAGE_NAVSTATE_H


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

namespace ds_nav_msgs
{
template <class ContainerAllocator>
struct NavState_
{
  typedef NavState_<ContainerAllocator> Type;

  NavState_()
    : header()
    , ds_header()
    , lat(0.0)
    , lon(0.0)
    , northing(0.0)
    , easting(0.0)
    , down(0.0)
    , roll(0.0)
    , pitch(0.0)
    , heading(0.0)
    , surge_u(0.0)
    , sway_v(0.0)
    , heave_w(0.0)
    , p(0.0)
    , q(0.0)
    , r(0.0)
    , orientation()  {
    }
  NavState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , lat(0.0)
    , lon(0.0)
    , northing(0.0)
    , easting(0.0)
    , down(0.0)
    , roll(0.0)
    , pitch(0.0)
    , heading(0.0)
    , surge_u(0.0)
    , sway_v(0.0)
    , heave_w(0.0)
    , p(0.0)
    , q(0.0)
    , r(0.0)
    , orientation(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef double _lat_type;
  _lat_type lat;

   typedef double _lon_type;
  _lon_type lon;

   typedef double _northing_type;
  _northing_type northing;

   typedef double _easting_type;
  _easting_type easting;

   typedef double _down_type;
  _down_type down;

   typedef double _roll_type;
  _roll_type roll;

   typedef double _pitch_type;
  _pitch_type pitch;

   typedef double _heading_type;
  _heading_type heading;

   typedef double _surge_u_type;
  _surge_u_type surge_u;

   typedef double _sway_v_type;
  _sway_v_type sway_v;

   typedef double _heave_w_type;
  _heave_w_type heave_w;

   typedef double _p_type;
  _p_type p;

   typedef double _q_type;
  _q_type q;

   typedef double _r_type;
  _r_type r;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;





  typedef boost::shared_ptr< ::ds_nav_msgs::NavState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_nav_msgs::NavState_<ContainerAllocator> const> ConstPtr;

}; // struct NavState_

typedef ::ds_nav_msgs::NavState_<std::allocator<void> > NavState;

typedef boost::shared_ptr< ::ds_nav_msgs::NavState > NavStatePtr;
typedef boost::shared_ptr< ::ds_nav_msgs::NavState const> NavStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_nav_msgs::NavState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_nav_msgs::NavState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_nav_msgs::NavState_<ContainerAllocator1> & lhs, const ::ds_nav_msgs::NavState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.lat == rhs.lat &&
    lhs.lon == rhs.lon &&
    lhs.northing == rhs.northing &&
    lhs.easting == rhs.easting &&
    lhs.down == rhs.down &&
    lhs.roll == rhs.roll &&
    lhs.pitch == rhs.pitch &&
    lhs.heading == rhs.heading &&
    lhs.surge_u == rhs.surge_u &&
    lhs.sway_v == rhs.sway_v &&
    lhs.heave_w == rhs.heave_w &&
    lhs.p == rhs.p &&
    lhs.q == rhs.q &&
    lhs.r == rhs.r &&
    lhs.orientation == rhs.orientation;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_nav_msgs::NavState_<ContainerAllocator1> & lhs, const ::ds_nav_msgs::NavState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_nav_msgs::NavState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_nav_msgs::NavState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_nav_msgs::NavState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_nav_msgs::NavState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nav_msgs::NavState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nav_msgs::NavState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_nav_msgs::NavState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9162dc77518926595a89cf3b09db1067";
  }

  static const char* value(const ::ds_nav_msgs::NavState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9162dc7751892659ULL;
  static const uint64_t static_value2 = 0x5a89cf3b09db1067ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_nav_msgs::NavState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_nav_msgs/NavState";
  }

  static const char* value(const ::ds_nav_msgs::NavState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_nav_msgs::NavState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"float64 lat\n"
"float64 lon\n"
"\n"
"float64 northing\n"
"float64 easting\n"
"float64 down\n"
"float64 roll\n"
"float64 pitch\n"
"float64 heading\n"
"\n"
"float64 surge_u\n"
"float64 sway_v\n"
"float64 heave_w\n"
"float64 p\n"
"float64 q\n"
"float64 r\n"
"\n"
"geometry_msgs/Quaternion orientation\n"
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
;
  }

  static const char* value(const ::ds_nav_msgs::NavState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_nav_msgs::NavState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.lat);
      stream.next(m.lon);
      stream.next(m.northing);
      stream.next(m.easting);
      stream.next(m.down);
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.heading);
      stream.next(m.surge_u);
      stream.next(m.sway_v);
      stream.next(m.heave_w);
      stream.next(m.p);
      stream.next(m.q);
      stream.next(m.r);
      stream.next(m.orientation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NavState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_nav_msgs::NavState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_nav_msgs::NavState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "lat: ";
    Printer<double>::stream(s, indent + "  ", v.lat);
    s << indent << "lon: ";
    Printer<double>::stream(s, indent + "  ", v.lon);
    s << indent << "northing: ";
    Printer<double>::stream(s, indent + "  ", v.northing);
    s << indent << "easting: ";
    Printer<double>::stream(s, indent + "  ", v.easting);
    s << indent << "down: ";
    Printer<double>::stream(s, indent + "  ", v.down);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
    s << indent << "surge_u: ";
    Printer<double>::stream(s, indent + "  ", v.surge_u);
    s << indent << "sway_v: ";
    Printer<double>::stream(s, indent + "  ", v.sway_v);
    s << indent << "heave_w: ";
    Printer<double>::stream(s, indent + "  ", v.heave_w);
    s << indent << "p: ";
    Printer<double>::stream(s, indent + "  ", v.p);
    s << indent << "q: ";
    Printer<double>::stream(s, indent + "  ", v.q);
    s << indent << "r: ";
    Printer<double>::stream(s, indent + "  ", v.r);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_NAV_MSGS_MESSAGE_NAVSTATE_H
