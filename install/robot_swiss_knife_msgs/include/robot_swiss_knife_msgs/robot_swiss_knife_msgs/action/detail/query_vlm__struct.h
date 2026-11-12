// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_swiss_knife_msgs:action/QueryVLM.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__ACTION__DETAIL__QUERY_VLM__STRUCT_H_
#define ROBOT_SWISS_KNIFE_MSGS__ACTION__DETAIL__QUERY_VLM__STRUCT_H_

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
// Member 'query'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/QueryVLM in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_Goal
{
  sensor_msgs__msg__Image image;
  rosidl_runtime_c__String query;
} robot_swiss_knife_msgs__action__QueryVLM_Goal;

// Struct for a sequence of robot_swiss_knife_msgs__action__QueryVLM_Goal.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_Goal__Sequence
{
  robot_swiss_knife_msgs__action__QueryVLM_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__QueryVLM_Goal__Sequence;


// Constants defined in the message

/// Constant 'QUERY_SUCCESS'.
enum
{
  robot_swiss_knife_msgs__action__QueryVLM_Result__QUERY_SUCCESS = 0
};

/// Constant 'QUERY_FAILURE'.
enum
{
  robot_swiss_knife_msgs__action__QueryVLM_Result__QUERY_FAILURE = 1
};

// Include directives for member types
// Member 'answer'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/QueryVLM in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_Result
{
  int8_t query_status;
  rosidl_runtime_c__String answer;
} robot_swiss_knife_msgs__action__QueryVLM_Result;

// Struct for a sequence of robot_swiss_knife_msgs__action__QueryVLM_Result.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_Result__Sequence
{
  robot_swiss_knife_msgs__action__QueryVLM_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__QueryVLM_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/QueryVLM in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_Feedback
{
  rosidl_runtime_c__String feedback;
} robot_swiss_knife_msgs__action__QueryVLM_Feedback;

// Struct for a sequence of robot_swiss_knife_msgs__action__QueryVLM_Feedback.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_Feedback__Sequence
{
  robot_swiss_knife_msgs__action__QueryVLM_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__QueryVLM_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robot_swiss_knife_msgs/action/detail/query_vlm__struct.h"

/// Struct defined in action/QueryVLM in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_swiss_knife_msgs__action__QueryVLM_Goal goal;
} robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request;

// Struct for a sequence of robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request__Sequence
{
  robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/QueryVLM in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response;

// Struct for a sequence of robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response__Sequence
{
  robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/QueryVLM in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request;

// Struct for a sequence of robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request__Sequence
{
  robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_swiss_knife_msgs/action/detail/query_vlm__struct.h"

/// Struct defined in action/QueryVLM in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response
{
  int8_t status;
  robot_swiss_knife_msgs__action__QueryVLM_Result result;
} robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response;

// Struct for a sequence of robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response__Sequence
{
  robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robot_swiss_knife_msgs/action/detail/query_vlm__struct.h"

/// Struct defined in action/QueryVLM in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_swiss_knife_msgs__action__QueryVLM_Feedback feedback;
} robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage;

// Struct for a sequence of robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage.
typedef struct robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage__Sequence
{
  robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__ACTION__DETAIL__QUERY_VLM__STRUCT_H_
