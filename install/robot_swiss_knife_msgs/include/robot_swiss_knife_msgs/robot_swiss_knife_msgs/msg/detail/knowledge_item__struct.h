// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_swiss_knife_msgs:msg/KnowledgeItem.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__KNOWLEDGE_ITEM__STRUCT_H_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__KNOWLEDGE_ITEM__STRUCT_H_

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
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/KnowledgeItem in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__msg__KnowledgeItem
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String value;
} robot_swiss_knife_msgs__msg__KnowledgeItem;

// Struct for a sequence of robot_swiss_knife_msgs__msg__KnowledgeItem.
typedef struct robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence
{
  robot_swiss_knife_msgs__msg__KnowledgeItem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__KNOWLEDGE_ITEM__STRUCT_H_
