// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_swiss_knife_msgs:msg/Fluent.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_swiss_knife_msgs/msg/detail/fluent__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_swiss_knife_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Fluent_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_swiss_knife_msgs::msg::Fluent(_init);
}

void Fluent_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_swiss_knife_msgs::msg::Fluent *>(message_memory);
  typed_message->~Fluent();
}

size_t size_function__Fluent__params(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robot_swiss_knife_msgs::msg::KnowledgeItem> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Fluent__params(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robot_swiss_knife_msgs::msg::KnowledgeItem> *>(untyped_member);
  return &member[index];
}

void * get_function__Fluent__params(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robot_swiss_knife_msgs::msg::KnowledgeItem> *>(untyped_member);
  return &member[index];
}

void fetch_function__Fluent__params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robot_swiss_knife_msgs::msg::KnowledgeItem *>(
    get_const_function__Fluent__params(untyped_member, index));
  auto & value = *reinterpret_cast<robot_swiss_knife_msgs::msg::KnowledgeItem *>(untyped_value);
  value = item;
}

void assign_function__Fluent__params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robot_swiss_knife_msgs::msg::KnowledgeItem *>(
    get_function__Fluent__params(untyped_member, index));
  const auto & value = *reinterpret_cast<const robot_swiss_knife_msgs::msg::KnowledgeItem *>(untyped_value);
  item = value;
}

void resize_function__Fluent__params(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robot_swiss_knife_msgs::msg::KnowledgeItem> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Fluent_message_member_array[3] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::msg::Fluent, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "params",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robot_swiss_knife_msgs::msg::KnowledgeItem>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::msg::Fluent, params),  // bytes offset in struct
    nullptr,  // default value
    size_function__Fluent__params,  // size() function pointer
    get_const_function__Fluent__params,  // get_const(index) function pointer
    get_function__Fluent__params,  // get(index) function pointer
    fetch_function__Fluent__params,  // fetch(index, &value) function pointer
    assign_function__Fluent__params,  // assign(index, value) function pointer
    resize_function__Fluent__params  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::msg::Fluent, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Fluent_message_members = {
  "robot_swiss_knife_msgs::msg",  // message namespace
  "Fluent",  // message name
  3,  // number of fields
  sizeof(robot_swiss_knife_msgs::msg::Fluent),
  Fluent_message_member_array,  // message members
  Fluent_init_function,  // function to initialize message memory (memory has to be allocated)
  Fluent_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Fluent_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Fluent_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot_swiss_knife_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_swiss_knife_msgs::msg::Fluent>()
{
  return &::robot_swiss_knife_msgs::msg::rosidl_typesupport_introspection_cpp::Fluent_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_swiss_knife_msgs, msg, Fluent)() {
  return &::robot_swiss_knife_msgs::msg::rosidl_typesupport_introspection_cpp::Fluent_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
