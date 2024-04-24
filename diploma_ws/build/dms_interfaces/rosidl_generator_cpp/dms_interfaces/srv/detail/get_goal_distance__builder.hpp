// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dms_interfaces:srv/GetGoalDistance.idl
// generated code does not contain a copyright notice

#ifndef DMS_INTERFACES__SRV__DETAIL__GET_GOAL_DISTANCE__BUILDER_HPP_
#define DMS_INTERFACES__SRV__DETAIL__GET_GOAL_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dms_interfaces/srv/detail/get_goal_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dms_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetGoalDistance_Request_empty_request
{
public:
  Init_GetGoalDistance_Request_empty_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dms_interfaces::srv::GetGoalDistance_Request empty_request(::dms_interfaces::srv::GetGoalDistance_Request::_empty_request_type arg)
  {
    msg_.empty_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dms_interfaces::srv::GetGoalDistance_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dms_interfaces::srv::GetGoalDistance_Request>()
{
  return dms_interfaces::srv::builder::Init_GetGoalDistance_Request_empty_request();
}

}  // namespace dms_interfaces


namespace dms_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetGoalDistance_Response_goal_distance
{
public:
  Init_GetGoalDistance_Response_goal_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dms_interfaces::srv::GetGoalDistance_Response goal_distance(::dms_interfaces::srv::GetGoalDistance_Response::_goal_distance_type arg)
  {
    msg_.goal_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dms_interfaces::srv::GetGoalDistance_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dms_interfaces::srv::GetGoalDistance_Response>()
{
  return dms_interfaces::srv::builder::Init_GetGoalDistance_Response_goal_distance();
}

}  // namespace dms_interfaces

#endif  // DMS_INTERFACES__SRV__DETAIL__GET_GOAL_DISTANCE__BUILDER_HPP_
