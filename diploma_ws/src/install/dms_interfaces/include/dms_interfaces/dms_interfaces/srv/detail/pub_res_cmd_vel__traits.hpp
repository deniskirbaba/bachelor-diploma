// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dms_interfaces:srv/PubResCmdVel.idl
// generated code does not contain a copyright notice

#ifndef DMS_INTERFACES__SRV__DETAIL__PUB_RES_CMD_VEL__TRAITS_HPP_
#define DMS_INTERFACES__SRV__DETAIL__PUB_RES_CMD_VEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dms_interfaces/srv/detail/pub_res_cmd_vel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cmd_vel'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace dms_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PubResCmdVel_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd_vel
  {
    out << "cmd_vel: ";
    to_flow_style_yaml(msg.cmd_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PubResCmdVel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_vel:\n";
    to_block_style_yaml(msg.cmd_vel, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PubResCmdVel_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dms_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dms_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dms_interfaces::srv::PubResCmdVel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dms_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dms_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dms_interfaces::srv::PubResCmdVel_Request & msg)
{
  return dms_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dms_interfaces::srv::PubResCmdVel_Request>()
{
  return "dms_interfaces::srv::PubResCmdVel_Request";
}

template<>
inline const char * name<dms_interfaces::srv::PubResCmdVel_Request>()
{
  return "dms_interfaces/srv/PubResCmdVel_Request";
}

template<>
struct has_fixed_size<dms_interfaces::srv::PubResCmdVel_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<dms_interfaces::srv::PubResCmdVel_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<dms_interfaces::srv::PubResCmdVel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dms_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PubResCmdVel_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PubResCmdVel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PubResCmdVel_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dms_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dms_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dms_interfaces::srv::PubResCmdVel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dms_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dms_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dms_interfaces::srv::PubResCmdVel_Response & msg)
{
  return dms_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dms_interfaces::srv::PubResCmdVel_Response>()
{
  return "dms_interfaces::srv::PubResCmdVel_Response";
}

template<>
inline const char * name<dms_interfaces::srv::PubResCmdVel_Response>()
{
  return "dms_interfaces/srv/PubResCmdVel_Response";
}

template<>
struct has_fixed_size<dms_interfaces::srv::PubResCmdVel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dms_interfaces::srv::PubResCmdVel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dms_interfaces::srv::PubResCmdVel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dms_interfaces::srv::PubResCmdVel>()
{
  return "dms_interfaces::srv::PubResCmdVel";
}

template<>
inline const char * name<dms_interfaces::srv::PubResCmdVel>()
{
  return "dms_interfaces/srv/PubResCmdVel";
}

template<>
struct has_fixed_size<dms_interfaces::srv::PubResCmdVel>
  : std::integral_constant<
    bool,
    has_fixed_size<dms_interfaces::srv::PubResCmdVel_Request>::value &&
    has_fixed_size<dms_interfaces::srv::PubResCmdVel_Response>::value
  >
{
};

template<>
struct has_bounded_size<dms_interfaces::srv::PubResCmdVel>
  : std::integral_constant<
    bool,
    has_bounded_size<dms_interfaces::srv::PubResCmdVel_Request>::value &&
    has_bounded_size<dms_interfaces::srv::PubResCmdVel_Response>::value
  >
{
};

template<>
struct is_service<dms_interfaces::srv::PubResCmdVel>
  : std::true_type
{
};

template<>
struct is_service_request<dms_interfaces::srv::PubResCmdVel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dms_interfaces::srv::PubResCmdVel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DMS_INTERFACES__SRV__DETAIL__PUB_RES_CMD_VEL__TRAITS_HPP_
