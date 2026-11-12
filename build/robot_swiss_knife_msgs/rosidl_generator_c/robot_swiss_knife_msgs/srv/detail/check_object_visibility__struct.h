// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_swiss_knife_msgs:srv/CheckObjectVisibility.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CHECK_OBJECT_VISIBILITY__STRUCT_H_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CHECK_OBJECT_VISIBILITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'object_categories'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CheckObjectVisibility in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request
{
  sensor_msgs__msg__Image image;
  rosidl_runtime_c__String__Sequence object_categories;
} robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request;

// Struct for a sequence of robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request.
typedef struct robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request__Sequence
{
  robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'objects_visible'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/CheckObjectVisibility in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response
{
  rosidl_runtime_c__boolean__Sequence objects_visible;
} robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response;

// Struct for a sequence of robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response.
typedef struct robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response__Sequence
{
  robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CHECK_OBJECT_VISIBILITY__STRUCT_H_
