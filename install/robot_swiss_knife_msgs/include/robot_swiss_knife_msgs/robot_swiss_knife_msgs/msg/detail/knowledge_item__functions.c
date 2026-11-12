// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_swiss_knife_msgs:msg/KnowledgeItem.idl
// generated code does not contain a copyright notice
#include "robot_swiss_knife_msgs/msg/detail/knowledge_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_swiss_knife_msgs__msg__KnowledgeItem__init(robot_swiss_knife_msgs__msg__KnowledgeItem * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    robot_swiss_knife_msgs__msg__KnowledgeItem__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__init(&msg->value)) {
    robot_swiss_knife_msgs__msg__KnowledgeItem__fini(msg);
    return false;
  }
  return true;
}

void
robot_swiss_knife_msgs__msg__KnowledgeItem__fini(robot_swiss_knife_msgs__msg__KnowledgeItem * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // value
  rosidl_runtime_c__String__fini(&msg->value);
}

bool
robot_swiss_knife_msgs__msg__KnowledgeItem__are_equal(const robot_swiss_knife_msgs__msg__KnowledgeItem * lhs, const robot_swiss_knife_msgs__msg__KnowledgeItem * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
robot_swiss_knife_msgs__msg__KnowledgeItem__copy(
  const robot_swiss_knife_msgs__msg__KnowledgeItem * input,
  robot_swiss_knife_msgs__msg__KnowledgeItem * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

robot_swiss_knife_msgs__msg__KnowledgeItem *
robot_swiss_knife_msgs__msg__KnowledgeItem__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_swiss_knife_msgs__msg__KnowledgeItem * msg = (robot_swiss_knife_msgs__msg__KnowledgeItem *)allocator.allocate(sizeof(robot_swiss_knife_msgs__msg__KnowledgeItem), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_swiss_knife_msgs__msg__KnowledgeItem));
  bool success = robot_swiss_knife_msgs__msg__KnowledgeItem__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_swiss_knife_msgs__msg__KnowledgeItem__destroy(robot_swiss_knife_msgs__msg__KnowledgeItem * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_swiss_knife_msgs__msg__KnowledgeItem__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__init(robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_swiss_knife_msgs__msg__KnowledgeItem * data = NULL;

  if (size) {
    data = (robot_swiss_knife_msgs__msg__KnowledgeItem *)allocator.zero_allocate(size, sizeof(robot_swiss_knife_msgs__msg__KnowledgeItem), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_swiss_knife_msgs__msg__KnowledgeItem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_swiss_knife_msgs__msg__KnowledgeItem__fini(&data[i - 1]);
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
robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__fini(robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * array)
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
      robot_swiss_knife_msgs__msg__KnowledgeItem__fini(&array->data[i]);
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

robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence *
robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * array = (robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence *)allocator.allocate(sizeof(robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__destroy(robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__are_equal(const robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * lhs, const robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_swiss_knife_msgs__msg__KnowledgeItem__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__copy(
  const robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * input,
  robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_swiss_knife_msgs__msg__KnowledgeItem);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_swiss_knife_msgs__msg__KnowledgeItem * data =
      (robot_swiss_knife_msgs__msg__KnowledgeItem *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_swiss_knife_msgs__msg__KnowledgeItem__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_swiss_knife_msgs__msg__KnowledgeItem__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_swiss_knife_msgs__msg__KnowledgeItem__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
