// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_swiss_knife_msgs:srv/UpdateKB.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__UPDATE_KB__STRUCT_H_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__UPDATE_KB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INSERT'.
enum
{
  robot_swiss_knife_msgs__srv__UpdateKB_Request__INSERT = 0
};

/// Constant 'REMOVE'.
enum
{
  robot_swiss_knife_msgs__srv__UpdateKB_Request__REMOVE = 1
};

// Include directives for member types
// Member 'fluents'
#include "robot_swiss_knife_msgs/msg/detail/fluent__struct.h"

/// Struct defined in srv/UpdateKB in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__UpdateKB_Request
{
  int8_t operation;
  robot_swiss_knife_msgs__msg__Fluent__Sequence fluents;
} robot_swiss_knife_msgs__srv__UpdateKB_Request;

// Struct for a sequence of robot_swiss_knife_msgs__srv__UpdateKB_Request.
typedef struct robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence
{
  robot_swiss_knife_msgs__srv__UpdateKB_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/UpdateKB in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__UpdateKB_Response
{
  bool success;
} robot_swiss_knife_msgs__srv__UpdateKB_Response;

// Struct for a sequence of robot_swiss_knife_msgs__srv__UpdateKB_Response.
typedef struct robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence
{
  robot_swiss_knife_msgs__srv__UpdateKB_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__UPDATE_KB__STRUCT_H_
