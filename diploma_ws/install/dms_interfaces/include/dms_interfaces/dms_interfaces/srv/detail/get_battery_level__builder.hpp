// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dms_interfaces:srv/GetBatteryLevel.idl
// generated code does not contain a copyright notice

#ifndef DMS_INTERFACES__SRV__DETAIL__GET_BATTERY_LEVEL__BUILDER_HPP_
#define DMS_INTERFACES__SRV__DETAIL__GET_BATTERY_LEVEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dms_interfaces/srv/detail/get_battery_level__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dms_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetBatteryLevel_Request_empty_request
{
public:
  Init_GetBatteryLevel_Request_empty_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dms_interfaces::srv::GetBatteryLevel_Request empty_request(::dms_interfaces::srv::GetBatteryLevel_Request::_empty_request_type arg)
  {
    msg_.empty_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dms_interfaces::srv::GetBatteryLevel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dms_interfaces::srv::GetBatteryLevel_Request>()
{
  return dms_interfaces::srv::builder::Init_GetBatteryLevel_Request_empty_request();
}

}  // namespace dms_interfaces


namespace dms_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetBatteryLevel_Response_drive_consumption
{
public:
  explicit Init_GetBatteryLevel_Response_drive_consumption(::dms_interfaces::srv::GetBatteryLevel_Response & msg)
  : msg_(msg)
  {}
  ::dms_interfaces::srv::GetBatteryLevel_Response drive_consumption(::dms_interfaces::srv::GetBatteryLevel_Response::_drive_consumption_type arg)
  {
    msg_.drive_consumption = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dms_interfaces::srv::GetBatteryLevel_Response msg_;
};

class Init_GetBatteryLevel_Response_idle_consumption
{
public:
  explicit Init_GetBatteryLevel_Response_idle_consumption(::dms_interfaces::srv::GetBatteryLevel_Response & msg)
  : msg_(msg)
  {}
  Init_GetBatteryLevel_Response_drive_consumption idle_consumption(::dms_interfaces::srv::GetBatteryLevel_Response::_idle_consumption_type arg)
  {
    msg_.idle_consumption = std::move(arg);
    return Init_GetBatteryLevel_Response_drive_consumption(msg_);
  }

private:
  ::dms_interfaces::srv::GetBatteryLevel_Response msg_;
};

class Init_GetBatteryLevel_Response_battery_level
{
public:
  Init_GetBatteryLevel_Response_battery_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBatteryLevel_Response_idle_consumption battery_level(::dms_interfaces::srv::GetBatteryLevel_Response::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return Init_GetBatteryLevel_Response_idle_consumption(msg_);
  }

private:
  ::dms_interfaces::srv::GetBatteryLevel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dms_interfaces::srv::GetBatteryLevel_Response>()
{
  return dms_interfaces::srv::builder::Init_GetBatteryLevel_Response_battery_level();
}

}  // namespace dms_interfaces

#endif  // DMS_INTERFACES__SRV__DETAIL__GET_BATTERY_LEVEL__BUILDER_HPP_
