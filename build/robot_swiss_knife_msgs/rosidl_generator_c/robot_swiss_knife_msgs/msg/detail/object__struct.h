// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_swiss_knife_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3_stamped__struct.h"
// Member 'name'
// Member 'category'
#include "rosidl_runtime_c/string.h"
// Member 'view'
#include "robot_swiss_knife_msgs/msg/detail/object_view__struct.h"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in msg/Object in the package robot_swiss_knife_msgs.
/**
  * Message definition adapted from https://github.com/b-it-bots/mas_perception_msgs/blob/noetic/msg/Object.msg
 */
typedef struct robot_swiss_knife_msgs__msg__Object
{
  /// The pose where the object can be found
  geometry_msgs__msg__PoseStamped pose;
  /// The dimensions of the object
  geometry_msgs__msg__Vector3Stamped dimensions;
  /// Unique name of the object determined e.g. by the recognition
  rosidl_runtime_c__String name;
  /// Categorization of this object
  rosidl_runtime_c__String category;
  /// The object's ID in a database
  int32_t database_id;
  /// Probability
  float probability;
  /// View representation including an RGB image of the object and a point cloud
  robot_swiss_knife_msgs__msg__ObjectView view;
  /// 2D bounding box in an image
  sensor_msgs__msg__RegionOfInterest roi;
} robot_swiss_knife_msgs__msg__Object;

// Struct for a sequence of robot_swiss_knife_msgs__msg__Object.
typedef struct robot_swiss_knife_msgs__msg__Object__Sequence
{
  robot_swiss_knife_msgs__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
