// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_swiss_knife_msgs:srv/SegmentObjects.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__SEGMENT_OBJECTS__STRUCT_H_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__SEGMENT_OBJECTS__STRUCT_H_

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

/// Struct defined in srv/SegmentObjects in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__SegmentObjects_Request
{
  sensor_msgs__msg__Image image;
  rosidl_runtime_c__String__Sequence object_categories;
} robot_swiss_knife_msgs__srv__SegmentObjects_Request;

// Struct for a sequence of robot_swiss_knife_msgs__srv__SegmentObjects_Request.
typedef struct robot_swiss_knife_msgs__srv__SegmentObjects_Request__Sequence
{
  robot_swiss_knife_msgs__srv__SegmentObjects_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__SegmentObjects_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'objects'
#include "robot_swiss_knife_msgs/msg/detail/object__struct.h"

/// Struct defined in srv/SegmentObjects in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__SegmentObjects_Response
{
  robot_swiss_knife_msgs__msg__Object__Sequence objects;
} robot_swiss_knife_msgs__srv__SegmentObjects_Response;

// Struct for a sequence of robot_swiss_knife_msgs__srv__SegmentObjects_Response.
typedef struct robot_swiss_knife_msgs__srv__SegmentObjects_Response__Sequence
{
  robot_swiss_knife_msgs__srv__SegmentObjects_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__SegmentObjects_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__SEGMENT_OBJECTS__STRUCT_H_
