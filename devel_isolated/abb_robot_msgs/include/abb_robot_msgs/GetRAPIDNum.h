// Generated by gencpp from file abb_robot_msgs/GetRAPIDNum.msg
// DO NOT EDIT!


#ifndef ABB_ROBOT_MSGS_MESSAGE_GETRAPIDNUM_H
#define ABB_ROBOT_MSGS_MESSAGE_GETRAPIDNUM_H

#include <ros/service_traits.h>


#include <abb_robot_msgs/GetRAPIDNumRequest.h>
#include <abb_robot_msgs/GetRAPIDNumResponse.h>


namespace abb_robot_msgs
{

struct GetRAPIDNum
{

typedef GetRAPIDNumRequest Request;
typedef GetRAPIDNumResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetRAPIDNum
} // namespace abb_robot_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::abb_robot_msgs::GetRAPIDNum > {
  static const char* value()
  {
    return "50b6604c67513df1c689dbe2ae540bb1";
  }

  static const char* value(const ::abb_robot_msgs::GetRAPIDNum&) { return value(); }
};

template<>
struct DataType< ::abb_robot_msgs::GetRAPIDNum > {
  static const char* value()
  {
    return "abb_robot_msgs/GetRAPIDNum";
  }

  static const char* value(const ::abb_robot_msgs::GetRAPIDNum&) { return value(); }
};


// service_traits::MD5Sum< ::abb_robot_msgs::GetRAPIDNumRequest> should match
// service_traits::MD5Sum< ::abb_robot_msgs::GetRAPIDNum >
template<>
struct MD5Sum< ::abb_robot_msgs::GetRAPIDNumRequest>
{
  static const char* value()
  {
    return MD5Sum< ::abb_robot_msgs::GetRAPIDNum >::value();
  }
  static const char* value(const ::abb_robot_msgs::GetRAPIDNumRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_robot_msgs::GetRAPIDNumRequest> should match
// service_traits::DataType< ::abb_robot_msgs::GetRAPIDNum >
template<>
struct DataType< ::abb_robot_msgs::GetRAPIDNumRequest>
{
  static const char* value()
  {
    return DataType< ::abb_robot_msgs::GetRAPIDNum >::value();
  }
  static const char* value(const ::abb_robot_msgs::GetRAPIDNumRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::abb_robot_msgs::GetRAPIDNumResponse> should match
// service_traits::MD5Sum< ::abb_robot_msgs::GetRAPIDNum >
template<>
struct MD5Sum< ::abb_robot_msgs::GetRAPIDNumResponse>
{
  static const char* value()
  {
    return MD5Sum< ::abb_robot_msgs::GetRAPIDNum >::value();
  }
  static const char* value(const ::abb_robot_msgs::GetRAPIDNumResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_robot_msgs::GetRAPIDNumResponse> should match
// service_traits::DataType< ::abb_robot_msgs::GetRAPIDNum >
template<>
struct DataType< ::abb_robot_msgs::GetRAPIDNumResponse>
{
  static const char* value()
  {
    return DataType< ::abb_robot_msgs::GetRAPIDNum >::value();
  }
  static const char* value(const ::abb_robot_msgs::GetRAPIDNumResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ABB_ROBOT_MSGS_MESSAGE_GETRAPIDNUM_H
