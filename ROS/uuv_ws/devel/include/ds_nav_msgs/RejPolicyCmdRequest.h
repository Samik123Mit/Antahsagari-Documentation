// Generated by gencpp from file ds_nav_msgs/RejPolicyCmdRequest.msg
// DO NOT EDIT!


#ifndef DS_NAV_MSGS_MESSAGE_REJPOLICYCMDREQUEST_H
#define DS_NAV_MSGS_MESSAGE_REJPOLICYCMDREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_nav_msgs
{
template <class ContainerAllocator>
struct RejPolicyCmdRequest_
{
  typedef RejPolicyCmdRequest_<ContainerAllocator> Type;

  RejPolicyCmdRequest_()
    : system(0)
    , subsystem(0)
    , command(0)  {
    }
  RejPolicyCmdRequest_(const ContainerAllocator& _alloc)
    : system(0)
    , subsystem(0)
    , command(0)  {
  (void)_alloc;
    }



   typedef uint8_t _system_type;
  _system_type system;

   typedef uint8_t _subsystem_type;
  _subsystem_type subsystem;

   typedef uint8_t _command_type;
  _command_type command;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(DVL1_BT)
  #undef DVL1_BT
#endif
#if defined(_WIN32) && defined(DVL1_WT)
  #undef DVL1_WT
#endif
#if defined(_WIN32) && defined(DVL2_BT)
  #undef DVL2_BT
#endif
#if defined(_WIN32) && defined(DVL2_WT)
  #undef DVL2_WT
#endif
#if defined(_WIN32) && defined(GNSS1)
  #undef GNSS1
#endif
#if defined(_WIN32) && defined(GNSS2)
  #undef GNSS2
#endif
#if defined(_WIN32) && defined(DEPTH)
  #undef DEPTH
#endif
#if defined(_WIN32) && defined(USBL)
  #undef USBL
#endif
#if defined(_WIN32) && defined(MAX_SYSTEMS)
  #undef MAX_SYSTEMS
#endif
#if defined(_WIN32) && defined(NOT_ACTIVE_ALWAYS_TRUE)
  #undef NOT_ACTIVE_ALWAYS_TRUE
#endif
#if defined(_WIN32) && defined(NOT_ACTIVE_ALWAYS_FALSE)
  #undef NOT_ACTIVE_ALWAYS_FALSE
#endif
#if defined(_WIN32) && defined(ACTIVE_AUTOMATIC_REACQUISITION)
  #undef ACTIVE_AUTOMATIC_REACQUISITION
#endif
#if defined(_WIN32) && defined(ACTIVE_MANUAL_REACQUISITION)
  #undef ACTIVE_MANUAL_REACQUISITION
#endif

  enum {
    DVL1_BT = 0u,
    DVL1_WT = 1u,
    DVL2_BT = 2u,
    DVL2_WT = 3u,
    GNSS1 = 4u,
    GNSS2 = 5u,
    DEPTH = 6u,
    USBL = 7u,
    MAX_SYSTEMS = 8u,
    NOT_ACTIVE_ALWAYS_TRUE = 0u,
    NOT_ACTIVE_ALWAYS_FALSE = 1u,
    ACTIVE_AUTOMATIC_REACQUISITION = 2u,
    ACTIVE_MANUAL_REACQUISITION = 3u,
  };


  typedef boost::shared_ptr< ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RejPolicyCmdRequest_

typedef ::ds_nav_msgs::RejPolicyCmdRequest_<std::allocator<void> > RejPolicyCmdRequest;

typedef boost::shared_ptr< ::ds_nav_msgs::RejPolicyCmdRequest > RejPolicyCmdRequestPtr;
typedef boost::shared_ptr< ::ds_nav_msgs::RejPolicyCmdRequest const> RejPolicyCmdRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator1> & lhs, const ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator2> & rhs)
{
  return lhs.system == rhs.system &&
    lhs.subsystem == rhs.subsystem &&
    lhs.command == rhs.command;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator1> & lhs, const ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6578db83af9408f8c6e05b98e0f5e4df";
  }

  static const char* value(const ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6578db83af9408f8ULL;
  static const uint64_t static_value2 = 0xc6e05b98e0f5e4dfULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_nav_msgs/RejPolicyCmdRequest";
  }

  static const char* value(const ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 DVL1_BT = 0\n"
"uint8 DVL1_WT = 1\n"
"uint8 DVL2_BT = 2\n"
"uint8 DVL2_WT = 3\n"
"uint8 GNSS1 = 4\n"
"uint8 GNSS2 = 5\n"
"uint8 DEPTH = 6\n"
"uint8 USBL = 7\n"
"uint8 MAX_SYSTEMS = 8\n"
"\n"
"uint8 system\n"
"uint8 subsystem\n"
"\n"
"uint8 NOT_ACTIVE_ALWAYS_TRUE = 0\n"
"uint8 NOT_ACTIVE_ALWAYS_FALSE = 1\n"
"uint8 ACTIVE_AUTOMATIC_REACQUISITION = 2\n"
"uint8 ACTIVE_MANUAL_REACQUISITION = 3\n"
"\n"
"uint8 command\n"
"\n"
;
  }

  static const char* value(const ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.system);
      stream.next(m.subsystem);
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RejPolicyCmdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_nav_msgs::RejPolicyCmdRequest_<ContainerAllocator>& v)
  {
    s << indent << "system: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.system);
    s << indent << "subsystem: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.subsystem);
    s << indent << "command: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_NAV_MSGS_MESSAGE_REJPOLICYCMDREQUEST_H