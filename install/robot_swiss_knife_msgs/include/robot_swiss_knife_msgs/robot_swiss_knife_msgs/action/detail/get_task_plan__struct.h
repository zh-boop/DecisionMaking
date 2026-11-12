// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_swiss_knife_msgs:action/GetTaskPlan.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__ACTION__DETAIL__GET_TASK_PLAN__STRUCT_H_
#define ROBOT_SWISS_KNIFE_MSGS__ACTION__DETAIL__GET_TASK_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/GetTaskPlan in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_Goal
{
  uint8_t structure_needs_at_least_one_member;
} robot_swiss_knife_msgs__action__GetTaskPlan_Goal;

// Struct for a sequence of robot_swiss_knife_msgs__action__GetTaskPlan_Goal.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_Goal__Sequence
{
  robot_swiss_knife_msgs__action__GetTaskPlan_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__GetTaskPlan_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'plan'
#include "robot_swiss_knife_msgs/msg/detail/action__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/GetTaskPlan in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_Result
{
  robot_swiss_knife_msgs__msg__Action__Sequence plan;
  bool success;
  rosidl_runtime_c__String message;
} robot_swiss_knife_msgs__action__GetTaskPlan_Result;

// Struct for a sequence of robot_swiss_knife_msgs__action__GetTaskPlan_Result.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_Result__Sequence
{
  robot_swiss_knife_msgs__action__GetTaskPlan_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__GetTaskPlan_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/GetTaskPlan in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_Feedback
{
  rosidl_runtime_c__String feedback;
} robot_swiss_knife_msgs__action__GetTaskPlan_Feedback;

// Struct for a sequence of robot_swiss_knife_msgs__action__GetTaskPlan_Feedback.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_Feedback__Sequence
{
  robot_swiss_knife_msgs__action__GetTaskPlan_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__GetTaskPlan_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robot_swiss_knife_msgs/action/detail/get_task_plan__struct.h"

/// Struct defined in action/GetTaskPlan in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_swiss_knife_msgs__action__GetTaskPlan_Goal goal;
} robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request;

// Struct for a sequence of robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request__Sequence
{
  robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GetTaskPlan in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response;

// Struct for a sequence of robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response__Sequence
{
  robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GetTaskPlan in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request;

// Struct for a sequence of robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request__Sequence
{
  robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_swiss_knife_msgs/action/detail/get_task_plan__struct.h"

/// Struct defined in action/GetTaskPlan in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response
{
  int8_t status;
  robot_swiss_knife_msgs__action__GetTaskPlan_Result result;
} robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response;

// Struct for a sequence of robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response__Sequence
{
  robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robot_swiss_knife_msgs/action/detail/get_task_plan__struct.h"

/// Struct defined in action/GetTaskPlan in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_swiss_knife_msgs__action__GetTaskPlan_Feedback feedback;
} robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage;

// Struct for a sequence of robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage.
typedef struct robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage__Sequence
{
  robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__ACTION__DETAIL__GET_TASK_PLAN__STRUCT_H_
