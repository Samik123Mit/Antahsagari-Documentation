// Generated by gencpp from file ds_nmea_msgs/PixseAccest.msg
// DO NOT EDIT!


#ifndef DS_NMEA_MSGS_MESSAGE_PIXSEACCEST_H
#define DS_NMEA_MSGS_MESSAGE_PIXSEACCEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_nmea_msgs
{
template <class ContainerAllocator>
struct PixseAccest_
{
  typedef PixseAccest_<ContainerAllocator> Type;

  PixseAccest_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , checksum(0)  {
    }
  PixseAccest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , checksum(0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef uint8_t _checksum_type;
  _checksum_type checksum;





  typedef boost::shared_ptr< ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> const> ConstPtr;

}; // struct PixseAccest_

typedef ::ds_nmea_msgs::PixseAccest_<std::allocator<void> > PixseAccest;

typedef boost::shared_ptr< ::ds_nmea_msgs::PixseAccest > PixseAccestPtr;
typedef boost::shared_ptr< ::ds_nmea_msgs::PixseAccest const> PixseAccestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_nmea_msgs::PixseAccest_<ContainerAllocator1> & lhs, const ::ds_nmea_msgs::PixseAccest_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.checksum == rhs.checksum;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_nmea_msgs::PixseAccest_<ContainerAllocator1> & lhs, const ::ds_nmea_msgs::PixseAccest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_nmea_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "44a934bd19470c6ef4657a1cff24245a";
  }

  static const char* value(const ::ds_nmea_msgs::PixseAccest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x44a934bd19470c6eULL;
  static const uint64_t static_value2 = 0xf4657a1cff24245aULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_nmea_msgs/PixseAccest";
  }

  static const char* value(const ::ds_nmea_msgs::PixseAccest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# $PIXSE,ACCEST,x.xxx,y.yyy,z.zzz*hh<CR><LF>\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"uint8 checksum\n"
;
  }

  static const char* value(const ::ds_nmea_msgs::PixseAccest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.checksum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PixseAccest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_nmea_msgs::PixseAccest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_nmea_msgs::PixseAccest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "checksum: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.checksum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_NMEA_MSGS_MESSAGE_PIXSEACCEST_H