// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_swiss_knife_msgs:srv/GetObjectPose.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_OBJECT_POSE__STRUCT_H_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_OBJECT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_category'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetObjectPose in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__GetObjectPose_Request
{
  rosidl_runtime_c__String object_category;
} robot_swiss_knife_msgs__srv__GetObjectPose_Request;

// Struct for a sequence of robot_swiss_knife_msgs__srv__GetObjectPose_Request.
typedef struct robot_swiss_knife_msgs__srv__GetObjectPose_Request__Sequence
{
  robot_swiss_knife_msgs__srv__GetObjectPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__GetObjectPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'tracking_state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetObjectPose in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__GetObjectPose_Response
{
  geometry_msgs__msg__PoseStamped pose;
  rosidl_runtime_c__String tracking_state;
  bool success;
} robot_swiss_knife_msgs__srv__GetObjectPose_Response;

// Struct for a sequence of robot_swiss_knife_msgs__srv__GetObjectPose_Response.
typedef struct robot_swiss_knife_msgs__srv__GetObjectPose_Response__Sequence
{
  robot_swiss_knife_msgs__srv__GetObjectPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__GetObjectPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_OBJECT_POSE__STRUCT_H_
