// Generated by gencpp from file abb_robot_msgs/MechanicalUnitState.msg
// DO NOT EDIT!


#ifndef ABB_ROBOT_MSGS_MESSAGE_MECHANICALUNITSTATE_H
#define ABB_ROBOT_MSGS_MESSAGE_MECHANICALUNITSTATE_H


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
struct MechanicalUnitState_
{
  typedef MechanicalUnitState_<ContainerAllocator> Type;

  MechanicalUnitState_()
    : name()
    , activated(false)  {
    }
  MechanicalUnitState_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , activated(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef uint8_t _activated_type;
  _activated_type activated;





  typedef boost::shared_ptr< ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> const> ConstPtr;

}; // struct MechanicalUnitState_

typedef ::abb_robot_msgs::MechanicalUnitState_<std::allocator<void> > MechanicalUnitState;

typedef boost::shared_ptr< ::abb_robot_msgs::MechanicalUnitState > MechanicalUnitStatePtr;
typedef boost::shared_ptr< ::abb_robot_msgs::MechanicalUnitState const> MechanicalUnitStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator1> & lhs, const ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.activated == rhs.activated;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator1> & lhs, const ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace abb_robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "add093e2c7fdce39ce8a0c1e573668e8";
  }

  static const char* value(const ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xadd093e2c7fdce39ULL;
  static const uint64_t static_value2 = 0xce8a0c1e573668e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb_robot_msgs/MechanicalUnitState";
  }

  static const char* value(const ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent a subset of states\n"
"#   of a mechanical unit defined in an ABB robot controller system.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# The mechanical unit's name.\n"
"string name\n"
"\n"
"# The mechanical unit's activated/deactivated status.\n"
"bool activated\n"
;
  }

  static const char* value(const ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.activated);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MechanicalUnitState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::abb_robot_msgs::MechanicalUnitState_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "activated: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.activated);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ABB_ROBOT_MSGS_MESSAGE_MECHANICALUNITSTATE_H
