// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robot_swiss_knife_msgs:msg/KnowledgeItem.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__KNOWLEDGE_ITEM__FUNCTIONS_H_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__KNOWLEDGE_ITEM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robot_swiss_knife_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robot_swiss_knife_msgs/msg/detail/knowledge_item__struct.h"

/// Initialize msg/KnowledgeItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_swiss_knife_msgs__msg__KnowledgeItem
 * )) before or use
 * robot_swiss_knife_msgs__msg__KnowledgeItem__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__msg__KnowledgeItem__init(robot_swiss_knife_msgs__msg__KnowledgeItem * msg);

/// Finalize msg/KnowledgeItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__msg__KnowledgeItem__fini(robot_swiss_knife_msgs__msg__KnowledgeItem * msg);

/// Create msg/KnowledgeItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_swiss_knife_msgs__msg__KnowledgeItem__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
robot_swiss_knife_msgs__msg__KnowledgeItem *
robot_swiss_knife_msgs__msg__KnowledgeItem__create();

/// Destroy msg/KnowledgeItem message.
/**
 * It calls
 * robot_swiss_knife_msgs__msg__KnowledgeItem__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__msg__KnowledgeItem__destroy(robot_swiss_knife_msgs__msg__KnowledgeItem * msg);

/// Check for msg/KnowledgeItem message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__msg__KnowledgeItem__are_equal(const robot_swiss_knife_msgs__msg__KnowledgeItem * lhs, const robot_swiss_knife_msgs__msg__KnowledgeItem * rhs);

/// Copy a msg/KnowledgeItem message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__msg__KnowledgeItem__copy(
  const robot_swiss_knife_msgs__msg__KnowledgeItem * input,
  robot_swiss_knife_msgs__msg__KnowledgeItem * output);

/// Initialize array of msg/KnowledgeItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_swiss_knife_msgs__msg__KnowledgeItem__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__init(robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * array, size_t size);

/// Finalize array of msg/KnowledgeItem messages.
/**
 * It calls
 * robot_swiss_knife_msgs__msg__KnowledgeItem__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__fini(robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * array);

/// Create array of msg/KnowledgeItem messages.
/**
 * It allocates the memory for the array and calls
 * robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence *
robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__create(size_t size);

/// Destroy array of msg/KnowledgeItem messages.
/**
 * It calls
 * robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__destroy(robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * array);

/// Check for msg/KnowledgeItem message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__are_equal(const robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * lhs, const robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * rhs);

/// Copy an array of msg/KnowledgeItem messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__copy(
  const robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * input,
  robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__KNOWLEDGE_ITEM__FUNCTIONS_H_
