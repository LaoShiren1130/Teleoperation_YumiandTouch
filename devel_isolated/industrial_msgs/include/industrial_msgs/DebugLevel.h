// Generated by gencpp from file industrial_msgs/DebugLevel.msg
// DO NOT EDIT!


#ifndef INDUSTRIAL_MSGS_MESSAGE_DEBUGLEVEL_H
#define INDUSTRIAL_MSGS_MESSAGE_DEBUGLEVEL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace industrial_msgs
{
template <class ContainerAllocator>
struct DebugLevel_
{
  typedef DebugLevel_<ContainerAllocator> Type;

  DebugLevel_()
    : val(0)  {
    }
  DebugLevel_(const ContainerAllocator& _alloc)
    : val(0)  {
  (void)_alloc;
    }



   typedef uint8_t _val_type;
  _val_type val;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(DEBUG)
  #undef DEBUG
#endif
#if defined(_WIN32) && defined(INFO)
  #undef INFO
#endif
#if defined(_WIN32) && defined(WARN)
  #undef WARN
#endif
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif
#if defined(_WIN32) && defined(FATAL)
  #undef FATAL
#endif
#if defined(_WIN32) && defined(NONE)
  #undef NONE
#endif

  enum {
    DEBUG = 5u,
    INFO = 4u,
    WARN = 3u,
    ERROR = 2u,
    FATAL = 1u,
    NONE = 0u,
  };


  typedef boost::shared_ptr< ::industrial_msgs::DebugLevel_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::industrial_msgs::DebugLevel_<ContainerAllocator> const> ConstPtr;

}; // struct DebugLevel_

typedef ::industrial_msgs::DebugLevel_<std::allocator<void> > DebugLevel;

typedef boost::shared_ptr< ::industrial_msgs::DebugLevel > DebugLevelPtr;
typedef boost::shared_ptr< ::industrial_msgs::DebugLevel const> DebugLevelConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::industrial_msgs::DebugLevel_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::industrial_msgs::DebugLevel_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::industrial_msgs::DebugLevel_<ContainerAllocator1> & lhs, const ::industrial_msgs::DebugLevel_<ContainerAllocator2> & rhs)
{
  return lhs.val == rhs.val;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::industrial_msgs::DebugLevel_<ContainerAllocator1> & lhs, const ::industrial_msgs::DebugLevel_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace industrial_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::industrial_msgs::DebugLevel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_msgs::DebugLevel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::industrial_msgs::DebugLevel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::industrial_msgs::DebugLevel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_msgs::DebugLevel_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_msgs::DebugLevel_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::industrial_msgs::DebugLevel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5bfde194fd95d83abdb02a03ee48fbe7";
  }

  static const char* value(const ::industrial_msgs::DebugLevel_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5bfde194fd95d83aULL;
  static const uint64_t static_value2 = 0xbdb02a03ee48fbe7ULL;
};

template<class ContainerAllocator>
struct DataType< ::industrial_msgs::DebugLevel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "industrial_msgs/DebugLevel";
  }

  static const char* value(const ::industrial_msgs::DebugLevel_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::industrial_msgs::DebugLevel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Debug level message enumeration.  This may replicate some functionality that\n"
"# alreay exists in the ROS logger.\n"
"# TODO: Get more information on the ROS Logger.\n"
"uint8 val\n"
"\n"
"uint8 DEBUG = 5\n"
"uint8 INFO = 4\n"
"uint8 WARN = 3\n"
"uint8 ERROR = 2\n"
"uint8 FATAL = 1\n"
"uint8 NONE = 0 \n"
;
  }

  static const char* value(const ::industrial_msgs::DebugLevel_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::industrial_msgs::DebugLevel_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.val);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DebugLevel_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::industrial_msgs::DebugLevel_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::industrial_msgs::DebugLevel_<ContainerAllocator>& v)
  {
    s << indent << "val: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.val);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INDUSTRIAL_MSGS_MESSAGE_DEBUGLEVEL_H
