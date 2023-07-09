// Generated by gencpp from file dave_gazebo_ros_plugins/TransformFromSphericalCoordResponse.msg
// DO NOT EDIT!


#ifndef DAVE_GAZEBO_ROS_PLUGINS_MESSAGE_TRANSFORMFROMSPHERICALCOORDRESPONSE_H
#define DAVE_GAZEBO_ROS_PLUGINS_MESSAGE_TRANSFORMFROMSPHERICALCOORDRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>

namespace dave_gazebo_ros_plugins
{
template <class ContainerAllocator>
struct TransformFromSphericalCoordResponse_
{
  typedef TransformFromSphericalCoordResponse_<ContainerAllocator> Type;

  TransformFromSphericalCoordResponse_()
    : output()  {
    }
  TransformFromSphericalCoordResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TransformFromSphericalCoordResponse_

typedef ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<std::allocator<void> > TransformFromSphericalCoordResponse;

typedef boost::shared_ptr< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse > TransformFromSphericalCoordResponsePtr;
typedef boost::shared_ptr< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse const> TransformFromSphericalCoordResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator1> & lhs, const ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator1> & lhs, const ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dave_gazebo_ros_plugins

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d095d4a4697448df53fb4209e5def16e";
  }

  static const char* value(const ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd095d4a4697448dfULL;
  static const uint64_t static_value2 = 0x53fb4209e5def16eULL;
};

template<class ContainerAllocator>
struct DataType< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dave_gazebo_ros_plugins/TransformFromSphericalCoordResponse";
  }

  static const char* value(const ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Vector3 output\n"
"\n"
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

  static const char* value(const ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TransformFromSphericalCoordResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dave_gazebo_ros_plugins::TransformFromSphericalCoordResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DAVE_GAZEBO_ROS_PLUGINS_MESSAGE_TRANSFORMFROMSPHERICALCOORDRESPONSE_H
