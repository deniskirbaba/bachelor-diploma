// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dms_interfaces:srv/PubResCmdVel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dms_interfaces/srv/detail/pub_res_cmd_vel__rosidl_typesupport_introspection_c.h"
#include "dms_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dms_interfaces/srv/detail/pub_res_cmd_vel__functions.h"
#include "dms_interfaces/srv/detail/pub_res_cmd_vel__struct.h"


// Include directives for member types
// Member `cmd_vel`
#include "geometry_msgs/msg/twist.h"
// Member `cmd_vel`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dms_interfaces__srv__PubResCmdVel_Request__rosidl_typesupport_introspection_c__PubResCmdVel_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dms_interfaces__srv__PubResCmdVel_Request__init(message_memory);
}

void dms_interfaces__srv__PubResCmdVel_Request__rosidl_typesupport_introspection_c__PubResCmdVel_Request_fini_function(void * message_memory)
{
  dms_interfaces__srv__PubResCmdVel_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dms_interfaces__srv__PubResCmdVel_Request__rosidl_typesupport_introspection_c__PubResCmdVel_Request_message_member_array[1] = {
  {
    "cmd_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dms_interfaces__srv__PubResCmdVel_Request, cmd_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dms_interfaces__srv__PubResCmdVel_Request__rosidl_typesupport_introspection_c__PubResCmdVel_Request_message_members = {
  "dms_interfaces__srv",  // message namespace
  "PubResCmdVel_Request",  // message name
  1,  // number of fields
  sizeof(dms_interfaces__srv__PubResCmdVel_Request),
  dms_interfaces__srv__PubResCmdVel_Request__rosidl_typesupport_introspection_c__PubResCmdVel_Request_message_member_array,  // message members
  dms_interfaces__srv__PubResCmdVel_Request__rosidl_typesupport_introspection_c__PubResCmdVel_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  dms_interfaces__srv__PubResCmdVel_Request__rosidl_typesupport_introspection_c__PubResCmdVel_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dms_interfaces__srv__PubResCmdVel_Request__rosidl_typesupport_introspection_c__PubResCmdVel_Request_message_type_support_handle = {
  0,
  &dms_interfaces__srv__PubResCmdVel_Request__rosidl_typesupport_introspection_c__PubResCmdVel_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dms_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dms_interfaces, srv, PubResCmdVel_Request)() {
  dms_interfaces__srv__PubResCmdVel_Request__rosidl_typesupport_introspection_c__PubResCmdVel_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!dms_interfaces__srv__PubResCmdVel_Request__rosidl_typesupport_introspection_c__PubResCmdVel_Request_message_type_support_handle.typesupport_identifier) {
    dms_interfaces__srv__PubResCmdVel_Request__rosidl_typesupport_introspection_c__PubResCmdVel_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dms_interfaces__srv__PubResCmdVel_Request__rosidl_typesupport_introspection_c__PubResCmdVel_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dms_interfaces/srv/detail/pub_res_cmd_vel__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dms_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dms_interfaces/srv/detail/pub_res_cmd_vel__functions.h"
// already included above
// #include "dms_interfaces/srv/detail/pub_res_cmd_vel__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void dms_interfaces__srv__PubResCmdVel_Response__rosidl_typesupport_introspection_c__PubResCmdVel_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dms_interfaces__srv__PubResCmdVel_Response__init(message_memory);
}

void dms_interfaces__srv__PubResCmdVel_Response__rosidl_typesupport_introspection_c__PubResCmdVel_Response_fini_function(void * message_memory)
{
  dms_interfaces__srv__PubResCmdVel_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dms_interfaces__srv__PubResCmdVel_Response__rosidl_typesupport_introspection_c__PubResCmdVel_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dms_interfaces__srv__PubResCmdVel_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dms_interfaces__srv__PubResCmdVel_Response__rosidl_typesupport_introspection_c__PubResCmdVel_Response_message_members = {
  "dms_interfaces__srv",  // message namespace
  "PubResCmdVel_Response",  // message name
  1,  // number of fields
  sizeof(dms_interfaces__srv__PubResCmdVel_Response),
  dms_interfaces__srv__PubResCmdVel_Response__rosidl_typesupport_introspection_c__PubResCmdVel_Response_message_member_array,  // message members
  dms_interfaces__srv__PubResCmdVel_Response__rosidl_typesupport_introspection_c__PubResCmdVel_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  dms_interfaces__srv__PubResCmdVel_Response__rosidl_typesupport_introspection_c__PubResCmdVel_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dms_interfaces__srv__PubResCmdVel_Response__rosidl_typesupport_introspection_c__PubResCmdVel_Response_message_type_support_handle = {
  0,
  &dms_interfaces__srv__PubResCmdVel_Response__rosidl_typesupport_introspection_c__PubResCmdVel_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dms_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dms_interfaces, srv, PubResCmdVel_Response)() {
  if (!dms_interfaces__srv__PubResCmdVel_Response__rosidl_typesupport_introspection_c__PubResCmdVel_Response_message_type_support_handle.typesupport_identifier) {
    dms_interfaces__srv__PubResCmdVel_Response__rosidl_typesupport_introspection_c__PubResCmdVel_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dms_interfaces__srv__PubResCmdVel_Response__rosidl_typesupport_introspection_c__PubResCmdVel_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dms_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dms_interfaces/srv/detail/pub_res_cmd_vel__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dms_interfaces__srv__detail__pub_res_cmd_vel__rosidl_typesupport_introspection_c__PubResCmdVel_service_members = {
  "dms_interfaces__srv",  // service namespace
  "PubResCmdVel",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // dms_interfaces__srv__detail__pub_res_cmd_vel__rosidl_typesupport_introspection_c__PubResCmdVel_Request_message_type_support_handle,
  NULL  // response message
  // dms_interfaces__srv__detail__pub_res_cmd_vel__rosidl_typesupport_introspection_c__PubResCmdVel_Response_message_type_support_handle
};

static rosidl_service_type_support_t dms_interfaces__srv__detail__pub_res_cmd_vel__rosidl_typesupport_introspection_c__PubResCmdVel_service_type_support_handle = {
  0,
  &dms_interfaces__srv__detail__pub_res_cmd_vel__rosidl_typesupport_introspection_c__PubResCmdVel_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dms_interfaces, srv, PubResCmdVel_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dms_interfaces, srv, PubResCmdVel_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dms_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dms_interfaces, srv, PubResCmdVel)() {
  if (!dms_interfaces__srv__detail__pub_res_cmd_vel__rosidl_typesupport_introspection_c__PubResCmdVel_service_type_support_handle.typesupport_identifier) {
    dms_interfaces__srv__detail__pub_res_cmd_vel__rosidl_typesupport_introspection_c__PubResCmdVel_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dms_interfaces__srv__detail__pub_res_cmd_vel__rosidl_typesupport_introspection_c__PubResCmdVel_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dms_interfaces, srv, PubResCmdVel_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dms_interfaces, srv, PubResCmdVel_Response)()->data;
  }

  return &dms_interfaces__srv__detail__pub_res_cmd_vel__rosidl_typesupport_introspection_c__PubResCmdVel_service_type_support_handle;
}
