// Generated by gencpp from file ds_multibeam_msgs/MultibeamGridStats.msg
// DO NOT EDIT!


#ifndef DS_MULTIBEAM_MSGS_MESSAGE_MULTIBEAMGRIDSTATS_H
#define DS_MULTIBEAM_MSGS_MESSAGE_MULTIBEAMGRIDSTATS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_multibeam_msgs
{
template <class ContainerAllocator>
struct MultibeamGridStats_
{
  typedef MultibeamGridStats_<ContainerAllocator> Type;

  MultibeamGridStats_()
    : soundings_total(0)
    , soundings_accepted(0)
    , soundings_flagged(0)
    , soundings_dropped(0)
    , cell_size(0.0)
    , width(0)
    , height(0)
    , grid_cells_used(0)
    , grid_cells_total(0)
    , grid_memory_mb(0.0)
    , grid_memory_limit_mb(0.0)
    , grid_origin_easting(0.0)
    , grid_origin_northing(0.0)  {
    }
  MultibeamGridStats_(const ContainerAllocator& _alloc)
    : soundings_total(0)
    , soundings_accepted(0)
    , soundings_flagged(0)
    , soundings_dropped(0)
    , cell_size(0.0)
    , width(0)
    , height(0)
    , grid_cells_used(0)
    , grid_cells_total(0)
    , grid_memory_mb(0.0)
    , grid_memory_limit_mb(0.0)
    , grid_origin_easting(0.0)
    , grid_origin_northing(0.0)  {
  (void)_alloc;
    }



   typedef uint64_t _soundings_total_type;
  _soundings_total_type soundings_total;

   typedef uint64_t _soundings_accepted_type;
  _soundings_accepted_type soundings_accepted;

   typedef uint64_t _soundings_flagged_type;
  _soundings_flagged_type soundings_flagged;

   typedef uint64_t _soundings_dropped_type;
  _soundings_dropped_type soundings_dropped;

   typedef float _cell_size_type;
  _cell_size_type cell_size;

   typedef uint32_t _width_type;
  _width_type width;

   typedef uint32_t _height_type;
  _height_type height;

   typedef uint64_t _grid_cells_used_type;
  _grid_cells_used_type grid_cells_used;

   typedef uint64_t _grid_cells_total_type;
  _grid_cells_total_type grid_cells_total;

   typedef float _grid_memory_mb_type;
  _grid_memory_mb_type grid_memory_mb;

   typedef float _grid_memory_limit_mb_type;
  _grid_memory_limit_mb_type grid_memory_limit_mb;

   typedef double _grid_origin_easting_type;
  _grid_origin_easting_type grid_origin_easting;

   typedef double _grid_origin_northing_type;
  _grid_origin_northing_type grid_origin_northing;





  typedef boost::shared_ptr< ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> const> ConstPtr;

}; // struct MultibeamGridStats_

typedef ::ds_multibeam_msgs::MultibeamGridStats_<std::allocator<void> > MultibeamGridStats;

typedef boost::shared_ptr< ::ds_multibeam_msgs::MultibeamGridStats > MultibeamGridStatsPtr;
typedef boost::shared_ptr< ::ds_multibeam_msgs::MultibeamGridStats const> MultibeamGridStatsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator1> & lhs, const ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator2> & rhs)
{
  return lhs.soundings_total == rhs.soundings_total &&
    lhs.soundings_accepted == rhs.soundings_accepted &&
    lhs.soundings_flagged == rhs.soundings_flagged &&
    lhs.soundings_dropped == rhs.soundings_dropped &&
    lhs.cell_size == rhs.cell_size &&
    lhs.width == rhs.width &&
    lhs.height == rhs.height &&
    lhs.grid_cells_used == rhs.grid_cells_used &&
    lhs.grid_cells_total == rhs.grid_cells_total &&
    lhs.grid_memory_mb == rhs.grid_memory_mb &&
    lhs.grid_memory_limit_mb == rhs.grid_memory_limit_mb &&
    lhs.grid_origin_easting == rhs.grid_origin_easting &&
    lhs.grid_origin_northing == rhs.grid_origin_northing;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator1> & lhs, const ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_multibeam_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e52348903229cd516a72d60f15c1e17b";
  }

  static const char* value(const ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe52348903229cd51ULL;
  static const uint64_t static_value2 = 0x6a72d60f15c1e17bULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_multibeam_msgs/MultibeamGridStats";
  }

  static const char* value(const ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Total soundings\n"
"uint64 soundings_total\n"
"\n"
"# Added to grid\n"
"uint64 soundings_accepted\n"
"\n"
"# Soundings rejected because they were flagged\n"
"uint64 soundings_flagged\n"
"\n"
"# Soundings dropped by the gridder\n"
"uint64 soundings_dropped\n"
"\n"
"# Grid dimensions\n"
"float32 cell_size\n"
"\n"
"# Grid dimensions in cells\n"
"uint32 width\n"
"uint32 height\n"
"\n"
"# Grid cells filled in\n"
"uint64 grid_cells_used\n"
"uint64 grid_cells_total\n"
"\n"
"# Grid memory usage stats\n"
"float32 grid_memory_mb\n"
"float32 grid_memory_limit_mb\n"
"\n"
"# Grid location\n"
"float64 grid_origin_easting\n"
"float64 grid_origin_northing\n"
;
  }

  static const char* value(const ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.soundings_total);
      stream.next(m.soundings_accepted);
      stream.next(m.soundings_flagged);
      stream.next(m.soundings_dropped);
      stream.next(m.cell_size);
      stream.next(m.width);
      stream.next(m.height);
      stream.next(m.grid_cells_used);
      stream.next(m.grid_cells_total);
      stream.next(m.grid_memory_mb);
      stream.next(m.grid_memory_limit_mb);
      stream.next(m.grid_origin_easting);
      stream.next(m.grid_origin_northing);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MultibeamGridStats_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_multibeam_msgs::MultibeamGridStats_<ContainerAllocator>& v)
  {
    s << indent << "soundings_total: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.soundings_total);
    s << indent << "soundings_accepted: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.soundings_accepted);
    s << indent << "soundings_flagged: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.soundings_flagged);
    s << indent << "soundings_dropped: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.soundings_dropped);
    s << indent << "cell_size: ";
    Printer<float>::stream(s, indent + "  ", v.cell_size);
    s << indent << "width: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.height);
    s << indent << "grid_cells_used: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.grid_cells_used);
    s << indent << "grid_cells_total: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.grid_cells_total);
    s << indent << "grid_memory_mb: ";
    Printer<float>::stream(s, indent + "  ", v.grid_memory_mb);
    s << indent << "grid_memory_limit_mb: ";
    Printer<float>::stream(s, indent + "  ", v.grid_memory_limit_mb);
    s << indent << "grid_origin_easting: ";
    Printer<double>::stream(s, indent + "  ", v.grid_origin_easting);
    s << indent << "grid_origin_northing: ";
    Printer<double>::stream(s, indent + "  ", v.grid_origin_northing);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_MULTIBEAM_MSGS_MESSAGE_MULTIBEAMGRIDSTATS_H
