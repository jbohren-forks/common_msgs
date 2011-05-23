/* Auto-generated by genmsg_cpp for file /wg/stor2a/dgossow/ros_sandbox/visualization_msgs/msg/ImageMarker.msg */
#ifndef VISUALIZATION_MSGS_MESSAGE_IMAGEMARKER_H
#define VISUALIZATION_MSGS_MESSAGE_IMAGEMARKER_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "std_msgs/Header.h"
#include "geometry_msgs/Point.h"
#include "std_msgs/ColorRGBA.h"
#include "std_msgs/ColorRGBA.h"
#include "geometry_msgs/Point.h"
#include "std_msgs/ColorRGBA.h"

namespace visualization_msgs
{
template <class ContainerAllocator>
struct ImageMarker_ : public ros::Message
{
  typedef ImageMarker_<ContainerAllocator> Type;

  ImageMarker_()
  : header()
  , ns()
  , id(0)
  , type(0)
  , action(0)
  , position()
  , scale(0.0)
  , outline_color()
  , filled(0)
  , fill_color()
  , lifetime()
  , points()
  , outline_colors()
  {
  }

  ImageMarker_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , ns(_alloc)
  , id(0)
  , type(0)
  , action(0)
  , position(_alloc)
  , scale(0.0)
  , outline_color(_alloc)
  , filled(0)
  , fill_color(_alloc)
  , lifetime()
  , points(_alloc)
  , outline_colors(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _ns_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ns;

  typedef int32_t _id_type;
  int32_t id;

  typedef int32_t _type_type;
  int32_t type;

  typedef int32_t _action_type;
  int32_t action;

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
   ::geometry_msgs::Point_<ContainerAllocator>  position;

  typedef float _scale_type;
  float scale;

  typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _outline_color_type;
   ::std_msgs::ColorRGBA_<ContainerAllocator>  outline_color;

  typedef int8_t _filled_type;
  int8_t filled;

  typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _fill_color_type;
   ::std_msgs::ColorRGBA_<ContainerAllocator>  fill_color;

  typedef ros::Duration _lifetime_type;
  ros::Duration lifetime;

  typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _points_type;
  std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  points;

  typedef std::vector< ::std_msgs::ColorRGBA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::ColorRGBA_<ContainerAllocator> >::other >  _outline_colors_type;
  std::vector< ::std_msgs::ColorRGBA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::ColorRGBA_<ContainerAllocator> >::other >  outline_colors;

  enum { CIRCLE = 0 };
  enum { LINE_STRIP = 1 };
  enum { LINE_LIST = 2 };
  enum { POLYGON = 3 };
  enum { POINTS = 4 };
  enum { ADD = 0 };
  enum { REMOVE = 1 };

  ROS_DEPRECATED uint32_t get_points_size() const { return (uint32_t)points.size(); }
  ROS_DEPRECATED void set_points_size(uint32_t size) { points.resize((size_t)size); }
  ROS_DEPRECATED void get_points_vec(std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other > & vec) const { vec = this->points; }
  ROS_DEPRECATED void set_points_vec(const std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other > & vec) { this->points = vec; }
  ROS_DEPRECATED uint32_t get_outline_colors_size() const { return (uint32_t)outline_colors.size(); }
  ROS_DEPRECATED void set_outline_colors_size(uint32_t size) { outline_colors.resize((size_t)size); }
  ROS_DEPRECATED void get_outline_colors_vec(std::vector< ::std_msgs::ColorRGBA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::ColorRGBA_<ContainerAllocator> >::other > & vec) const { vec = this->outline_colors; }
  ROS_DEPRECATED void set_outline_colors_vec(const std::vector< ::std_msgs::ColorRGBA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::ColorRGBA_<ContainerAllocator> >::other > & vec) { this->outline_colors = vec; }
private:
  static const char* __s_getDataType_() { return "visualization_msgs/ImageMarker"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "e185c670c5f817486e6a216cbee30f1c"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "byte CIRCLE=0\n\
byte LINE_STRIP=1\n\
byte LINE_LIST=2\n\
byte POLYGON=3\n\
byte POINTS=4\n\
\n\
byte ADD=0\n\
byte REMOVE=1\n\
\n\
Header header\n\
string ns		# namespace, used with id to form a unique id\n\
int32 id          	# unique id within the namespace\n\
int32 type        	# CIRCLE/LINE_STRIP/etc.\n\
int32 action      	# ADD/REMOVE\n\
geometry_msgs/Point position # 2D, in pixel-coords\n\
float32 scale	 	# the diameter for a circle, etc.\n\
std_msgs/ColorRGBA outline_color\n\
byte filled		# whether to fill in the shape with color\n\
std_msgs/ColorRGBA fill_color # color [0.0-1.0]\n\
duration lifetime       # How long the object should last before being automatically deleted.  0 means forever\n\
\n\
\n\
geometry_msgs/Point[] points # used for LINE_STRIP/LINE_LIST/POINTS/etc., 2D in pixel coords\n\
std_msgs/ColorRGBA[] outline_colors # a color for each line, point, etc.\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, ns);
    ros::serialization::serialize(stream, id);
    ros::serialization::serialize(stream, type);
    ros::serialization::serialize(stream, action);
    ros::serialization::serialize(stream, position);
    ros::serialization::serialize(stream, scale);
    ros::serialization::serialize(stream, outline_color);
    ros::serialization::serialize(stream, filled);
    ros::serialization::serialize(stream, fill_color);
    ros::serialization::serialize(stream, lifetime);
    ros::serialization::serialize(stream, points);
    ros::serialization::serialize(stream, outline_colors);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, ns);
    ros::serialization::deserialize(stream, id);
    ros::serialization::deserialize(stream, type);
    ros::serialization::deserialize(stream, action);
    ros::serialization::deserialize(stream, position);
    ros::serialization::deserialize(stream, scale);
    ros::serialization::deserialize(stream, outline_color);
    ros::serialization::deserialize(stream, filled);
    ros::serialization::deserialize(stream, fill_color);
    ros::serialization::deserialize(stream, lifetime);
    ros::serialization::deserialize(stream, points);
    ros::serialization::deserialize(stream, outline_colors);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(ns);
    size += ros::serialization::serializationLength(id);
    size += ros::serialization::serializationLength(type);
    size += ros::serialization::serializationLength(action);
    size += ros::serialization::serializationLength(position);
    size += ros::serialization::serializationLength(scale);
    size += ros::serialization::serializationLength(outline_color);
    size += ros::serialization::serializationLength(filled);
    size += ros::serialization::serializationLength(fill_color);
    size += ros::serialization::serializationLength(lifetime);
    size += ros::serialization::serializationLength(points);
    size += ros::serialization::serializationLength(outline_colors);
    return size;
  }

  typedef boost::shared_ptr< ::visualization_msgs::ImageMarker_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::visualization_msgs::ImageMarker_<ContainerAllocator>  const> ConstPtr;
}; // struct ImageMarker
typedef  ::visualization_msgs::ImageMarker_<std::allocator<void> > ImageMarker;

typedef boost::shared_ptr< ::visualization_msgs::ImageMarker> ImageMarkerPtr;
typedef boost::shared_ptr< ::visualization_msgs::ImageMarker const> ImageMarkerConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::visualization_msgs::ImageMarker_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::visualization_msgs::ImageMarker_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace visualization_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::visualization_msgs::ImageMarker_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e185c670c5f817486e6a216cbee30f1c";
  }

  static const char* value(const  ::visualization_msgs::ImageMarker_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe185c670c5f81748ULL;
  static const uint64_t static_value2 = 0x6e6a216cbee30f1cULL;
};

template<class ContainerAllocator>
struct DataType< ::visualization_msgs::ImageMarker_<ContainerAllocator> > {
  static const char* value() 
  {
    return "visualization_msgs/ImageMarker";
  }

  static const char* value(const  ::visualization_msgs::ImageMarker_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::visualization_msgs::ImageMarker_<ContainerAllocator> > {
  static const char* value() 
  {
    return "byte CIRCLE=0\n\
byte LINE_STRIP=1\n\
byte LINE_LIST=2\n\
byte POLYGON=3\n\
byte POINTS=4\n\
\n\
byte ADD=0\n\
byte REMOVE=1\n\
\n\
Header header\n\
string ns		# namespace, used with id to form a unique id\n\
int32 id          	# unique id within the namespace\n\
int32 type        	# CIRCLE/LINE_STRIP/etc.\n\
int32 action      	# ADD/REMOVE\n\
geometry_msgs/Point position # 2D, in pixel-coords\n\
float32 scale	 	# the diameter for a circle, etc.\n\
std_msgs/ColorRGBA outline_color\n\
byte filled		# whether to fill in the shape with color\n\
std_msgs/ColorRGBA fill_color # color [0.0-1.0]\n\
duration lifetime       # How long the object should last before being automatically deleted.  0 means forever\n\
\n\
\n\
geometry_msgs/Point[] points # used for LINE_STRIP/LINE_LIST/POINTS/etc., 2D in pixel coords\n\
std_msgs/ColorRGBA[] outline_colors # a color for each line, point, etc.\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
\n\
";
  }

  static const char* value(const  ::visualization_msgs::ImageMarker_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::visualization_msgs::ImageMarker_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::visualization_msgs::ImageMarker_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::visualization_msgs::ImageMarker_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.ns);
    stream.next(m.id);
    stream.next(m.type);
    stream.next(m.action);
    stream.next(m.position);
    stream.next(m.scale);
    stream.next(m.outline_color);
    stream.next(m.filled);
    stream.next(m.fill_color);
    stream.next(m.lifetime);
    stream.next(m.points);
    stream.next(m.outline_colors);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ImageMarker_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::visualization_msgs::ImageMarker_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::visualization_msgs::ImageMarker_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ns: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.ns);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.type);
    s << indent << "action: ";
    Printer<int32_t>::stream(s, indent + "  ", v.action);
    s << indent << "position: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "scale: ";
    Printer<float>::stream(s, indent + "  ", v.scale);
    s << indent << "outline_color: ";
s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.outline_color);
    s << indent << "filled: ";
    Printer<int8_t>::stream(s, indent + "  ", v.filled);
    s << indent << "fill_color: ";
s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.fill_color);
    s << indent << "lifetime: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.lifetime);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
    s << indent << "outline_colors[]" << std::endl;
    for (size_t i = 0; i < v.outline_colors.size(); ++i)
    {
      s << indent << "  outline_colors[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "    ", v.outline_colors[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // VISUALIZATION_MSGS_MESSAGE_IMAGEMARKER_H
