// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dms_interfaces:srv/GetBatteryLevel.idl
// generated code does not contain a copyright notice

#ifndef DMS_INTERFACES__SRV__DETAIL__GET_BATTERY_LEVEL__STRUCT_H_
#define DMS_INTERFACES__SRV__DETAIL__GET_BATTERY_LEVEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'empty_request'
#include "std_msgs/msg/detail/empty__struct.h"

/// Struct defined in srv/GetBatteryLevel in the package dms_interfaces.
typedef struct dms_interfaces__srv__GetBatteryLevel_Request
{
  std_msgs__msg__Empty empty_request;
} dms_interfaces__srv__GetBatteryLevel_Request;

// Struct for a sequence of dms_interfaces__srv__GetBatteryLevel_Request.
typedef struct dms_interfaces__srv__GetBatteryLevel_Request__Sequence
{
  dms_interfaces__srv__GetBatteryLevel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dms_interfaces__srv__GetBatteryLevel_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetBatteryLevel in the package dms_interfaces.
typedef struct dms_interfaces__srv__GetBatteryLevel_Response
{
  double battery_level;
  double idle_consumption;
  double drive_consumption;
} dms_interfaces__srv__GetBatteryLevel_Response;

// Struct for a sequence of dms_interfaces__srv__GetBatteryLevel_Response.
typedef struct dms_interfaces__srv__GetBatteryLevel_Response__Sequence
{
  dms_interfaces__srv__GetBatteryLevel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dms_interfaces__srv__GetBatteryLevel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DMS_INTERFACES__SRV__DETAIL__GET_BATTERY_LEVEL__STRUCT_H_
