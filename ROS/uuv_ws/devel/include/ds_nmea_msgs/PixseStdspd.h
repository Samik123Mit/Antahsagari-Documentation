// Generated by gencpp from file ds_nmea_msgs/PixseStdspd.msg
// DO NOT EDIT!


#ifndef DS_NMEA_MSGS_MESSAGE_PIXSESTDSPD_H
#define DS_NMEA_MSGS_MESSAGE_PIXSESTDSPD_H


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
struct PixseStdspd_
{
  typedef PixseStdspd_<ContainerAllocator> Type;

  PixseStdspd_()
    : east(0.0)
    , north(0.0)
    , vertical(0.0)
    , checksum(0)  {
    }
  PixseStdspd_(const ContainerAllocator& _alloc)
    : east(0.0)
    , north(0.0)
    , vertical(0.0)
    , checksum(0)  {
  (void)_alloc;
    }



   typedef double _east_type;
  _east_type east;

   typedef double _north_type;
  _north_type north;

   typedef double _vertical_type;
  _vertical_type vertical;

   typedef uint8_t _checksum_type;
  _checksum_type checksum;





  typedef boost::shared_ptr< ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> const> ConstPtr;

}; // struct PixseStdspd_

typedef ::ds_nmea_msgs::PixseStdspd_<std::allocator<void> > PixseStdspd;

typedef boost::shared_ptr< ::ds_nmea_msgs::PixseStdspd > PixseStdspdPtr;
typedef boost::shared_ptr< ::ds_nmea_msgs::PixseStdspd const> PixseStdspdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator1> & lhs, const ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator2> & rhs)
{
  return lhs.east == rhs.east &&
    lhs.north == rhs.north &&
    lhs.vertical == rhs.vertical &&
    lhs.checksum == rhs.checksum;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator1> & lhs, const ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_nmea_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3f028522c0df046dec199efa0c56e7f7";
  }

  static const char* value(const ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3f028522c0df046dULL;
  static const uint64_t static_value2 = 0xec199efa0c56e7f7ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_nmea_msgs/PixseStdspd";
  }

  static const char* value(const ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# $PIXSE,STDSPD,x.xxx,y.yyy,z.zzz*hh<CR><LF>\n"
"# where:\n"
"# x.xxx is the east speed std dev in the navigation reference frame (m/s)\n"
"# y.yyy is the north speed std dev in the navigation reference frame (m/s)\n"
"# z.zzz is the vertical speed std dev in the navigation reference frame (m/s)\n"
"# hh is the checksum\n"
"\n"
"float64 east\n"
"float64 north\n"
"float64 vertical\n"
"uint8 checksum\n"
;
  }

  static const char* value(const ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.east);
      stream.next(m.north);
      stream.next(m.vertical);
      stream.next(m.checksum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PixseStdspd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_nmea_msgs::PixseStdspd_<ContainerAllocator>& v)
  {
    s << indent << "east: ";
    Printer<double>::stream(s, indent + "  ", v.east);
    s << indent << "north: ";
    Printer<double>::stream(s, indent + "  ", v.north);
    s << indent << "vertical: ";
    Printer<double>::stream(s, indent + "  ", v.vertical);
    s << indent << "checksum: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.checksum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_NMEA_MSGS_MESSAGE_PIXSESTDSPD_H