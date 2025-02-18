// Generated by gencpp from file abb_robot_msgs/GetIOSignalRequest.msg
// DO NOT EDIT!


#ifndef ABB_ROBOT_MSGS_MESSAGE_GETIOSIGNALREQUEST_H
#define ABB_ROBOT_MSGS_MESSAGE_GETIOSIGNALREQUEST_H


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
struct GetIOSignalRequest_
{
  typedef GetIOSignalRequest_<ContainerAllocator> Type;

  GetIOSignalRequest_()
    : signal()  {
    }
  GetIOSignalRequest_(const ContainerAllocator& _alloc)
    : signal(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _signal_type;
  _signal_type signal;





  typedef boost::shared_ptr< ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetIOSignalRequest_

typedef ::abb_robot_msgs::GetIOSignalRequest_<std::allocator<void> > GetIOSignalRequest;

typedef boost::shared_ptr< ::abb_robot_msgs::GetIOSignalRequest > GetIOSignalRequestPtr;
typedef boost::shared_ptr< ::abb_robot_msgs::GetIOSignalRequest const> GetIOSignalRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator1> & lhs, const ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator2> & rhs)
{
  return lhs.signal == rhs.signal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator1> & lhs, const ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace abb_robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9591b8ace81feee36c93130ad3fe6a19";
  }

  static const char* value(const ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9591b8ace81feee3ULL;
  static const uint64_t static_value2 = 0x6c93130ad3fe6a19ULL;
};

template<class ContainerAllocator>
struct DataType< ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb_robot_msgs/GetIOSignalRequest";
  }

  static const char* value(const ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this service definition, is to define a way to get the\n"
"#   value of an IO-signal defined in an ABB robot controller system.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Service request fields\n"
"#-------------------------------------------------------------------------------\n"
"# Name of the targeted IO-signal.\n"
"string signal\n"
"\n"
;
  }

  static const char* value(const ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.signal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetIOSignalRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::abb_robot_msgs::GetIOSignalRequest_<ContainerAllocator>& v)
  {
    s << indent << "signal: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.signal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ABB_ROBOT_MSGS_MESSAGE_GETIOSIGNALREQUEST_H
