// Generated by gencpp from file abb_rapid_msgs/RobJoint.msg
// DO NOT EDIT!


#ifndef ABB_RAPID_MSGS_MESSAGE_ROBJOINT_H
#define ABB_RAPID_MSGS_MESSAGE_ROBJOINT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace abb_rapid_msgs
{
template <class ContainerAllocator>
struct RobJoint_
{
  typedef RobJoint_<ContainerAllocator> Type;

  RobJoint_()
    : rax_1(0.0)
    , rax_2(0.0)
    , rax_3(0.0)
    , rax_4(0.0)
    , rax_5(0.0)
    , rax_6(0.0)  {
    }
  RobJoint_(const ContainerAllocator& _alloc)
    : rax_1(0.0)
    , rax_2(0.0)
    , rax_3(0.0)
    , rax_4(0.0)
    , rax_5(0.0)
    , rax_6(0.0)  {
  (void)_alloc;
    }



   typedef float _rax_1_type;
  _rax_1_type rax_1;

   typedef float _rax_2_type;
  _rax_2_type rax_2;

   typedef float _rax_3_type;
  _rax_3_type rax_3;

   typedef float _rax_4_type;
  _rax_4_type rax_4;

   typedef float _rax_5_type;
  _rax_5_type rax_5;

   typedef float _rax_6_type;
  _rax_6_type rax_6;





  typedef boost::shared_ptr< ::abb_rapid_msgs::RobJoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::abb_rapid_msgs::RobJoint_<ContainerAllocator> const> ConstPtr;

}; // struct RobJoint_

typedef ::abb_rapid_msgs::RobJoint_<std::allocator<void> > RobJoint;

typedef boost::shared_ptr< ::abb_rapid_msgs::RobJoint > RobJointPtr;
typedef boost::shared_ptr< ::abb_rapid_msgs::RobJoint const> RobJointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::abb_rapid_msgs::RobJoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::abb_rapid_msgs::RobJoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::abb_rapid_msgs::RobJoint_<ContainerAllocator1> & lhs, const ::abb_rapid_msgs::RobJoint_<ContainerAllocator2> & rhs)
{
  return lhs.rax_1 == rhs.rax_1 &&
    lhs.rax_2 == rhs.rax_2 &&
    lhs.rax_3 == rhs.rax_3 &&
    lhs.rax_4 == rhs.rax_4 &&
    lhs.rax_5 == rhs.rax_5 &&
    lhs.rax_6 == rhs.rax_6;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::abb_rapid_msgs::RobJoint_<ContainerAllocator1> & lhs, const ::abb_rapid_msgs::RobJoint_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace abb_rapid_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::abb_rapid_msgs::RobJoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_rapid_msgs::RobJoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_rapid_msgs::RobJoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_rapid_msgs::RobJoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_rapid_msgs::RobJoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_rapid_msgs::RobJoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::abb_rapid_msgs::RobJoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "24a88117c4b385974e50d44f6663eb2a";
  }

  static const char* value(const ::abb_rapid_msgs::RobJoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x24a88117c4b38597ULL;
  static const uint64_t static_value2 = 0x4e50d44f6663eb2aULL;
};

template<class ContainerAllocator>
struct DataType< ::abb_rapid_msgs::RobJoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb_rapid_msgs/RobJoint";
  }

  static const char* value(const ::abb_rapid_msgs::RobJoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::abb_rapid_msgs::RobJoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the\n"
"#   RAPID data type \"robjoint\" (joint position of robot axes).\n"
"#\n"
"# Note:\n"
"#   Please see the \"Technical reference manual - RAPID Instructions,\n"
"#   Functions and Data types\" for more details.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# The position of robot axis 1-6 in degrees from the calibration position.\n"
"float32 rax_1\n"
"float32 rax_2\n"
"float32 rax_3\n"
"float32 rax_4\n"
"float32 rax_5\n"
"float32 rax_6\n"
;
  }

  static const char* value(const ::abb_rapid_msgs::RobJoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::abb_rapid_msgs::RobJoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rax_1);
      stream.next(m.rax_2);
      stream.next(m.rax_3);
      stream.next(m.rax_4);
      stream.next(m.rax_5);
      stream.next(m.rax_6);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobJoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::abb_rapid_msgs::RobJoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::abb_rapid_msgs::RobJoint_<ContainerAllocator>& v)
  {
    s << indent << "rax_1: ";
    Printer<float>::stream(s, indent + "  ", v.rax_1);
    s << indent << "rax_2: ";
    Printer<float>::stream(s, indent + "  ", v.rax_2);
    s << indent << "rax_3: ";
    Printer<float>::stream(s, indent + "  ", v.rax_3);
    s << indent << "rax_4: ";
    Printer<float>::stream(s, indent + "  ", v.rax_4);
    s << indent << "rax_5: ";
    Printer<float>::stream(s, indent + "  ", v.rax_5);
    s << indent << "rax_6: ";
    Printer<float>::stream(s, indent + "  ", v.rax_6);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ABB_RAPID_MSGS_MESSAGE_ROBJOINT_H
