// Generated by gencpp from file ds_sensor_msgs/Range3D.msg
// DO NOT EDIT!


#ifndef DS_SENSOR_MSGS_MESSAGE_RANGE3D_H
#define DS_SENSOR_MSGS_MESSAGE_RANGE3D_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PointStamped.h>

namespace ds_sensor_msgs
{
template <class ContainerAllocator>
struct Range3D_
{
  typedef Range3D_<ContainerAllocator> Type;

  Range3D_()
    : range()
    , range_quality(0.0)
    , range_validity(0)  {
    }
  Range3D_(const ContainerAllocator& _alloc)
    : range(_alloc)
    , range_quality(0.0)
    , range_validity(0)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PointStamped_<ContainerAllocator>  _range_type;
  _range_type range;

   typedef float _range_quality_type;
  _range_quality_type range_quality;

   typedef uint8_t _range_validity_type;
  _range_validity_type range_validity;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(RANGE_INDETERMINANT)
  #undef RANGE_INDETERMINANT
#endif
#if defined(_WIN32) && defined(RANGE_LOW)
  #undef RANGE_LOW
#endif
#if defined(_WIN32) && defined(RANGE_HIGH)
  #undef RANGE_HIGH
#endif
#if defined(_WIN32) && defined(RANGE_VALID)
  #undef RANGE_VALID
#endif

  enum {
    RANGE_INDETERMINANT = 0u,
    RANGE_LOW = 1u,
    RANGE_HIGH = 2u,
    RANGE_VALID = 3u,
  };


  typedef boost::shared_ptr< ::ds_sensor_msgs::Range3D_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_sensor_msgs::Range3D_<ContainerAllocator> const> ConstPtr;

}; // struct Range3D_

typedef ::ds_sensor_msgs::Range3D_<std::allocator<void> > Range3D;

typedef boost::shared_ptr< ::ds_sensor_msgs::Range3D > Range3DPtr;
typedef boost::shared_ptr< ::ds_sensor_msgs::Range3D const> Range3DConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_sensor_msgs::Range3D_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_sensor_msgs::Range3D_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_sensor_msgs::Range3D_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::Range3D_<ContainerAllocator2> & rhs)
{
  return lhs.range == rhs.range &&
    lhs.range_quality == rhs.range_quality &&
    lhs.range_validity == rhs.range_validity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_sensor_msgs::Range3D_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::Range3D_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_sensor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::Range3D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::Range3D_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::Range3D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::Range3D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::Range3D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::Range3D_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_sensor_msgs::Range3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "de69a981ed727b0e63551d46291820f2";
  }

  static const char* value(const ::ds_sensor_msgs::Range3D_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xde69a981ed727b0eULL;
  static const uint64_t static_value2 = 0x63551d46291820f2ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_sensor_msgs::Range3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_sensor_msgs/Range3D";
  }

  static const char* value(const ::ds_sensor_msgs::Range3D_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_sensor_msgs::Range3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint8 RANGE_INDETERMINANT=0\n"
"uint8 RANGE_LOW=1\n"
"uint8 RANGE_HIGH=2\n"
"uint8 RANGE_VALID=3\n"
"\n"
"geometry_msgs/PointStamped range\n"
"\n"
"float32 range_quality\n"
"uint8 range_validity\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PointStamped\n"
"# This represents a Point with reference coordinate frame and timestamp\n"
"Header header\n"
"Point point\n"
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
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::ds_sensor_msgs::Range3D_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_sensor_msgs::Range3D_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.range);
      stream.next(m.range_quality);
      stream.next(m.range_validity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Range3D_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_sensor_msgs::Range3D_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_sensor_msgs::Range3D_<ContainerAllocator>& v)
  {
    s << indent << "range: ";
    s << std::endl;
    Printer< ::geometry_msgs::PointStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.range);
    s << indent << "range_quality: ";
    Printer<float>::stream(s, indent + "  ", v.range_quality);
    s << indent << "range_validity: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.range_validity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_SENSOR_MSGS_MESSAGE_RANGE3D_H
