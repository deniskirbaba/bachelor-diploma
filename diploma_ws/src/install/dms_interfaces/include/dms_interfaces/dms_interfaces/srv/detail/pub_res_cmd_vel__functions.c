// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dms_interfaces:srv/PubResCmdVel.idl
// generated code does not contain a copyright notice
#include "dms_interfaces/srv/detail/pub_res_cmd_vel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `cmd_vel`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
dms_interfaces__srv__PubResCmdVel_Request__init(dms_interfaces__srv__PubResCmdVel_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cmd_vel
  if (!geometry_msgs__msg__Twist__init(&msg->cmd_vel)) {
    dms_interfaces__srv__PubResCmdVel_Request__fini(msg);
    return false;
  }
  return true;
}

void
dms_interfaces__srv__PubResCmdVel_Request__fini(dms_interfaces__srv__PubResCmdVel_Request * msg)
{
  if (!msg) {
    return;
  }
  // cmd_vel
  geometry_msgs__msg__Twist__fini(&msg->cmd_vel);
}

bool
dms_interfaces__srv__PubResCmdVel_Request__are_equal(const dms_interfaces__srv__PubResCmdVel_Request * lhs, const dms_interfaces__srv__PubResCmdVel_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd_vel
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->cmd_vel), &(rhs->cmd_vel)))
  {
    return false;
  }
  return true;
}

bool
dms_interfaces__srv__PubResCmdVel_Request__copy(
  const dms_interfaces__srv__PubResCmdVel_Request * input,
  dms_interfaces__srv__PubResCmdVel_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd_vel
  if (!geometry_msgs__msg__Twist__copy(
      &(input->cmd_vel), &(output->cmd_vel)))
  {
    return false;
  }
  return true;
}

dms_interfaces__srv__PubResCmdVel_Request *
dms_interfaces__srv__PubResCmdVel_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dms_interfaces__srv__PubResCmdVel_Request * msg = (dms_interfaces__srv__PubResCmdVel_Request *)allocator.allocate(sizeof(dms_interfaces__srv__PubResCmdVel_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dms_interfaces__srv__PubResCmdVel_Request));
  bool success = dms_interfaces__srv__PubResCmdVel_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dms_interfaces__srv__PubResCmdVel_Request__destroy(dms_interfaces__srv__PubResCmdVel_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dms_interfaces__srv__PubResCmdVel_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dms_interfaces__srv__PubResCmdVel_Request__Sequence__init(dms_interfaces__srv__PubResCmdVel_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dms_interfaces__srv__PubResCmdVel_Request * data = NULL;

  if (size) {
    data = (dms_interfaces__srv__PubResCmdVel_Request *)allocator.zero_allocate(size, sizeof(dms_interfaces__srv__PubResCmdVel_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dms_interfaces__srv__PubResCmdVel_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dms_interfaces__srv__PubResCmdVel_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dms_interfaces__srv__PubResCmdVel_Request__Sequence__fini(dms_interfaces__srv__PubResCmdVel_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dms_interfaces__srv__PubResCmdVel_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dms_interfaces__srv__PubResCmdVel_Request__Sequence *
dms_interfaces__srv__PubResCmdVel_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dms_interfaces__srv__PubResCmdVel_Request__Sequence * array = (dms_interfaces__srv__PubResCmdVel_Request__Sequence *)allocator.allocate(sizeof(dms_interfaces__srv__PubResCmdVel_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dms_interfaces__srv__PubResCmdVel_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dms_interfaces__srv__PubResCmdVel_Request__Sequence__destroy(dms_interfaces__srv__PubResCmdVel_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dms_interfaces__srv__PubResCmdVel_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dms_interfaces__srv__PubResCmdVel_Request__Sequence__are_equal(const dms_interfaces__srv__PubResCmdVel_Request__Sequence * lhs, const dms_interfaces__srv__PubResCmdVel_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dms_interfaces__srv__PubResCmdVel_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dms_interfaces__srv__PubResCmdVel_Request__Sequence__copy(
  const dms_interfaces__srv__PubResCmdVel_Request__Sequence * input,
  dms_interfaces__srv__PubResCmdVel_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dms_interfaces__srv__PubResCmdVel_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dms_interfaces__srv__PubResCmdVel_Request * data =
      (dms_interfaces__srv__PubResCmdVel_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dms_interfaces__srv__PubResCmdVel_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dms_interfaces__srv__PubResCmdVel_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dms_interfaces__srv__PubResCmdVel_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dms_interfaces__srv__PubResCmdVel_Response__init(dms_interfaces__srv__PubResCmdVel_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
dms_interfaces__srv__PubResCmdVel_Response__fini(dms_interfaces__srv__PubResCmdVel_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
dms_interfaces__srv__PubResCmdVel_Response__are_equal(const dms_interfaces__srv__PubResCmdVel_Response * lhs, const dms_interfaces__srv__PubResCmdVel_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
dms_interfaces__srv__PubResCmdVel_Response__copy(
  const dms_interfaces__srv__PubResCmdVel_Response * input,
  dms_interfaces__srv__PubResCmdVel_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

dms_interfaces__srv__PubResCmdVel_Response *
dms_interfaces__srv__PubResCmdVel_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dms_interfaces__srv__PubResCmdVel_Response * msg = (dms_interfaces__srv__PubResCmdVel_Response *)allocator.allocate(sizeof(dms_interfaces__srv__PubResCmdVel_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dms_interfaces__srv__PubResCmdVel_Response));
  bool success = dms_interfaces__srv__PubResCmdVel_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dms_interfaces__srv__PubResCmdVel_Response__destroy(dms_interfaces__srv__PubResCmdVel_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dms_interfaces__srv__PubResCmdVel_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dms_interfaces__srv__PubResCmdVel_Response__Sequence__init(dms_interfaces__srv__PubResCmdVel_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dms_interfaces__srv__PubResCmdVel_Response * data = NULL;

  if (size) {
    data = (dms_interfaces__srv__PubResCmdVel_Response *)allocator.zero_allocate(size, sizeof(dms_interfaces__srv__PubResCmdVel_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dms_interfaces__srv__PubResCmdVel_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dms_interfaces__srv__PubResCmdVel_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dms_interfaces__srv__PubResCmdVel_Response__Sequence__fini(dms_interfaces__srv__PubResCmdVel_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dms_interfaces__srv__PubResCmdVel_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dms_interfaces__srv__PubResCmdVel_Response__Sequence *
dms_interfaces__srv__PubResCmdVel_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dms_interfaces__srv__PubResCmdVel_Response__Sequence * array = (dms_interfaces__srv__PubResCmdVel_Response__Sequence *)allocator.allocate(sizeof(dms_interfaces__srv__PubResCmdVel_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dms_interfaces__srv__PubResCmdVel_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dms_interfaces__srv__PubResCmdVel_Response__Sequence__destroy(dms_interfaces__srv__PubResCmdVel_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dms_interfaces__srv__PubResCmdVel_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dms_interfaces__srv__PubResCmdVel_Response__Sequence__are_equal(const dms_interfaces__srv__PubResCmdVel_Response__Sequence * lhs, const dms_interfaces__srv__PubResCmdVel_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dms_interfaces__srv__PubResCmdVel_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dms_interfaces__srv__PubResCmdVel_Response__Sequence__copy(
  const dms_interfaces__srv__PubResCmdVel_Response__Sequence * input,
  dms_interfaces__srv__PubResCmdVel_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dms_interfaces__srv__PubResCmdVel_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dms_interfaces__srv__PubResCmdVel_Response * data =
      (dms_interfaces__srv__PubResCmdVel_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dms_interfaces__srv__PubResCmdVel_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dms_interfaces__srv__PubResCmdVel_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dms_interfaces__srv__PubResCmdVel_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
