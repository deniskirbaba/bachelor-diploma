// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dms_interfaces:srv/GetGoalDistance.idl
// generated code does not contain a copyright notice

#ifndef DMS_INTERFACES__SRV__DETAIL__GET_GOAL_DISTANCE__STRUCT_HPP_
#define DMS_INTERFACES__SRV__DETAIL__GET_GOAL_DISTANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'empty_request'
#include "std_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dms_interfaces__srv__GetGoalDistance_Request __attribute__((deprecated))
#else
# define DEPRECATED__dms_interfaces__srv__GetGoalDistance_Request __declspec(deprecated)
#endif

namespace dms_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetGoalDistance_Request_
{
  using Type = GetGoalDistance_Request_<ContainerAllocator>;

  explicit GetGoalDistance_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : empty_request(_init)
  {
    (void)_init;
  }

  explicit GetGoalDistance_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : empty_request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _empty_request_type =
    std_msgs::msg::Empty_<ContainerAllocator>;
  _empty_request_type empty_request;

  // setters for named parameter idiom
  Type & set__empty_request(
    const std_msgs::msg::Empty_<ContainerAllocator> & _arg)
  {
    this->empty_request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dms_interfaces::srv::GetGoalDistance_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dms_interfaces::srv::GetGoalDistance_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dms_interfaces::srv::GetGoalDistance_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dms_interfaces::srv::GetGoalDistance_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dms_interfaces::srv::GetGoalDistance_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dms_interfaces::srv::GetGoalDistance_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dms_interfaces::srv::GetGoalDistance_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dms_interfaces::srv::GetGoalDistance_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dms_interfaces::srv::GetGoalDistance_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dms_interfaces::srv::GetGoalDistance_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dms_interfaces__srv__GetGoalDistance_Request
    std::shared_ptr<dms_interfaces::srv::GetGoalDistance_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dms_interfaces__srv__GetGoalDistance_Request
    std::shared_ptr<dms_interfaces::srv::GetGoalDistance_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetGoalDistance_Request_ & other) const
  {
    if (this->empty_request != other.empty_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetGoalDistance_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetGoalDistance_Request_

// alias to use template instance with default allocator
using GetGoalDistance_Request =
  dms_interfaces::srv::GetGoalDistance_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dms_interfaces


#ifndef _WIN32
# define DEPRECATED__dms_interfaces__srv__GetGoalDistance_Response __attribute__((deprecated))
#else
# define DEPRECATED__dms_interfaces__srv__GetGoalDistance_Response __declspec(deprecated)
#endif

namespace dms_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetGoalDistance_Response_
{
  using Type = GetGoalDistance_Response_<ContainerAllocator>;

  explicit GetGoalDistance_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_distance = 0.0;
    }
  }

  explicit GetGoalDistance_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_distance = 0.0;
    }
  }

  // field types and members
  using _goal_distance_type =
    double;
  _goal_distance_type goal_distance;

  // setters for named parameter idiom
  Type & set__goal_distance(
    const double & _arg)
  {
    this->goal_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dms_interfaces::srv::GetGoalDistance_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dms_interfaces::srv::GetGoalDistance_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dms_interfaces::srv::GetGoalDistance_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dms_interfaces::srv::GetGoalDistance_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dms_interfaces::srv::GetGoalDistance_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dms_interfaces::srv::GetGoalDistance_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dms_interfaces::srv::GetGoalDistance_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dms_interfaces::srv::GetGoalDistance_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dms_interfaces::srv::GetGoalDistance_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dms_interfaces::srv::GetGoalDistance_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dms_interfaces__srv__GetGoalDistance_Response
    std::shared_ptr<dms_interfaces::srv::GetGoalDistance_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dms_interfaces__srv__GetGoalDistance_Response
    std::shared_ptr<dms_interfaces::srv::GetGoalDistance_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetGoalDistance_Response_ & other) const
  {
    if (this->goal_distance != other.goal_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetGoalDistance_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetGoalDistance_Response_

// alias to use template instance with default allocator
using GetGoalDistance_Response =
  dms_interfaces::srv::GetGoalDistance_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dms_interfaces

namespace dms_interfaces
{

namespace srv
{

struct GetGoalDistance
{
  using Request = dms_interfaces::srv::GetGoalDistance_Request;
  using Response = dms_interfaces::srv::GetGoalDistance_Response;
};

}  // namespace srv

}  // namespace dms_interfaces

#endif  // DMS_INTERFACES__SRV__DETAIL__GET_GOAL_DISTANCE__STRUCT_HPP_
