// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_swiss_knife_msgs:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__ACTION__STRUCT_H_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'params'
#include "robot_swiss_knife_msgs/msg/detail/knowledge_item__struct.h"

/// Struct defined in msg/Action in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__msg__Action
{
  rosidl_runtime_c__String name;
  robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence params;
} robot_swiss_knife_msgs__msg__Action;

// Struct for a sequence of robot_swiss_knife_msgs__msg__Action.
typedef struct robot_swiss_knife_msgs__msg__Action__Sequence
{
  robot_swiss_knife_msgs__msg__Action * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__msg__Action__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__ACTION__STRUCT_H_
