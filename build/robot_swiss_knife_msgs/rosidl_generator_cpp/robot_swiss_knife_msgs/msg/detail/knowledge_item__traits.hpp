// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_swiss_knife_msgs:msg/KnowledgeItem.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__KNOWLEDGE_ITEM__TRAITS_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__KNOWLEDGE_ITEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_swiss_knife_msgs/msg/detail/knowledge_item__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_swiss_knife_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KnowledgeItem & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KnowledgeItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KnowledgeItem & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_swiss_knife_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robot_swiss_knife_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_swiss_knife_msgs::msg::KnowledgeItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_swiss_knife_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_swiss_knife_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_swiss_knife_msgs::msg::KnowledgeItem & msg)
{
  return robot_swiss_knife_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_swiss_knife_msgs::msg::KnowledgeItem>()
{
  return "robot_swiss_knife_msgs::msg::KnowledgeItem";
}

template<>
inline const char * name<robot_swiss_knife_msgs::msg::KnowledgeItem>()
{
  return "robot_swiss_knife_msgs/msg/KnowledgeItem";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::msg::KnowledgeItem>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::msg::KnowledgeItem>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_swiss_knife_msgs::msg::KnowledgeItem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__KNOWLEDGE_ITEM__TRAITS_HPP_
