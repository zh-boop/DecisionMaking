// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_swiss_knife_msgs:msg/ObjectView.idl
// generated code does not contain a copyright notice
#include "robot_swiss_knife_msgs/msg/detail/object_view__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `image`
// Member `mask`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `point_cloud`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
robot_swiss_knife_msgs__msg__ObjectView__init(robot_swiss_knife_msgs__msg__ObjectView * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    robot_swiss_knife_msgs__msg__ObjectView__fini(msg);
    return false;
  }
  // mask
  if (!sensor_msgs__msg__Image__init(&msg->mask)) {
    robot_swiss_knife_msgs__msg__ObjectView__fini(msg);
    return false;
  }
  // point_cloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->point_cloud)) {
    robot_swiss_knife_msgs__msg__ObjectView__fini(msg);
    return false;
  }
  return true;
}

void
robot_swiss_knife_msgs__msg__ObjectView__fini(robot_swiss_knife_msgs__msg__ObjectView * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // mask
  sensor_msgs__msg__Image__fini(&msg->mask);
  // point_cloud
  sensor_msgs__msg__PointCloud2__fini(&msg->point_cloud);
}

bool
robot_swiss_knife_msgs__msg__ObjectView__are_equal(const robot_swiss_knife_msgs__msg__ObjectView * lhs, const robot_swiss_knife_msgs__msg__ObjectView * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // mask
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->mask), &(rhs->mask)))
  {
    return false;
  }
  // point_cloud
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->point_cloud), &(rhs->point_cloud)))
  {
    return false;
  }
  return true;
}

bool
robot_swiss_knife_msgs__msg__ObjectView__copy(
  const robot_swiss_knife_msgs__msg__ObjectView * input,
  robot_swiss_knife_msgs__msg__ObjectView * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // mask
  if (!sensor_msgs__msg__Image__copy(
      &(input->mask), &(output->mask)))
  {
    return false;
  }
  // point_cloud
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->point_cloud), &(output->point_cloud)))
  {
    return false;
  }
  return true;
}

robot_swiss_knife_msgs__msg__ObjectView *
robot_swiss_knife_msgs__msg__ObjectView__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_swiss_knife_msgs__msg__ObjectView * msg = (robot_swiss_knife_msgs__msg__ObjectView *)allocator.allocate(sizeof(robot_swiss_knife_msgs__msg__ObjectView), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_swiss_knife_msgs__msg__ObjectView));
  bool success = robot_swiss_knife_msgs__msg__ObjectView__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_swiss_knife_msgs__msg__ObjectView__destroy(robot_swiss_knife_msgs__msg__ObjectView * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_swiss_knife_msgs__msg__ObjectView__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_swiss_knife_msgs__msg__ObjectView__Sequence__init(robot_swiss_knife_msgs__msg__ObjectView__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_swiss_knife_msgs__msg__ObjectView * data = NULL;

  if (size) {
    data = (robot_swiss_knife_msgs__msg__ObjectView *)allocator.zero_allocate(size, sizeof(robot_swiss_knife_msgs__msg__ObjectView), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_swiss_knife_msgs__msg__ObjectView__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_swiss_knife_msgs__msg__ObjectView__fini(&data[i - 1]);
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
robot_swiss_knife_msgs__msg__ObjectView__Sequence__fini(robot_swiss_knife_msgs__msg__ObjectView__Sequence * array)
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
      robot_swiss_knife_msgs__msg__ObjectView__fini(&array->data[i]);
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

robot_swiss_knife_msgs__msg__ObjectView__Sequence *
robot_swiss_knife_msgs__msg__ObjectView__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_swiss_knife_msgs__msg__ObjectView__Sequence * array = (robot_swiss_knife_msgs__msg__ObjectView__Sequence *)allocator.allocate(sizeof(robot_swiss_knife_msgs__msg__ObjectView__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_swiss_knife_msgs__msg__ObjectView__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_swiss_knife_msgs__msg__ObjectView__Sequence__destroy(robot_swiss_knife_msgs__msg__ObjectView__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_swiss_knife_msgs__msg__ObjectView__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_swiss_knife_msgs__msg__ObjectView__Sequence__are_equal(const robot_swiss_knife_msgs__msg__ObjectView__Sequence * lhs, const robot_swiss_knife_msgs__msg__ObjectView__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_swiss_knife_msgs__msg__ObjectView__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_swiss_knife_msgs__msg__ObjectView__Sequence__copy(
  const robot_swiss_knife_msgs__msg__ObjectView__Sequence * input,
  robot_swiss_knife_msgs__msg__ObjectView__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_swiss_knife_msgs__msg__ObjectView);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_swiss_knife_msgs__msg__ObjectView * data =
      (robot_swiss_knife_msgs__msg__ObjectView *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_swiss_knife_msgs__msg__ObjectView__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_swiss_knife_msgs__msg__ObjectView__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_swiss_knife_msgs__msg__ObjectView__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
