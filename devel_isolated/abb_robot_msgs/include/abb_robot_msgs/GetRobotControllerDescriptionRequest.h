// Generated by gencpp from file abb_robot_msgs/GetRobotControllerDescriptionRequest.msg
// DO NOT EDIT!


#ifndef ABB_ROBOT_MSGS_MESSAGE_GETROBOTCONTROLLERDESCRIPTIONREQUEST_H
#define ABB_ROBOT_MSGS_MESSAGE_GETROBOTCONTROLLERDESCRIPTIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace abb_robot_msgs
{
template <class ContainerAllocator>
struct GetRobotControllerDescriptionRequest_
{
  typedef GetRobotControllerDescriptionRequest_<ContainerAllocator> Type;

  GetRobotControllerDescriptionRequest_()
    {
    }
  GetRobotControllerDescriptionRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetRobotControllerDescriptionRequest_

typedef ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<std::allocator<void> > GetRobotControllerDescriptionRequest;

typedef boost::shared_ptr< ::abb_robot_msgs::GetRobotControllerDescriptionRequest > GetRobotControllerDescriptionRequestPtr;
typedef boost::shared_ptr< ::abb_robot_msgs::GetRobotControllerDescriptionRequest const> GetRobotControllerDescriptionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace abb_robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb_robot_msgs/GetRobotControllerDescriptionRequest";
  }

  static const char* value(const ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this service definition, is to define a way to get a\n"
"#   (partial) description of an ABB robot controller system.\n"
"#\n"
"# Note:\n"
"#   The description will be returned in a Google Protocol Buffer text format.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Service request fields\n"
"#-------------------------------------------------------------------------------\n"
"\n"
;
  }

  static const char* value(const ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetRobotControllerDescriptionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::abb_robot_msgs::GetRobotControllerDescriptionRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ABB_ROBOT_MSGS_MESSAGE_GETROBOTCONTROLLERDESCRIPTIONREQUEST_H
