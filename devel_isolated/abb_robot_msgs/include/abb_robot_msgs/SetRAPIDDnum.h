// Generated by gencpp from file abb_robot_msgs/SetRAPIDDnum.msg
// DO NOT EDIT!


#ifndef ABB_ROBOT_MSGS_MESSAGE_SETRAPIDDNUM_H
#define ABB_ROBOT_MSGS_MESSAGE_SETRAPIDDNUM_H

#include <ros/service_traits.h>


#include <abb_robot_msgs/SetRAPIDDnumRequest.h>
#include <abb_robot_msgs/SetRAPIDDnumResponse.h>


namespace abb_robot_msgs
{

struct SetRAPIDDnum
{

typedef SetRAPIDDnumRequest Request;
typedef SetRAPIDDnumResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetRAPIDDnum
} // namespace abb_robot_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::abb_robot_msgs::SetRAPIDDnum > {
  static const char* value()
  {
    return "62c05fe9bd5c47b90203ea370499cfc5";
  }

  static const char* value(const ::abb_robot_msgs::SetRAPIDDnum&) { return value(); }
};

template<>
struct DataType< ::abb_robot_msgs::SetRAPIDDnum > {
  static const char* value()
  {
    return "abb_robot_msgs/SetRAPIDDnum";
  }

  static const char* value(const ::abb_robot_msgs::SetRAPIDDnum&) { return value(); }
};


// service_traits::MD5Sum< ::abb_robot_msgs::SetRAPIDDnumRequest> should match
// service_traits::MD5Sum< ::abb_robot_msgs::SetRAPIDDnum >
template<>
struct MD5Sum< ::abb_robot_msgs::SetRAPIDDnumRequest>
{
  static const char* value()
  {
    return MD5Sum< ::abb_robot_msgs::SetRAPIDDnum >::value();
  }
  static const char* value(const ::abb_robot_msgs::SetRAPIDDnumRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_robot_msgs::SetRAPIDDnumRequest> should match
// service_traits::DataType< ::abb_robot_msgs::SetRAPIDDnum >
template<>
struct DataType< ::abb_robot_msgs::SetRAPIDDnumRequest>
{
  static const char* value()
  {
    return DataType< ::abb_robot_msgs::SetRAPIDDnum >::value();
  }
  static const char* value(const ::abb_robot_msgs::SetRAPIDDnumRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::abb_robot_msgs::SetRAPIDDnumResponse> should match
// service_traits::MD5Sum< ::abb_robot_msgs::SetRAPIDDnum >
template<>
struct MD5Sum< ::abb_robot_msgs::SetRAPIDDnumResponse>
{
  static const char* value()
  {
    return MD5Sum< ::abb_robot_msgs::SetRAPIDDnum >::value();
  }
  static const char* value(const ::abb_robot_msgs::SetRAPIDDnumResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_robot_msgs::SetRAPIDDnumResponse> should match
// service_traits::DataType< ::abb_robot_msgs::SetRAPIDDnum >
template<>
struct DataType< ::abb_robot_msgs::SetRAPIDDnumResponse>
{
  static const char* value()
  {
    return DataType< ::abb_robot_msgs::SetRAPIDDnum >::value();
  }
  static const char* value(const ::abb_robot_msgs::SetRAPIDDnumResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ABB_ROBOT_MSGS_MESSAGE_SETRAPIDDNUM_H
