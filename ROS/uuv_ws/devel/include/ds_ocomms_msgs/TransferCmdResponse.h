// Generated by gencpp from file ds_ocomms_msgs/TransferCmdResponse.msg
// DO NOT EDIT!


#ifndef DS_OCOMMS_MSGS_MESSAGE_TRANSFERCMDRESPONSE_H
#define DS_OCOMMS_MSGS_MESSAGE_TRANSFERCMDRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_ocomms_msgs
{
template <class ContainerAllocator>
struct TransferCmdResponse_
{
  typedef TransferCmdResponse_<ContainerAllocator> Type;

  TransferCmdResponse_()
    {
    }
  TransferCmdResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TransferCmdResponse_

typedef ::ds_ocomms_msgs::TransferCmdResponse_<std::allocator<void> > TransferCmdResponse;

typedef boost::shared_ptr< ::ds_ocomms_msgs::TransferCmdResponse > TransferCmdResponsePtr;
typedef boost::shared_ptr< ::ds_ocomms_msgs::TransferCmdResponse const> TransferCmdResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace ds_ocomms_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_ocomms_msgs/TransferCmdResponse";
  }

  static const char* value(const ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TransferCmdResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::ds_ocomms_msgs::TransferCmdResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DS_OCOMMS_MSGS_MESSAGE_TRANSFERCMDRESPONSE_H
