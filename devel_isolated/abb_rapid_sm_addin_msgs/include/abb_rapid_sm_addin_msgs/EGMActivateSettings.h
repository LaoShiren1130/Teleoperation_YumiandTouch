// Generated by gencpp from file abb_rapid_sm_addin_msgs/EGMActivateSettings.msg
// DO NOT EDIT!


#ifndef ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_EGMACTIVATESETTINGS_H
#define ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_EGMACTIVATESETTINGS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <abb_rapid_msgs/ToolData.h>
#include <abb_rapid_msgs/WObjData.h>
#include <abb_rapid_msgs/Pose.h>
#include <abb_rapid_msgs/Pose.h>

namespace abb_rapid_sm_addin_msgs
{
template <class ContainerAllocator>
struct EGMActivateSettings_
{
  typedef EGMActivateSettings_<ContainerAllocator> Type;

  EGMActivateSettings_()
    : tool()
    , wobj()
    , correction_frame()
    , sensor_frame()
    , cond_min_max(0.0)
    , lp_filter(0.0)
    , sample_rate(0)
    , max_speed_deviation(0.0)  {
    }
  EGMActivateSettings_(const ContainerAllocator& _alloc)
    : tool(_alloc)
    , wobj(_alloc)
    , correction_frame(_alloc)
    , sensor_frame(_alloc)
    , cond_min_max(0.0)
    , lp_filter(0.0)
    , sample_rate(0)
    , max_speed_deviation(0.0)  {
  (void)_alloc;
    }



   typedef  ::abb_rapid_msgs::ToolData_<ContainerAllocator>  _tool_type;
  _tool_type tool;

   typedef  ::abb_rapid_msgs::WObjData_<ContainerAllocator>  _wobj_type;
  _wobj_type wobj;

   typedef  ::abb_rapid_msgs::Pose_<ContainerAllocator>  _correction_frame_type;
  _correction_frame_type correction_frame;

   typedef  ::abb_rapid_msgs::Pose_<ContainerAllocator>  _sensor_frame_type;
  _sensor_frame_type sensor_frame;

   typedef float _cond_min_max_type;
  _cond_min_max_type cond_min_max;

   typedef float _lp_filter_type;
  _lp_filter_type lp_filter;

   typedef uint8_t _sample_rate_type;
  _sample_rate_type sample_rate;

   typedef float _max_speed_deviation_type;
  _max_speed_deviation_type max_speed_deviation;





  typedef boost::shared_ptr< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> const> ConstPtr;

}; // struct EGMActivateSettings_

typedef ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<std::allocator<void> > EGMActivateSettings;

typedef boost::shared_ptr< ::abb_rapid_sm_addin_msgs::EGMActivateSettings > EGMActivateSettingsPtr;
typedef boost::shared_ptr< ::abb_rapid_sm_addin_msgs::EGMActivateSettings const> EGMActivateSettingsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator1> & lhs, const ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator2> & rhs)
{
  return lhs.tool == rhs.tool &&
    lhs.wobj == rhs.wobj &&
    lhs.correction_frame == rhs.correction_frame &&
    lhs.sensor_frame == rhs.sensor_frame &&
    lhs.cond_min_max == rhs.cond_min_max &&
    lhs.lp_filter == rhs.lp_filter &&
    lhs.sample_rate == rhs.sample_rate &&
    lhs.max_speed_deviation == rhs.max_speed_deviation;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator1> & lhs, const ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace abb_rapid_sm_addin_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "edc93be8ce076e9147c54b4dc80e7974";
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xedc93be8ce076e91ULL;
  static const uint64_t static_value2 = 0x47c54b4dc80e7974ULL;
};

template<class ContainerAllocator>
struct DataType< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb_rapid_sm_addin_msgs/EGMActivateSettings";
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the custom RAPID\n"
"#   data type \"EGMActivateSettings\" from the RobotWare \"StateMachine Add-In\".\n"
"#\n"
"# Note:\n"
"#   \"EGMActivateSettings\" are for example used with the RAPID EGM instructions\n"
"#   \"EGMActJoint\" and \"EGMActPose\".\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Tool to use for EGM motions.\n"
"abb_rapid_msgs/ToolData tool\n"
"\n"
"# Work object to use for EGM motions.\n"
"abb_rapid_msgs/WObjData wobj\n"
"\n"
"# Correction frame to use for EGM motions (only used in EGM pose mode).\n"
"abb_rapid_msgs/Pose correction_frame\n"
"\n"
"# Sensor frame to use for EGM motions (only used in EGM pose mode).\n"
"abb_rapid_msgs/Pose sensor_frame\n"
"\n"
"# Condition threshold value [deg or mm] for when an EGM motion's convergence\n"
"# criteria is considered to be fulfilled.\n"
"float32 cond_min_max\n"
"\n"
"# Low pass filter bandwidth [Hz] for the EGM controller.\n"
"float32 lp_filter\n"
"\n"
"# Sample rate [ms] for the EGM communication.\n"
"uint8 sample_rate\n"
"\n"
"# Maximum admitted joint speed [deg/s].\n"
"float32 max_speed_deviation\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_msgs/ToolData\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the\n"
"#   RAPID data type \"tooldata\" (tool data).\n"
"#\n"
"# Note:\n"
"#   Please see the \"Technical reference manual - RAPID Instructions,\n"
"#   Functions and Data types\" for more details.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Defines whether or not the robot is holding the tool:\n"
"# - TRUE: The robot is holding the tool.\n"
"# - FALSE: The robot is not holding the tool, that is, a stationary tool.\n"
"bool robhold\n"
"\n"
"# The tool coordinate system, that is:\n"
"# - The position of the TCP (x, y and z) in mm,\n"
"#   expressed in the wrist coordinate system (tool0).\n"
"# - The orientation of the tool coordinate system,\n"
"#   expressed in the wrist coordinate system.\n"
"Pose tframe\n"
"\n"
"# The load of the tool (if robot held tool).\n"
"# The load of the gripper holding the work object (if stationary tool).\n"
"LoadData tload\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_msgs/Pose\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the\n"
"#   RAPID data type \"pose\" (coordinate transformations).\n"
"#\n"
"# Note:\n"
"#   Please see the \"Technical reference manual - RAPID Instructions,\n"
"#   Functions and Data types\" for more details.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# The displacement in position (x, y, and z) of the coordinate system.\n"
"Pos trans\n"
"\n"
"# The rotation of the coordinate system.\n"
"Orient rot\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_msgs/Pos\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the\n"
"#   RAPID data type \"pos\" (positions (only X, Y and Z)).\n"
"#\n"
"# Note:\n"
"#   Please see the \"Technical reference manual - RAPID Instructions,\n"
"#   Functions and Data types\" for more details.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# The x-, y- and z-value of the position.\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_msgs/Orient\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the\n"
"#   RAPID data type \"orient\" (orientation).\n"
"#\n"
"# Note:\n"
"#   Please see the \"Technical reference manual - RAPID Instructions,\n"
"#   Functions and Data types\" for more details.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Quaternion 1-4.\n"
"float32 q1\n"
"float32 q2\n"
"float32 q3\n"
"float32 q4\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_msgs/LoadData\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the\n"
"#   RAPID data type \"loaddata\" (load data).\n"
"#\n"
"# Note:\n"
"#   Please see the \"Technical reference manual - RAPID Instructions,\n"
"#   Functions and Data types\" for more details.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# The mass (weight) of the load in kg.\n"
"float32 mass\n"
"\n"
"# The center of gravity of the payload, expressed in mm,\n"
"# in the tool coordinate system if the robot is holding the tool.\n"
"#\n"
"# If a stationary tool is used then the center of gravity for the payload\n"
"# held by the gripper is expressed in the object frame of the work object\n"
"# coordinate system moved by the robot.\n"
"Pos cog\n"
"\n"
"# The orientation of the axes of moment.\n"
"#\n"
"# These are the principal axes of the payload\n"
"# moment of inertia with origin in cog.\n"
"#\n"
"# If the robot is holding the tool, the axes of moment\n"
"# are expressed in the tool coordinate system.\n"
"Orient aom\n"
"\n"
"# The moment of inertia of the load around the x-, y- and z-axis,\n"
"# expressed in kgm^2.\n"
"float32 ix\n"
"float32 iy\n"
"float32 iz\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_msgs/WObjData\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the\n"
"#   RAPID data type \"wobjdata\" (work object data).\n"
"#\n"
"# Note:\n"
"#   Please see the \"Technical reference manual - RAPID Instructions,\n"
"#   Functions and Data types\" for more details.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Defines whether or not the robot in the actual\n"
"# program task is holding the work object:\n"
"# - TRUE: The robot is holding the work object,\n"
"#         i.e. using a stationary tool.\n"
"# - FALSE: The robot is not holding the work object,\n"
"#          i.e. the robot is holding the tool.\n"
"bool robhold\n"
"\n"
"# Defines whether or not a fixed user coordinate system is used:\n"
"# - TRUE: Fixed user coordinate system.\n"
"# - FALSE: Movable user coordinate system,\n"
"#          i.e. coordinated external axes are used.\n"
"#          Also to be used in a MultiMove system in\n"
"#          semicoordinated or synchronized coordinated mode.\n"
"bool ufprog\n"
"\n"
"# The mechanical unit with which the robot movements are coordinated.\n"
"#\n"
"# Only specified in the case of movable user\n"
"# coordinate systems (ufprog is FALSE).\n"
"string ufmec\n"
"\n"
"# The user coordinate system, i.e. the position\n"
"# of the current work surface or fixture.\n"
"Pose uframe\n"
"\n"
"# The object coordinate system, i.e. the position\n"
"# of the current work object.\n"
"Pose oframe\n"
;
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tool);
      stream.next(m.wobj);
      stream.next(m.correction_frame);
      stream.next(m.sensor_frame);
      stream.next(m.cond_min_max);
      stream.next(m.lp_filter);
      stream.next(m.sample_rate);
      stream.next(m.max_speed_deviation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EGMActivateSettings_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator>& v)
  {
    s << indent << "tool: ";
    s << std::endl;
    Printer< ::abb_rapid_msgs::ToolData_<ContainerAllocator> >::stream(s, indent + "  ", v.tool);
    s << indent << "wobj: ";
    s << std::endl;
    Printer< ::abb_rapid_msgs::WObjData_<ContainerAllocator> >::stream(s, indent + "  ", v.wobj);
    s << indent << "correction_frame: ";
    s << std::endl;
    Printer< ::abb_rapid_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.correction_frame);
    s << indent << "sensor_frame: ";
    s << std::endl;
    Printer< ::abb_rapid_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.sensor_frame);
    s << indent << "cond_min_max: ";
    Printer<float>::stream(s, indent + "  ", v.cond_min_max);
    s << indent << "lp_filter: ";
    Printer<float>::stream(s, indent + "  ", v.lp_filter);
    s << indent << "sample_rate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sample_rate);
    s << indent << "max_speed_deviation: ";
    Printer<float>::stream(s, indent + "  ", v.max_speed_deviation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_EGMACTIVATESETTINGS_H
