// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dms_interfaces:srv/PubResCmdVel.idl
// generated code does not contain a copyright notice

#ifndef DMS_INTERFACES__SRV__DETAIL__PUB_RES_CMD_VEL__STRUCT_HPP_
#define DMS_INTERFACES__SRV__DETAIL__PUB_RES_CMD_VEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cmd_vel'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dms_interfaces__srv__PubResCmdVel_Request __attribute__((deprecated))
#else
# define DEPRECATED__dms_interfaces__srv__PubResCmdVel_Request __declspec(deprecated)
#endif

namespace dms_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PubResCmdVel_Request_
{
  using Type = PubResCmdVel_Request_<ContainerAllocator>;

  explicit PubResCmdVel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd_vel(_init)
  {
    (void)_init;
  }

  explicit PubResCmdVel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd_vel(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _cmd_vel_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _cmd_vel_type cmd_vel;

  // setters for named parameter idiom
  Type & set__cmd_vel(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->cmd_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dms_interfaces::srv::PubResCmdVel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dms_interfaces::srv::PubResCmdVel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dms_interfaces::srv::PubResCmdVel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dms_interfaces::srv::PubResCmdVel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dms_interfaces::srv::PubResCmdVel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dms_interfaces::srv::PubResCmdVel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dms_interfaces::srv::PubResCmdVel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dms_interfaces::srv::PubResCmdVel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dms_interfaces::srv::PubResCmdVel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dms_interfaces::srv::PubResCmdVel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dms_interfaces__srv__PubResCmdVel_Request
    std::shared_ptr<dms_interfaces::srv::PubResCmdVel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dms_interfaces__srv__PubResCmdVel_Request
    std::shared_ptr<dms_interfaces::srv::PubResCmdVel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PubResCmdVel_Request_ & other) const
  {
    if (this->cmd_vel != other.cmd_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const PubResCmdVel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PubResCmdVel_Request_

// alias to use template instance with default allocator
using PubResCmdVel_Request =
  dms_interfaces::srv::PubResCmdVel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dms_interfaces


#ifndef _WIN32
# define DEPRECATED__dms_interfaces__srv__PubResCmdVel_Response __attribute__((deprecated))
#else
# define DEPRECATED__dms_interfaces__srv__PubResCmdVel_Response __declspec(deprecated)
#endif

namespace dms_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PubResCmdVel_Response_
{
  using Type = PubResCmdVel_Response_<ContainerAllocator>;

  explicit PubResCmdVel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit PubResCmdVel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dms_interfaces::srv::PubResCmdVel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dms_interfaces::srv::PubResCmdVel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dms_interfaces::srv::PubResCmdVel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dms_interfaces::srv::PubResCmdVel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dms_interfaces::srv::PubResCmdVel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dms_interfaces::srv::PubResCmdVel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dms_interfaces::srv::PubResCmdVel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dms_interfaces::srv::PubResCmdVel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dms_interfaces::srv::PubResCmdVel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dms_interfaces::srv::PubResCmdVel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dms_interfaces__srv__PubResCmdVel_Response
    std::shared_ptr<dms_interfaces::srv::PubResCmdVel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dms_interfaces__srv__PubResCmdVel_Response
    std::shared_ptr<dms_interfaces::srv::PubResCmdVel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PubResCmdVel_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const PubResCmdVel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PubResCmdVel_Response_

// alias to use template instance with default allocator
using PubResCmdVel_Response =
  dms_interfaces::srv::PubResCmdVel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dms_interfaces

namespace dms_interfaces
{

namespace srv
{

struct PubResCmdVel
{
  using Request = dms_interfaces::srv::PubResCmdVel_Request;
  using Response = dms_interfaces::srv::PubResCmdVel_Response;
};

}  // namespace srv

}  // namespace dms_interfaces

#endif  // DMS_INTERFACES__SRV__DETAIL__PUB_RES_CMD_VEL__STRUCT_HPP_
