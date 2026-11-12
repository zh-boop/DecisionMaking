// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_swiss_knife_msgs:srv/GetFluentAssertions.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_FLUENT_ASSERTIONS__STRUCT_H_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_FLUENT_ASSERTIONS__STRUCT_H_

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

/// Struct defined in srv/GetFluentAssertions in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__GetFluentAssertions_Request
{
  rosidl_runtime_c__String name;
} robot_swiss_knife_msgs__srv__GetFluentAssertions_Request;

// Struct for a sequence of robot_swiss_knife_msgs__srv__GetFluentAssertions_Request.
typedef struct robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence
{
  robot_swiss_knife_msgs__srv__GetFluentAssertions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'fluents'
#include "robot_swiss_knife_msgs/msg/detail/fluent__struct.h"

/// Struct defined in srv/GetFluentAssertions in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__GetFluentAssertions_Response
{
  robot_swiss_knife_msgs__msg__Fluent__Sequence fluents;
} robot_swiss_knife_msgs__srv__GetFluentAssertions_Response;

// Struct for a sequence of robot_swiss_knife_msgs__srv__GetFluentAssertions_Response.
typedef struct robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence
{
  robot_swiss_knife_msgs__srv__GetFluentAssertions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_FLUENT_ASSERTIONS__STRUCT_H_
