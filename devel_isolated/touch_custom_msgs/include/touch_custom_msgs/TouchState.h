// Generated by gencpp from file touch_custom_msgs/TouchState.msg
// DO NOT EDIT!


#ifndef TOUCH_CUSTOM_MSGS_MESSAGE_TOUCHSTATE_H
#define TOUCH_CUSTOM_MSGS_MESSAGE_TOUCHSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace touch_custom_msgs
{
template <class ContainerAllocator>
struct TouchState_
{
  typedef TouchState_<ContainerAllocator> Type;

  TouchState_()
    : IRBtransform()
    , Joints()
    , Functioncall(false)
    , Gripcommand(0.0)  {
      IRBtransform.assign(0.0);

      Joints.assign(0.0);
  }
  TouchState_(const ContainerAllocator& _alloc)
    : IRBtransform()
    , Joints()
    , Functioncall(false)
    , Gripcommand(0.0)  {
  (void)_alloc;
      IRBtransform.assign(0.0);

      Joints.assign(0.0);
  }



   typedef boost::array<double, 16>  _IRBtransform_type;
  _IRBtransform_type IRBtransform;

   typedef boost::array<double, 6>  _Joints_type;
  _Joints_type Joints;

   typedef uint8_t _Functioncall_type;
  _Functioncall_type Functioncall;

   typedef double _Gripcommand_type;
  _Gripcommand_type Gripcommand;





  typedef boost::shared_ptr< ::touch_custom_msgs::TouchState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::touch_custom_msgs::TouchState_<ContainerAllocator> const> ConstPtr;

}; // struct TouchState_

typedef ::touch_custom_msgs::TouchState_<std::allocator<void> > TouchState;

typedef boost::shared_ptr< ::touch_custom_msgs::TouchState > TouchStatePtr;
typedef boost::shared_ptr< ::touch_custom_msgs::TouchState const> TouchStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::touch_custom_msgs::TouchState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::touch_custom_msgs::TouchState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::touch_custom_msgs::TouchState_<ContainerAllocator1> & lhs, const ::touch_custom_msgs::TouchState_<ContainerAllocator2> & rhs)
{
  return lhs.IRBtransform == rhs.IRBtransform &&
    lhs.Joints == rhs.Joints &&
    lhs.Functioncall == rhs.Functioncall &&
    lhs.Gripcommand == rhs.Gripcommand;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::touch_custom_msgs::TouchState_<ContainerAllocator1> & lhs, const ::touch_custom_msgs::TouchState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace touch_custom_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::touch_custom_msgs::TouchState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::touch_custom_msgs::TouchState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::touch_custom_msgs::TouchState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::touch_custom_msgs::TouchState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::touch_custom_msgs::TouchState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::touch_custom_msgs::TouchState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::touch_custom_msgs::TouchState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2bd38533ff540d6d79b941998e2b99a3";
  }

  static const char* value(const ::touch_custom_msgs::TouchState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2bd38533ff540d6dULL;
  static const uint64_t static_value2 = 0x79b941998e2b99a3ULL;
};

template<class ContainerAllocator>
struct DataType< ::touch_custom_msgs::TouchState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "touch_custom_msgs/TouchState";
  }

  static const char* value(const ::touch_custom_msgs::TouchState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::touch_custom_msgs::TouchState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[16] IRBtransform\n"
"float64[6] Joints\n"
"bool Functioncall\n"
"float64 Gripcommand\n"
;
  }

  static const char* value(const ::touch_custom_msgs::TouchState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::touch_custom_msgs::TouchState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.IRBtransform);
      stream.next(m.Joints);
      stream.next(m.Functioncall);
      stream.next(m.Gripcommand);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TouchState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::touch_custom_msgs::TouchState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::touch_custom_msgs::TouchState_<ContainerAllocator>& v)
  {
    s << indent << "IRBtransform[]" << std::endl;
    for (size_t i = 0; i < v.IRBtransform.size(); ++i)
    {
      s << indent << "  IRBtransform[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.IRBtransform[i]);
    }
    s << indent << "Joints[]" << std::endl;
    for (size_t i = 0; i < v.Joints.size(); ++i)
    {
      s << indent << "  Joints[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.Joints[i]);
    }
    s << indent << "Functioncall: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Functioncall);
    s << indent << "Gripcommand: ";
    Printer<double>::stream(s, indent + "  ", v.Gripcommand);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOUCH_CUSTOM_MSGS_MESSAGE_TOUCHSTATE_H
