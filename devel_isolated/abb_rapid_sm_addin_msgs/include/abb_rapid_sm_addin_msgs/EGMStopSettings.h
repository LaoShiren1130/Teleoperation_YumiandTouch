// Generated by gencpp from file abb_rapid_sm_addin_msgs/EGMStopSettings.msg
// DO NOT EDIT!


#ifndef ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_EGMSTOPSETTINGS_H
#define ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_EGMSTOPSETTINGS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace abb_rapid_sm_addin_msgs
{
template <class ContainerAllocator>
struct EGMStopSettings_
{
  typedef EGMStopSettings_<ContainerAllocator> Type;

  EGMStopSettings_()
    : ramp_out_time(0.0)  {
    }
  EGMStopSettings_(const ContainerAllocator& _alloc)
    : ramp_out_time(0.0)  {
  (void)_alloc;
    }



   typedef float _ramp_out_time_type;
  _ramp_out_time_type ramp_out_time;





  typedef boost::shared_ptr< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> const> ConstPtr;

}; // struct EGMStopSettings_

typedef ::abb_rapid_sm_addin_msgs::EGMStopSettings_<std::allocator<void> > EGMStopSettings;

typedef boost::shared_ptr< ::abb_rapid_sm_addin_msgs::EGMStopSettings > EGMStopSettingsPtr;
typedef boost::shared_ptr< ::abb_rapid_sm_addin_msgs::EGMStopSettings const> EGMStopSettingsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator1> & lhs, const ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator2> & rhs)
{
  return lhs.ramp_out_time == rhs.ramp_out_time;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator1> & lhs, const ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace abb_rapid_sm_addin_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0e3716aa777ece435e2f7343649fe19b";
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0e3716aa777ece43ULL;
  static const uint64_t static_value2 = 0x5e2f7343649fe19bULL;
};

template<class ContainerAllocator>
struct DataType< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb_rapid_sm_addin_msgs/EGMStopSettings";
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the custom RAPID\n"
"#   data type \"EGMStopSettings\" from the RobotWare \"StateMachine Add-In\".\n"
"#\n"
"# Note:\n"
"#   \"EGMStopSettings\" are for example used with the RAPID EGM instruction\n"
"#   \"EGMStop\".\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Ramp out time [s].\n"
"float32 ramp_out_time\n"
;
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ramp_out_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EGMStopSettings_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator>& v)
  {
    s << indent << "ramp_out_time: ";
    Printer<float>::stream(s, indent + "  ", v.ramp_out_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_EGMSTOPSETTINGS_H
