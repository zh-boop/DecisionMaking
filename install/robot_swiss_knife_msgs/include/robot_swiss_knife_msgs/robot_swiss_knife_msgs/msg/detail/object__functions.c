// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_swiss_knife_msgs:msg/Object.idl
// generated code does not contain a copyright notice
#include "robot_swiss_knife_msgs/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `dimensions`
#include "geometry_msgs/msg/detail/vector3_stamped__functions.h"
// Member `name`
// Member `category`
#include "rosidl_runtime_c/string_functions.h"
// Member `view`
#include "robot_swiss_knife_msgs/msg/detail/object_view__functions.h"
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
robot_swiss_knife_msgs__msg__Object__init(robot_swiss_knife_msgs__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    robot_swiss_knife_msgs__msg__Object__fini(msg);
    return false;
  }
  // dimensions
  if (!geometry_msgs__msg__Vector3Stamped__init(&msg->dimensions)) {
    robot_swiss_knife_msgs__msg__Object__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    robot_swiss_knife_msgs__msg__Object__fini(msg);
    return false;
  }
  // category
  if (!rosidl_runtime_c__String__init(&msg->category)) {
    robot_swiss_knife_msgs__msg__Object__fini(msg);
    return false;
  }
  // database_id
  // probability
  // view
  if (!robot_swiss_knife_msgs__msg__ObjectView__init(&msg->view)) {
    robot_swiss_knife_msgs__msg__Object__fini(msg);
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    robot_swiss_knife_msgs__msg__Object__fini(msg);
    return false;
  }
  return true;
}

void
robot_swiss_knife_msgs__msg__Object__fini(robot_swiss_knife_msgs__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
  // dimensions
  geometry_msgs__msg__Vector3Stamped__fini(&msg->dimensions);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // category
  rosidl_runtime_c__String__fini(&msg->category);
  // database_id
  // probability
  // view
  robot_swiss_knife_msgs__msg__ObjectView__fini(&msg->view);
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
}

bool
robot_swiss_knife_msgs__msg__Object__are_equal(const robot_swiss_knife_msgs__msg__Object * lhs, const robot_swiss_knife_msgs__msg__Object * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // dimensions
  if (!geometry_msgs__msg__Vector3Stamped__are_equal(
      &(lhs->dimensions), &(rhs->dimensions)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // category
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->category), &(rhs->category)))
  {
    return false;
  }
  // database_id
  if (lhs->database_id != rhs->database_id) {
    return false;
  }
  // probability
  if (lhs->probability != rhs->probability) {
    return false;
  }
  // view
  if (!robot_swiss_knife_msgs__msg__ObjectView__are_equal(
      &(lhs->view), &(rhs->view)))
  {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->roi), &(rhs->roi)))
  {
    return false;
  }
  return true;
}

bool
robot_swiss_knife_msgs__msg__Object__copy(
  const robot_swiss_knife_msgs__msg__Object * input,
  robot_swiss_knife_msgs__msg__Object * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // dimensions
  if (!geometry_msgs__msg__Vector3Stamped__copy(
      &(input->dimensions), &(output->dimensions)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // category
  if (!rosidl_runtime_c__String__copy(
      &(input->category), &(output->category)))
  {
    return false;
  }
  // database_id
  output->database_id = input->database_id;
  // probability
  output->probability = input->probability;
  // view
  if (!robot_swiss_knife_msgs__msg__ObjectView__copy(
      &(input->view), &(output->view)))
  {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->roi), &(output->roi)))
  {
    return false;
  }
  return true;
}

robot_swiss_knife_msgs__msg__Object *
robot_swiss_knife_msgs__msg__Object__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_swiss_knife_msgs__msg__Object * msg = (robot_swiss_knife_msgs__msg__Object *)allocator.allocate(sizeof(robot_swiss_knife_msgs__msg__Object), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_swiss_knife_msgs__msg__Object));
  bool success = robot_swiss_knife_msgs__msg__Object__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_swiss_knife_msgs__msg__Object__destroy(robot_swiss_knife_msgs__msg__Object * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_swiss_knife_msgs__msg__Object__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_swiss_knife_msgs__msg__Object__Sequence__init(robot_swiss_knife_msgs__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_swiss_knife_msgs__msg__Object * data = NULL;

  if (size) {
    data = (robot_swiss_knife_msgs__msg__Object *)allocator.zero_allocate(size, sizeof(robot_swiss_knife_msgs__msg__Object), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_swiss_knife_msgs__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_swiss_knife_msgs__msg__Object__fini(&data[i - 1]);
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
robot_swiss_knife_msgs__msg__Object__Sequence__fini(robot_swiss_knife_msgs__msg__Object__Sequence * array)
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
      robot_swiss_knife_msgs__msg__Object__fini(&array->data[i]);
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

robot_swiss_knife_msgs__msg__Object__Sequence *
robot_swiss_knife_msgs__msg__Object__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_swiss_knife_msgs__msg__Object__Sequence * array = (robot_swiss_knife_msgs__msg__Object__Sequence *)allocator.allocate(sizeof(robot_swiss_knife_msgs__msg__Object__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_swiss_knife_msgs__msg__Object__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_swiss_knife_msgs__msg__Object__Sequence__destroy(robot_swiss_knife_msgs__msg__Object__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_swiss_knife_msgs__msg__Object__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_swiss_knife_msgs__msg__Object__Sequence__are_equal(const robot_swiss_knife_msgs__msg__Object__Sequence * lhs, const robot_swiss_knife_msgs__msg__Object__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_swiss_knife_msgs__msg__Object__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_swiss_knife_msgs__msg__Object__Sequence__copy(
  const robot_swiss_knife_msgs__msg__Object__Sequence * input,
  robot_swiss_knife_msgs__msg__Object__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_swiss_knife_msgs__msg__Object);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_swiss_knife_msgs__msg__Object * data =
      (robot_swiss_knife_msgs__msg__Object *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_swiss_knife_msgs__msg__Object__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_swiss_knife_msgs__msg__Object__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_swiss_knife_msgs__msg__Object__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
