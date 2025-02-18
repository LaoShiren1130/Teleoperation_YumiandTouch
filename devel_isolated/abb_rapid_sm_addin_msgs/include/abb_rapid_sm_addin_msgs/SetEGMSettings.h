// Generated by gencpp from file abb_rapid_sm_addin_msgs/SetEGMSettings.msg
// DO NOT EDIT!


#ifndef ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_SETEGMSETTINGS_H
#define ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_SETEGMSETTINGS_H

#include <ros/service_traits.h>


#include <abb_rapid_sm_addin_msgs/SetEGMSettingsRequest.h>
#include <abb_rapid_sm_addin_msgs/SetEGMSettingsResponse.h>


namespace abb_rapid_sm_addin_msgs
{

struct SetEGMSettings
{

typedef SetEGMSettingsRequest Request;
typedef SetEGMSettingsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetEGMSettings
} // namespace abb_rapid_sm_addin_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::abb_rapid_sm_addin_msgs::SetEGMSettings > {
  static const char* value()
  {
    return "1308f55a0badf1657b70daea7afc5401";
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::SetEGMSettings&) { return value(); }
};

template<>
struct DataType< ::abb_rapid_sm_addin_msgs::SetEGMSettings > {
  static const char* value()
  {
    return "abb_rapid_sm_addin_msgs/SetEGMSettings";
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::SetEGMSettings&) { return value(); }
};


// service_traits::MD5Sum< ::abb_rapid_sm_addin_msgs::SetEGMSettingsRequest> should match
// service_traits::MD5Sum< ::abb_rapid_sm_addin_msgs::SetEGMSettings >
template<>
struct MD5Sum< ::abb_rapid_sm_addin_msgs::SetEGMSettingsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::abb_rapid_sm_addin_msgs::SetEGMSettings >::value();
  }
  static const char* value(const ::abb_rapid_sm_addin_msgs::SetEGMSettingsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_rapid_sm_addin_msgs::SetEGMSettingsRequest> should match
// service_traits::DataType< ::abb_rapid_sm_addin_msgs::SetEGMSettings >
template<>
struct DataType< ::abb_rapid_sm_addin_msgs::SetEGMSettingsRequest>
{
  static const char* value()
  {
    return DataType< ::abb_rapid_sm_addin_msgs::SetEGMSettings >::value();
  }
  static const char* value(const ::abb_rapid_sm_addin_msgs::SetEGMSettingsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::abb_rapid_sm_addin_msgs::SetEGMSettingsResponse> should match
// service_traits::MD5Sum< ::abb_rapid_sm_addin_msgs::SetEGMSettings >
template<>
struct MD5Sum< ::abb_rapid_sm_addin_msgs::SetEGMSettingsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::abb_rapid_sm_addin_msgs::SetEGMSettings >::value();
  }
  static const char* value(const ::abb_rapid_sm_addin_msgs::SetEGMSettingsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_rapid_sm_addin_msgs::SetEGMSettingsResponse> should match
// service_traits::DataType< ::abb_rapid_sm_addin_msgs::SetEGMSettings >
template<>
struct DataType< ::abb_rapid_sm_addin_msgs::SetEGMSettingsResponse>
{
  static const char* value()
  {
    return DataType< ::abb_rapid_sm_addin_msgs::SetEGMSettings >::value();
  }
  static const char* value(const ::abb_rapid_sm_addin_msgs::SetEGMSettingsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_SETEGMSETTINGS_H
