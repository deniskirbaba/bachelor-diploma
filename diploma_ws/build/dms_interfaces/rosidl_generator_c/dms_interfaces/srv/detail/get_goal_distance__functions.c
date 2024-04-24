// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dms_interfaces:srv/GetGoalDistance.idl
// generated code does not contain a copyright notice
#include "dms_interfaces/srv/detail/get_goal_distance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `empty_request`
#include "std_msgs/msg/detail/empty__functions.h"

bool
dms_interfaces__srv__GetGoalDistance_Request__init(dms_interfaces__srv__GetGoalDistance_Request * msg)
{
  if (!msg) {
    return false;
  }
  // empty_request
  if (!std_msgs__msg__Empty__init(&msg->empty_request)) {
    dms_interfaces__srv__GetGoalDistance_Request__fini(msg);
    return false;
  }
  return true;
}

void
dms_interfaces__srv__GetGoalDistance_Request__fini(dms_interfaces__srv__GetGoalDistance_Request * msg)
{
  if (!msg) {
    return;
  }
  // empty_request
  std_msgs__msg__Empty__fini(&msg->empty_request);
}

bool
dms_interfaces__srv__GetGoalDistance_Request__are_equal(const dms_interfaces__srv__GetGoalDistance_Request * lhs, const dms_interfaces__srv__GetGoalDistance_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // empty_request
  if (!std_msgs__msg__Empty__are_equal(
      &(lhs->empty_request), &(rhs->empty_request)))
  {
    return false;
  }
  return true;
}

bool
dms_interfaces__srv__GetGoalDistance_Request__copy(
  const dms_interfaces__srv__GetGoalDistance_Request * input,
  dms_interfaces__srv__GetGoalDistance_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // empty_request
  if (!std_msgs__msg__Empty__copy(
      &(input->empty_request), &(output->empty_request)))
  {
    return false;
  }
  return true;
}

dms_interfaces__srv__GetGoalDistance_Request *
dms_interfaces__srv__GetGoalDistance_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dms_interfaces__srv__GetGoalDistance_Request * msg = (dms_interfaces__srv__GetGoalDistance_Request *)allocator.allocate(sizeof(dms_interfaces__srv__GetGoalDistance_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dms_interfaces__srv__GetGoalDistance_Request));
  bool success = dms_interfaces__srv__GetGoalDistance_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dms_interfaces__srv__GetGoalDistance_Request__destroy(dms_interfaces__srv__GetGoalDistance_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dms_interfaces__srv__GetGoalDistance_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dms_interfaces__srv__GetGoalDistance_Request__Sequence__init(dms_interfaces__srv__GetGoalDistance_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dms_interfaces__srv__GetGoalDistance_Request * data = NULL;

  if (size) {
    data = (dms_interfaces__srv__GetGoalDistance_Request *)allocator.zero_allocate(size, sizeof(dms_interfaces__srv__GetGoalDistance_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dms_interfaces__srv__GetGoalDistance_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dms_interfaces__srv__GetGoalDistance_Request__fini(&data[i - 1]);
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
dms_interfaces__srv__GetGoalDistance_Request__Sequence__fini(dms_interfaces__srv__GetGoalDistance_Request__Sequence * array)
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
      dms_interfaces__srv__GetGoalDistance_Request__fini(&array->data[i]);
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

dms_interfaces__srv__GetGoalDistance_Request__Sequence *
dms_interfaces__srv__GetGoalDistance_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dms_interfaces__srv__GetGoalDistance_Request__Sequence * array = (dms_interfaces__srv__GetGoalDistance_Request__Sequence *)allocator.allocate(sizeof(dms_interfaces__srv__GetGoalDistance_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dms_interfaces__srv__GetGoalDistance_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dms_interfaces__srv__GetGoalDistance_Request__Sequence__destroy(dms_interfaces__srv__GetGoalDistance_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dms_interfaces__srv__GetGoalDistance_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dms_interfaces__srv__GetGoalDistance_Request__Sequence__are_equal(const dms_interfaces__srv__GetGoalDistance_Request__Sequence * lhs, const dms_interfaces__srv__GetGoalDistance_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dms_interfaces__srv__GetGoalDistance_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dms_interfaces__srv__GetGoalDistance_Request__Sequence__copy(
  const dms_interfaces__srv__GetGoalDistance_Request__Sequence * input,
  dms_interfaces__srv__GetGoalDistance_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dms_interfaces__srv__GetGoalDistance_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dms_interfaces__srv__GetGoalDistance_Request * data =
      (dms_interfaces__srv__GetGoalDistance_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dms_interfaces__srv__GetGoalDistance_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dms_interfaces__srv__GetGoalDistance_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dms_interfaces__srv__GetGoalDistance_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dms_interfaces__srv__GetGoalDistance_Response__init(dms_interfaces__srv__GetGoalDistance_Response * msg)
{
  if (!msg) {
    return false;
  }
  // goal_distance
  return true;
}

void
dms_interfaces__srv__GetGoalDistance_Response__fini(dms_interfaces__srv__GetGoalDistance_Response * msg)
{
  if (!msg) {
    return;
  }
  // goal_distance
}

bool
dms_interfaces__srv__GetGoalDistance_Response__are_equal(const dms_interfaces__srv__GetGoalDistance_Response * lhs, const dms_interfaces__srv__GetGoalDistance_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_distance
  if (lhs->goal_distance != rhs->goal_distance) {
    return false;
  }
  return true;
}

bool
dms_interfaces__srv__GetGoalDistance_Response__copy(
  const dms_interfaces__srv__GetGoalDistance_Response * input,
  dms_interfaces__srv__GetGoalDistance_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_distance
  output->goal_distance = input->goal_distance;
  return true;
}

dms_interfaces__srv__GetGoalDistance_Response *
dms_interfaces__srv__GetGoalDistance_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dms_interfaces__srv__GetGoalDistance_Response * msg = (dms_interfaces__srv__GetGoalDistance_Response *)allocator.allocate(sizeof(dms_interfaces__srv__GetGoalDistance_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dms_interfaces__srv__GetGoalDistance_Response));
  bool success = dms_interfaces__srv__GetGoalDistance_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dms_interfaces__srv__GetGoalDistance_Response__destroy(dms_interfaces__srv__GetGoalDistance_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dms_interfaces__srv__GetGoalDistance_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dms_interfaces__srv__GetGoalDistance_Response__Sequence__init(dms_interfaces__srv__GetGoalDistance_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dms_interfaces__srv__GetGoalDistance_Response * data = NULL;

  if (size) {
    data = (dms_interfaces__srv__GetGoalDistance_Response *)allocator.zero_allocate(size, sizeof(dms_interfaces__srv__GetGoalDistance_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dms_interfaces__srv__GetGoalDistance_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dms_interfaces__srv__GetGoalDistance_Response__fini(&data[i - 1]);
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
dms_interfaces__srv__GetGoalDistance_Response__Sequence__fini(dms_interfaces__srv__GetGoalDistance_Response__Sequence * array)
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
      dms_interfaces__srv__GetGoalDistance_Response__fini(&array->data[i]);
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

dms_interfaces__srv__GetGoalDistance_Response__Sequence *
dms_interfaces__srv__GetGoalDistance_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dms_interfaces__srv__GetGoalDistance_Response__Sequence * array = (dms_interfaces__srv__GetGoalDistance_Response__Sequence *)allocator.allocate(sizeof(dms_interfaces__srv__GetGoalDistance_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dms_interfaces__srv__GetGoalDistance_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dms_interfaces__srv__GetGoalDistance_Response__Sequence__destroy(dms_interfaces__srv__GetGoalDistance_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dms_interfaces__srv__GetGoalDistance_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dms_interfaces__srv__GetGoalDistance_Response__Sequence__are_equal(const dms_interfaces__srv__GetGoalDistance_Response__Sequence * lhs, const dms_interfaces__srv__GetGoalDistance_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dms_interfaces__srv__GetGoalDistance_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dms_interfaces__srv__GetGoalDistance_Response__Sequence__copy(
  const dms_interfaces__srv__GetGoalDistance_Response__Sequence * input,
  dms_interfaces__srv__GetGoalDistance_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dms_interfaces__srv__GetGoalDistance_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dms_interfaces__srv__GetGoalDistance_Response * data =
      (dms_interfaces__srv__GetGoalDistance_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dms_interfaces__srv__GetGoalDistance_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dms_interfaces__srv__GetGoalDistance_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dms_interfaces__srv__GetGoalDistance_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
