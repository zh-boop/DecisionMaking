// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_swiss_knife_msgs:msg/KnowledgeItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_swiss_knife_msgs/msg/detail/knowledge_item__rosidl_typesupport_introspection_c.h"
#include "robot_swiss_knife_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_swiss_knife_msgs/msg/detail/knowledge_item__functions.h"
#include "robot_swiss_knife_msgs/msg/detail/knowledge_item__struct.h"


// Include directives for member types
// Member `name`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_swiss_knife_msgs__msg__KnowledgeItem__rosidl_typesupport_introspection_c__KnowledgeItem_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_swiss_knife_msgs__msg__KnowledgeItem__init(message_memory);
}

void robot_swiss_knife_msgs__msg__KnowledgeItem__rosidl_typesupport_introspection_c__KnowledgeItem_fini_function(void * message_memory)
{
  robot_swiss_knife_msgs__msg__KnowledgeItem__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_swiss_knife_msgs__msg__KnowledgeItem__rosidl_typesupport_introspection_c__KnowledgeItem_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs__msg__KnowledgeItem, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs__msg__KnowledgeItem, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_swiss_knife_msgs__msg__KnowledgeItem__rosidl_typesupport_introspection_c__KnowledgeItem_message_members = {
  "robot_swiss_knife_msgs__msg",  // message namespace
  "KnowledgeItem",  // message name
  2,  // number of fields
  sizeof(robot_swiss_knife_msgs__msg__KnowledgeItem),
  robot_swiss_knife_msgs__msg__KnowledgeItem__rosidl_typesupport_introspection_c__KnowledgeItem_message_member_array,  // message members
  robot_swiss_knife_msgs__msg__KnowledgeItem__rosidl_typesupport_introspection_c__KnowledgeItem_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_swiss_knife_msgs__msg__KnowledgeItem__rosidl_typesupport_introspection_c__KnowledgeItem_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_swiss_knife_msgs__msg__KnowledgeItem__rosidl_typesupport_introspection_c__KnowledgeItem_message_type_support_handle = {
  0,
  &robot_swiss_knife_msgs__msg__KnowledgeItem__rosidl_typesupport_introspection_c__KnowledgeItem_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_swiss_knife_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_swiss_knife_msgs, msg, KnowledgeItem)() {
  if (!robot_swiss_knife_msgs__msg__KnowledgeItem__rosidl_typesupport_introspection_c__KnowledgeItem_message_type_support_handle.typesupport_identifier) {
    robot_swiss_knife_msgs__msg__KnowledgeItem__rosidl_typesupport_introspection_c__KnowledgeItem_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_swiss_knife_msgs__msg__KnowledgeItem__rosidl_typesupport_introspection_c__KnowledgeItem_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
