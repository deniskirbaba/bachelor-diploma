// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dms_interfaces:srv/GetBatteryLevel.idl
// generated code does not contain a copyright notice

#ifndef DMS_INTERFACES__SRV__DETAIL__GET_BATTERY_LEVEL__TRAITS_HPP_
#define DMS_INTERFACES__SRV__DETAIL__GET_BATTERY_LEVEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dms_interfaces/srv/detail/get_battery_level__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'empty_request'
#include "std_msgs/msg/detail/empty__traits.hpp"

namespace dms_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBatteryLevel_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: empty_request
  {
    out << "empty_request: ";
    to_flow_style_yaml(msg.empty_request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBatteryLevel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: empty_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "empty_request:\n";
    to_block_style_yaml(msg.empty_request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBatteryLevel_Request & msg, bool use_flow_style = false)
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
  const dms_interfaces::srv::GetBatteryLevel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dms_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dms_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dms_interfaces::srv::GetBatteryLevel_Request & msg)
{
  return dms_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dms_interfaces::srv::GetBatteryLevel_Request>()
{
  return "dms_interfaces::srv::GetBatteryLevel_Request";
}

template<>
inline const char * name<dms_interfaces::srv::GetBatteryLevel_Request>()
{
  return "dms_interfaces/srv/GetBatteryLevel_Request";
}

template<>
struct has_fixed_size<dms_interfaces::srv::GetBatteryLevel_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<dms_interfaces::srv::GetBatteryLevel_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

template<>
struct is_message<dms_interfaces::srv::GetBatteryLevel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dms_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBatteryLevel_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: battery_level
  {
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << ", ";
  }

  // member: idle_consumption
  {
    out << "idle_consumption: ";
    rosidl_generator_traits::value_to_yaml(msg.idle_consumption, out);
    out << ", ";
  }

  // member: drive_consumption
  {
    out << "drive_consumption: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_consumption, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBatteryLevel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << "\n";
  }

  // member: idle_consumption
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idle_consumption: ";
    rosidl_generator_traits::value_to_yaml(msg.idle_consumption, out);
    out << "\n";
  }

  // member: drive_consumption
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drive_consumption: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_consumption, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBatteryLevel_Response & msg, bool use_flow_style = false)
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
  const dms_interfaces::srv::GetBatteryLevel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dms_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dms_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dms_interfaces::srv::GetBatteryLevel_Response & msg)
{
  return dms_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dms_interfaces::srv::GetBatteryLevel_Response>()
{
  return "dms_interfaces::srv::GetBatteryLevel_Response";
}

template<>
inline const char * name<dms_interfaces::srv::GetBatteryLevel_Response>()
{
  return "dms_interfaces/srv/GetBatteryLevel_Response";
}

template<>
struct has_fixed_size<dms_interfaces::srv::GetBatteryLevel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dms_interfaces::srv::GetBatteryLevel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dms_interfaces::srv::GetBatteryLevel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dms_interfaces::srv::GetBatteryLevel>()
{
  return "dms_interfaces::srv::GetBatteryLevel";
}

template<>
inline const char * name<dms_interfaces::srv::GetBatteryLevel>()
{
  return "dms_interfaces/srv/GetBatteryLevel";
}

template<>
struct has_fixed_size<dms_interfaces::srv::GetBatteryLevel>
  : std::integral_constant<
    bool,
    has_fixed_size<dms_interfaces::srv::GetBatteryLevel_Request>::value &&
    has_fixed_size<dms_interfaces::srv::GetBatteryLevel_Response>::value
  >
{
};

template<>
struct has_bounded_size<dms_interfaces::srv::GetBatteryLevel>
  : std::integral_constant<
    bool,
    has_bounded_size<dms_interfaces::srv::GetBatteryLevel_Request>::value &&
    has_bounded_size<dms_interfaces::srv::GetBatteryLevel_Response>::value
  >
{
};

template<>
struct is_service<dms_interfaces::srv::GetBatteryLevel>
  : std::true_type
{
};

template<>
struct is_service_request<dms_interfaces::srv::GetBatteryLevel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dms_interfaces::srv::GetBatteryLevel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DMS_INTERFACES__SRV__DETAIL__GET_BATTERY_LEVEL__TRAITS_HPP_
