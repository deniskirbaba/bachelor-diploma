// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dms_interfaces:srv/PubResCmdVel.idl
// generated code does not contain a copyright notice

#ifndef DMS_INTERFACES__SRV__DETAIL__PUB_RES_CMD_VEL__BUILDER_HPP_
#define DMS_INTERFACES__SRV__DETAIL__PUB_RES_CMD_VEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dms_interfaces/srv/detail/pub_res_cmd_vel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dms_interfaces
{

namespace srv
{

namespace builder
{

class Init_PubResCmdVel_Request_cmd_vel
{
public:
  Init_PubResCmdVel_Request_cmd_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dms_interfaces::srv::PubResCmdVel_Request cmd_vel(::dms_interfaces::srv::PubResCmdVel_Request::_cmd_vel_type arg)
  {
    msg_.cmd_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dms_interfaces::srv::PubResCmdVel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dms_interfaces::srv::PubResCmdVel_Request>()
{
  return dms_interfaces::srv::builder::Init_PubResCmdVel_Request_cmd_vel();
}

}  // namespace dms_interfaces


namespace dms_interfaces
{

namespace srv
{

namespace builder
{

class Init_PubResCmdVel_Response_success
{
public:
  Init_PubResCmdVel_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dms_interfaces::srv::PubResCmdVel_Response success(::dms_interfaces::srv::PubResCmdVel_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dms_interfaces::srv::PubResCmdVel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dms_interfaces::srv::PubResCmdVel_Response>()
{
  return dms_interfaces::srv::builder::Init_PubResCmdVel_Response_success();
}

}  // namespace dms_interfaces

#endif  // DMS_INTERFACES__SRV__DETAIL__PUB_RES_CMD_VEL__BUILDER_HPP_
