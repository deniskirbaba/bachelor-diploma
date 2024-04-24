// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dms_interfaces:srv/PubResCmdVel.idl
// generated code does not contain a copyright notice

#ifndef DMS_INTERFACES__SRV__DETAIL__PUB_RES_CMD_VEL__STRUCT_H_
#define DMS_INTERFACES__SRV__DETAIL__PUB_RES_CMD_VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd_vel'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in srv/PubResCmdVel in the package dms_interfaces.
typedef struct dms_interfaces__srv__PubResCmdVel_Request
{
  geometry_msgs__msg__Twist cmd_vel;
} dms_interfaces__srv__PubResCmdVel_Request;

// Struct for a sequence of dms_interfaces__srv__PubResCmdVel_Request.
typedef struct dms_interfaces__srv__PubResCmdVel_Request__Sequence
{
  dms_interfaces__srv__PubResCmdVel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dms_interfaces__srv__PubResCmdVel_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PubResCmdVel in the package dms_interfaces.
typedef struct dms_interfaces__srv__PubResCmdVel_Response
{
  bool success;
} dms_interfaces__srv__PubResCmdVel_Response;

// Struct for a sequence of dms_interfaces__srv__PubResCmdVel_Response.
typedef struct dms_interfaces__srv__PubResCmdVel_Response__Sequence
{
  dms_interfaces__srv__PubResCmdVel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dms_interfaces__srv__PubResCmdVel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DMS_INTERFACES__SRV__DETAIL__PUB_RES_CMD_VEL__STRUCT_H_
