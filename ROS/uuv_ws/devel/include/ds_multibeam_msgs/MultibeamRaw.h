// Generated by gencpp from file ds_multibeam_msgs/MultibeamRaw.msg
// DO NOT EDIT!


#ifndef DS_MULTIBEAM_MSGS_MESSAGE_MULTIBEAMRAW_H
#define DS_MULTIBEAM_MSGS_MESSAGE_MULTIBEAMRAW_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>

namespace ds_multibeam_msgs
{
template <class ContainerAllocator>
struct MultibeamRaw_
{
  typedef MultibeamRaw_<ContainerAllocator> Type;

  MultibeamRaw_()
    : header()
    , ds_header()
    , soundspeed(0.0)
    , beamflag()
    , twowayTravelTime()
    , txDelay()
    , intensity()
    , angleAlongTrack()
    , angleAcrossTrack()
    , beamwidthAlongTrack()
    , beamwidthAcrossTrack()  {
    }
  MultibeamRaw_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , soundspeed(0.0)
    , beamflag(_alloc)
    , twowayTravelTime(_alloc)
    , txDelay(_alloc)
    , intensity(_alloc)
    , angleAlongTrack(_alloc)
    , angleAcrossTrack(_alloc)
    , beamwidthAlongTrack(_alloc)
    , beamwidthAcrossTrack(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef float _soundspeed_type;
  _soundspeed_type soundspeed;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _beamflag_type;
  _beamflag_type beamflag;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _twowayTravelTime_type;
  _twowayTravelTime_type twowayTravelTime;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _txDelay_type;
  _txDelay_type txDelay;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _intensity_type;
  _intensity_type intensity;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _angleAlongTrack_type;
  _angleAlongTrack_type angleAlongTrack;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _angleAcrossTrack_type;
  _angleAcrossTrack_type angleAcrossTrack;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _beamwidthAlongTrack_type;
  _beamwidthAlongTrack_type beamwidthAlongTrack;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _beamwidthAcrossTrack_type;
  _beamwidthAcrossTrack_type beamwidthAcrossTrack;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(BEAM_OK)
  #undef BEAM_OK
#endif
#if defined(_WIN32) && defined(BEAM_BAD_SONAR)
  #undef BEAM_BAD_SONAR
#endif
#if defined(_WIN32) && defined(BEAM_BAD_FILTER)
  #undef BEAM_BAD_FILTER
#endif
#if defined(_WIN32) && defined(BEAD_BAD_USER)
  #undef BEAD_BAD_USER
#endif

  enum {
    BEAM_OK = 0u,
    BEAM_BAD_SONAR = 1u,
    BEAM_BAD_FILTER = 2u,
    BEAD_BAD_USER = 4u,
  };


  typedef boost::shared_ptr< ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> const> ConstPtr;

}; // struct MultibeamRaw_

typedef ::ds_multibeam_msgs::MultibeamRaw_<std::allocator<void> > MultibeamRaw;

typedef boost::shared_ptr< ::ds_multibeam_msgs::MultibeamRaw > MultibeamRawPtr;
typedef boost::shared_ptr< ::ds_multibeam_msgs::MultibeamRaw const> MultibeamRawConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator1> & lhs, const ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.soundspeed == rhs.soundspeed &&
    lhs.beamflag == rhs.beamflag &&
    lhs.twowayTravelTime == rhs.twowayTravelTime &&
    lhs.txDelay == rhs.txDelay &&
    lhs.intensity == rhs.intensity &&
    lhs.angleAlongTrack == rhs.angleAlongTrack &&
    lhs.angleAcrossTrack == rhs.angleAcrossTrack &&
    lhs.beamwidthAlongTrack == rhs.beamwidthAlongTrack &&
    lhs.beamwidthAcrossTrack == rhs.beamwidthAcrossTrack;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator1> & lhs, const ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_multibeam_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8c004a64425e529a03fe89248c30def6";
  }

  static const char* value(const ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8c004a64425e529aULL;
  static const uint64_t static_value2 = 0x03fe89248c30def6ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_multibeam_msgs/MultibeamRaw";
  }

  static const char* value(const ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"# The header time should be the time the ping was transmitted, not the time the message was received.\n"
"# Note that these two could potentially be several seconds apart, especially in deep water.\n"
"\n"
"# We need a number of constants to declare whether each beam is good or bad.\n"
"# This is implemented as an 8-bit masked value; its possible for more than one\n"
"# thing to flag beams as bad.  To check if a beam is good, simply\n"
"# check if its zero.\n"
"\n"
"# Beam is OK\n"
"uint8 BEAM_OK = 0\n"
"\n"
"# Beam is flagged as bad by the sonar.  Think hard before second-guessing\n"
"uint8 BEAM_BAD_SONAR = 1\n"
"\n"
"# Beam is flagged as bad by some automated filter applied during processing.\n"
"uint8 BEAM_BAD_FILTER = 2\n"
"\n"
"# Beam is flagged as bad by the user (probably not happening in realtime)\n"
"uint8 BEAD_BAD_USER = 4\n"
"\n"
"# Multibeams really require a sound velocity to beamform properly.  This may\n"
"# be helpful for subsequent processing, so we include it here\n"
"float32 soundspeed\n"
"\n"
"###########################################\n"
"# These arrays should have the same dimensions, and should match\n"
"# the number of beams for this sonar.\n"
"#\n"
"# Some fields are optional.  Those should have 0 length.\n"
"\n"
"# Flag values for every beam\n"
"uint8[] beamflag\n"
"\n"
"# Truly raw multibeam data uses travel times rather than ranges;\n"
"# we'll use the one way\n"
"# in seconds\n"
"float32[] twowayTravelTime\n"
"\n"
"# Multi-sector multibeams can transmit different sectors at different times\n"
"# The Reson doesn't but we include a TX delay for each beam anyway.\n"
"#\n"
"# Overall, therefore, our overall time is:\n"
"#\n"
"# header.stamp: TX cycle starts\n"
"# Each beam's TX time: header.stamp + txDelay[i]\n"
"# Each beam's RX time: header.stamp + txDelay[i] + twowayTravelTime[i]\n"
"float32[] txDelay\n"
"\n"
"# Sonar-reported intensity.  Usually uncalibrated and crude\n"
"float32[] intensity\n"
"\n"
"# Sonar-reported along-track steering angle (applied to tx beam)\n"
"# + forward, - aft for a downlooking sonar\n"
"# Always in radians\n"
"float32[] angleAlongTrack\n"
"\n"
"# Sonar-reported across-track steering angle (applied to rx beam)\n"
"# + to starboard, - to port for a downlooking sonar\n"
"# Always in radians\n"
"float32[] angleAcrossTrack\n"
"\n"
"# Sonar reported -3db beamwidths\n"
"# May be empty if not reported\n"
"# Always in radians\n"
"float32[] beamwidthAlongTrack\n"
"float32[] beamwidthAcrossTrack\n"
"\n"
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
;
  }

  static const char* value(const ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.soundspeed);
      stream.next(m.beamflag);
      stream.next(m.twowayTravelTime);
      stream.next(m.txDelay);
      stream.next(m.intensity);
      stream.next(m.angleAlongTrack);
      stream.next(m.angleAcrossTrack);
      stream.next(m.beamwidthAlongTrack);
      stream.next(m.beamwidthAcrossTrack);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MultibeamRaw_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_multibeam_msgs::MultibeamRaw_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "soundspeed: ";
    Printer<float>::stream(s, indent + "  ", v.soundspeed);
    s << indent << "beamflag[]" << std::endl;
    for (size_t i = 0; i < v.beamflag.size(); ++i)
    {
      s << indent << "  beamflag[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.beamflag[i]);
    }
    s << indent << "twowayTravelTime[]" << std::endl;
    for (size_t i = 0; i < v.twowayTravelTime.size(); ++i)
    {
      s << indent << "  twowayTravelTime[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.twowayTravelTime[i]);
    }
    s << indent << "txDelay[]" << std::endl;
    for (size_t i = 0; i < v.txDelay.size(); ++i)
    {
      s << indent << "  txDelay[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.txDelay[i]);
    }
    s << indent << "intensity[]" << std::endl;
    for (size_t i = 0; i < v.intensity.size(); ++i)
    {
      s << indent << "  intensity[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.intensity[i]);
    }
    s << indent << "angleAlongTrack[]" << std::endl;
    for (size_t i = 0; i < v.angleAlongTrack.size(); ++i)
    {
      s << indent << "  angleAlongTrack[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.angleAlongTrack[i]);
    }
    s << indent << "angleAcrossTrack[]" << std::endl;
    for (size_t i = 0; i < v.angleAcrossTrack.size(); ++i)
    {
      s << indent << "  angleAcrossTrack[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.angleAcrossTrack[i]);
    }
    s << indent << "beamwidthAlongTrack[]" << std::endl;
    for (size_t i = 0; i < v.beamwidthAlongTrack.size(); ++i)
    {
      s << indent << "  beamwidthAlongTrack[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.beamwidthAlongTrack[i]);
    }
    s << indent << "beamwidthAcrossTrack[]" << std::endl;
    for (size_t i = 0; i < v.beamwidthAcrossTrack.size(); ++i)
    {
      s << indent << "  beamwidthAcrossTrack[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.beamwidthAcrossTrack[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_MULTIBEAM_MSGS_MESSAGE_MULTIBEAMRAW_H
