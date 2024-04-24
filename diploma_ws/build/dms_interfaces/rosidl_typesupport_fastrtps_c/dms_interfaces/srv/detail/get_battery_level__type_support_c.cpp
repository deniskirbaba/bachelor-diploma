// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dms_interfaces:srv/GetBatteryLevel.idl
// generated code does not contain a copyright notice
#include "dms_interfaces/srv/detail/get_battery_level__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dms_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dms_interfaces/srv/detail/get_battery_level__struct.h"
#include "dms_interfaces/srv/detail/get_battery_level__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/empty__functions.h"  // empty_request

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dms_interfaces
size_t get_serialized_size_std_msgs__msg__Empty(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dms_interfaces
size_t max_serialized_size_std_msgs__msg__Empty(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dms_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Empty)();


using _GetBatteryLevel_Request__ros_msg_type = dms_interfaces__srv__GetBatteryLevel_Request;

static bool _GetBatteryLevel_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetBatteryLevel_Request__ros_msg_type * ros_message = static_cast<const _GetBatteryLevel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: empty_request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Empty
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->empty_request, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetBatteryLevel_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetBatteryLevel_Request__ros_msg_type * ros_message = static_cast<_GetBatteryLevel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: empty_request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Empty
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->empty_request))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dms_interfaces
size_t get_serialized_size_dms_interfaces__srv__GetBatteryLevel_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetBatteryLevel_Request__ros_msg_type * ros_message = static_cast<const _GetBatteryLevel_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name empty_request

  current_alignment += get_serialized_size_std_msgs__msg__Empty(
    &(ros_message->empty_request), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetBatteryLevel_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dms_interfaces__srv__GetBatteryLevel_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dms_interfaces
size_t max_serialized_size_dms_interfaces__srv__GetBatteryLevel_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: empty_request
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Empty(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dms_interfaces__srv__GetBatteryLevel_Request;
    is_plain =
      (
      offsetof(DataType, empty_request) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetBatteryLevel_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dms_interfaces__srv__GetBatteryLevel_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetBatteryLevel_Request = {
  "dms_interfaces::srv",
  "GetBatteryLevel_Request",
  _GetBatteryLevel_Request__cdr_serialize,
  _GetBatteryLevel_Request__cdr_deserialize,
  _GetBatteryLevel_Request__get_serialized_size,
  _GetBatteryLevel_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetBatteryLevel_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetBatteryLevel_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dms_interfaces, srv, GetBatteryLevel_Request)() {
  return &_GetBatteryLevel_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dms_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dms_interfaces/srv/detail/get_battery_level__struct.h"
// already included above
// #include "dms_interfaces/srv/detail/get_battery_level__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetBatteryLevel_Response__ros_msg_type = dms_interfaces__srv__GetBatteryLevel_Response;

static bool _GetBatteryLevel_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetBatteryLevel_Response__ros_msg_type * ros_message = static_cast<const _GetBatteryLevel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: battery_level
  {
    cdr << ros_message->battery_level;
  }

  // Field name: idle_consumption
  {
    cdr << ros_message->idle_consumption;
  }

  // Field name: drive_consumption
  {
    cdr << ros_message->drive_consumption;
  }

  return true;
}

static bool _GetBatteryLevel_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetBatteryLevel_Response__ros_msg_type * ros_message = static_cast<_GetBatteryLevel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: battery_level
  {
    cdr >> ros_message->battery_level;
  }

  // Field name: idle_consumption
  {
    cdr >> ros_message->idle_consumption;
  }

  // Field name: drive_consumption
  {
    cdr >> ros_message->drive_consumption;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dms_interfaces
size_t get_serialized_size_dms_interfaces__srv__GetBatteryLevel_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetBatteryLevel_Response__ros_msg_type * ros_message = static_cast<const _GetBatteryLevel_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name battery_level
  {
    size_t item_size = sizeof(ros_message->battery_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name idle_consumption
  {
    size_t item_size = sizeof(ros_message->idle_consumption);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drive_consumption
  {
    size_t item_size = sizeof(ros_message->drive_consumption);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetBatteryLevel_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dms_interfaces__srv__GetBatteryLevel_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dms_interfaces
size_t max_serialized_size_dms_interfaces__srv__GetBatteryLevel_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: battery_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: idle_consumption
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: drive_consumption
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dms_interfaces__srv__GetBatteryLevel_Response;
    is_plain =
      (
      offsetof(DataType, drive_consumption) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetBatteryLevel_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dms_interfaces__srv__GetBatteryLevel_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetBatteryLevel_Response = {
  "dms_interfaces::srv",
  "GetBatteryLevel_Response",
  _GetBatteryLevel_Response__cdr_serialize,
  _GetBatteryLevel_Response__cdr_deserialize,
  _GetBatteryLevel_Response__get_serialized_size,
  _GetBatteryLevel_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetBatteryLevel_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetBatteryLevel_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dms_interfaces, srv, GetBatteryLevel_Response)() {
  return &_GetBatteryLevel_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dms_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dms_interfaces/srv/get_battery_level.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetBatteryLevel__callbacks = {
  "dms_interfaces::srv",
  "GetBatteryLevel",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dms_interfaces, srv, GetBatteryLevel_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dms_interfaces, srv, GetBatteryLevel_Response)(),
};

static rosidl_service_type_support_t GetBatteryLevel__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetBatteryLevel__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dms_interfaces, srv, GetBatteryLevel)() {
  return &GetBatteryLevel__handle;
}

#if defined(__cplusplus)
}
#endif
