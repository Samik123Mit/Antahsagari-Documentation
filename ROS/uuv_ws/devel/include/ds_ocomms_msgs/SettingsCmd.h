// Generated by gencpp from file ds_ocomms_msgs/SettingsCmd.msg
// DO NOT EDIT!


#ifndef DS_OCOMMS_MSGS_MESSAGE_SETTINGSCMD_H
#define DS_OCOMMS_MSGS_MESSAGE_SETTINGSCMD_H

#include <ros/service_traits.h>


#include <ds_ocomms_msgs/SettingsCmdRequest.h>
#include <ds_ocomms_msgs/SettingsCmdResponse.h>


namespace ds_ocomms_msgs
{

struct SettingsCmd
{

typedef SettingsCmdRequest Request;
typedef SettingsCmdResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SettingsCmd
} // namespace ds_ocomms_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ds_ocomms_msgs::SettingsCmd > {
  static const char* value()
  {
    return "68d43c4a7021aab577e276c8a1f66a15";
  }

  static const char* value(const ::ds_ocomms_msgs::SettingsCmd&) { return value(); }
};

template<>
struct DataType< ::ds_ocomms_msgs::SettingsCmd > {
  static const char* value()
  {
    return "ds_ocomms_msgs/SettingsCmd";
  }

  static const char* value(const ::ds_ocomms_msgs::SettingsCmd&) { return value(); }
};


// service_traits::MD5Sum< ::ds_ocomms_msgs::SettingsCmdRequest> should match
// service_traits::MD5Sum< ::ds_ocomms_msgs::SettingsCmd >
template<>
struct MD5Sum< ::ds_ocomms_msgs::SettingsCmdRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ds_ocomms_msgs::SettingsCmd >::value();
  }
  static const char* value(const ::ds_ocomms_msgs::SettingsCmdRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ds_ocomms_msgs::SettingsCmdRequest> should match
// service_traits::DataType< ::ds_ocomms_msgs::SettingsCmd >
template<>
struct DataType< ::ds_ocomms_msgs::SettingsCmdRequest>
{
  static const char* value()
  {
    return DataType< ::ds_ocomms_msgs::SettingsCmd >::value();
  }
  static const char* value(const ::ds_ocomms_msgs::SettingsCmdRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ds_ocomms_msgs::SettingsCmdResponse> should match
// service_traits::MD5Sum< ::ds_ocomms_msgs::SettingsCmd >
template<>
struct MD5Sum< ::ds_ocomms_msgs::SettingsCmdResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ds_ocomms_msgs::SettingsCmd >::value();
  }
  static const char* value(const ::ds_ocomms_msgs::SettingsCmdResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ds_ocomms_msgs::SettingsCmdResponse> should match
// service_traits::DataType< ::ds_ocomms_msgs::SettingsCmd >
template<>
struct DataType< ::ds_ocomms_msgs::SettingsCmdResponse>
{
  static const char* value()
  {
    return DataType< ::ds_ocomms_msgs::SettingsCmd >::value();
  }
  static const char* value(const ::ds_ocomms_msgs::SettingsCmdResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DS_OCOMMS_MSGS_MESSAGE_SETTINGSCMD_H