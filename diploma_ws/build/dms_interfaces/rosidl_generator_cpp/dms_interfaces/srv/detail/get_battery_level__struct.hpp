// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dms_interfaces:srv/GetBatteryLevel.idl
// generated code does not contain a copyright notice

#ifndef DMS_INTERFACES__SRV__DETAIL__GET_BATTERY_LEVEL__STRUCT_HPP_
#define DMS_INTERFACES__SRV__DETAIL__GET_BATTERY_LEVEL__STRUCT_HPP_

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
# define DEPRECATED__dms_interfaces__srv__GetBatteryLevel_Request __attribute__((deprecated))
#else
# define DEPRECATED__dms_interfaces__srv__GetBatteryLevel_Request __declspec(deprecated)
#endif

namespace dms_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBatteryLevel_Request_
{
  using Type = GetBatteryLevel_Request_<ContainerAllocator>;

  explicit GetBatteryLevel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : empty_request(_init)
  {
    (void)_init;
  }

  explicit GetBatteryLevel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dms_interfaces::srv::GetBatteryLevel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dms_interfaces::srv::GetBatteryLevel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dms_interfaces::srv::GetBatteryLevel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dms_interfaces::srv::GetBatteryLevel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dms_interfaces::srv::GetBatteryLevel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dms_interfaces::srv::GetBatteryLevel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dms_interfaces::srv::GetBatteryLevel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dms_interfaces::srv::GetBatteryLevel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dms_interfaces::srv::GetBatteryLevel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dms_interfaces::srv::GetBatteryLevel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dms_interfaces__srv__GetBatteryLevel_Request
    std::shared_ptr<dms_interfaces::srv::GetBatteryLevel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dms_interfaces__srv__GetBatteryLevel_Request
    std::shared_ptr<dms_interfaces::srv::GetBatteryLevel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBatteryLevel_Request_ & other) const
  {
    if (this->empty_request != other.empty_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBatteryLevel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBatteryLevel_Request_

// alias to use template instance with default allocator
using GetBatteryLevel_Request =
  dms_interfaces::srv::GetBatteryLevel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dms_interfaces


#ifndef _WIN32
# define DEPRECATED__dms_interfaces__srv__GetBatteryLevel_Response __attribute__((deprecated))
#else
# define DEPRECATED__dms_interfaces__srv__GetBatteryLevel_Response __declspec(deprecated)
#endif

namespace dms_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBatteryLevel_Response_
{
  using Type = GetBatteryLevel_Response_<ContainerAllocator>;

  explicit GetBatteryLevel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_level = 0.0;
      this->idle_consumption = 0.0;
      this->drive_consumption = 0.0;
    }
  }

  explicit GetBatteryLevel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_level = 0.0;
      this->idle_consumption = 0.0;
      this->drive_consumption = 0.0;
    }
  }

  // field types and members
  using _battery_level_type =
    double;
  _battery_level_type battery_level;
  using _idle_consumption_type =
    double;
  _idle_consumption_type idle_consumption;
  using _drive_consumption_type =
    double;
  _drive_consumption_type drive_consumption;

  // setters for named parameter idiom
  Type & set__battery_level(
    const double & _arg)
  {
    this->battery_level = _arg;
    return *this;
  }
  Type & set__idle_consumption(
    const double & _arg)
  {
    this->idle_consumption = _arg;
    return *this;
  }
  Type & set__drive_consumption(
    const double & _arg)
  {
    this->drive_consumption = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dms_interfaces::srv::GetBatteryLevel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dms_interfaces::srv::GetBatteryLevel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dms_interfaces::srv::GetBatteryLevel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dms_interfaces::srv::GetBatteryLevel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dms_interfaces::srv::GetBatteryLevel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dms_interfaces::srv::GetBatteryLevel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dms_interfaces::srv::GetBatteryLevel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dms_interfaces::srv::GetBatteryLevel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dms_interfaces::srv::GetBatteryLevel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dms_interfaces::srv::GetBatteryLevel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dms_interfaces__srv__GetBatteryLevel_Response
    std::shared_ptr<dms_interfaces::srv::GetBatteryLevel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dms_interfaces__srv__GetBatteryLevel_Response
    std::shared_ptr<dms_interfaces::srv::GetBatteryLevel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBatteryLevel_Response_ & other) const
  {
    if (this->battery_level != other.battery_level) {
      return false;
    }
    if (this->idle_consumption != other.idle_consumption) {
      return false;
    }
    if (this->drive_consumption != other.drive_consumption) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBatteryLevel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBatteryLevel_Response_

// alias to use template instance with default allocator
using GetBatteryLevel_Response =
  dms_interfaces::srv::GetBatteryLevel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dms_interfaces

namespace dms_interfaces
{

namespace srv
{

struct GetBatteryLevel
{
  using Request = dms_interfaces::srv::GetBatteryLevel_Request;
  using Response = dms_interfaces::srv::GetBatteryLevel_Response;
};

}  // namespace srv

}  // namespace dms_interfaces

#endif  // DMS_INTERFACES__SRV__DETAIL__GET_BATTERY_LEVEL__STRUCT_HPP_
