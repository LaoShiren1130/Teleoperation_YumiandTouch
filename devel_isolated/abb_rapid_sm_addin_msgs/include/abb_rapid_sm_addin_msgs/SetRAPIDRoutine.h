// Generated by gencpp from file abb_rapid_sm_addin_msgs/SetRAPIDRoutine.msg
// DO NOT EDIT!


#ifndef ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_SETRAPIDROUTINE_H
#define ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_SETRAPIDROUTINE_H

#include <ros/service_traits.h>


#include <abb_rapid_sm_addin_msgs/SetRAPIDRoutineRequest.h>
#include <abb_rapid_sm_addin_msgs/SetRAPIDRoutineResponse.h>


namespace abb_rapid_sm_addin_msgs
{

struct SetRAPIDRoutine
{

typedef SetRAPIDRoutineRequest Request;
typedef SetRAPIDRoutineResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetRAPIDRoutine
} // namespace abb_rapid_sm_addin_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutine > {
  static const char* value()
  {
    return "652cc4087927fd3e9d05a7309ce84794";
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::SetRAPIDRoutine&) { return value(); }
};

template<>
struct DataType< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutine > {
  static const char* value()
  {
    return "abb_rapid_sm_addin_msgs/SetRAPIDRoutine";
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::SetRAPIDRoutine&) { return value(); }
};


// service_traits::MD5Sum< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutineRequest> should match
// service_traits::MD5Sum< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutine >
template<>
struct MD5Sum< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutineRequest>
{
  static const char* value()
  {
    return MD5Sum< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutine >::value();
  }
  static const char* value(const ::abb_rapid_sm_addin_msgs::SetRAPIDRoutineRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutineRequest> should match
// service_traits::DataType< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutine >
template<>
struct DataType< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutineRequest>
{
  static const char* value()
  {
    return DataType< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutine >::value();
  }
  static const char* value(const ::abb_rapid_sm_addin_msgs::SetRAPIDRoutineRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutineResponse> should match
// service_traits::MD5Sum< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutine >
template<>
struct MD5Sum< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutineResponse>
{
  static const char* value()
  {
    return MD5Sum< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutine >::value();
  }
  static const char* value(const ::abb_rapid_sm_addin_msgs::SetRAPIDRoutineResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutineResponse> should match
// service_traits::DataType< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutine >
template<>
struct DataType< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutineResponse>
{
  static const char* value()
  {
    return DataType< ::abb_rapid_sm_addin_msgs::SetRAPIDRoutine >::value();
  }
  static const char* value(const ::abb_rapid_sm_addin_msgs::SetRAPIDRoutineResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_SETRAPIDROUTINE_H
