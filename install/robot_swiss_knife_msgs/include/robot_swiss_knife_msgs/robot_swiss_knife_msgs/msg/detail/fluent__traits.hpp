// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_swiss_knife_msgs:msg/Fluent.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__FLUENT__TRAITS_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__FLUENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_swiss_knife_msgs/msg/detail/fluent__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'params'
#include "robot_swiss_knife_msgs/msg/detail/knowledge_item__traits.hpp"

namespace robot_swiss_knife_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Fluent & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: params
  {
    if (msg.params.size() == 0) {
      out << "params: []";
    } else {
      out << "params: [";
      size_t pending_items = msg.params.size();
      for (auto item : msg.params) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const Fluent & msg,
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

  // member: params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.params.size() == 0) {
      out << "params: []\n";
    } else {
      out << "params:\n";
      for (auto item : msg.params) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const Fluent & msg, bool use_flow_style = false)
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
  const robot_swiss_knife_msgs::msg::Fluent & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_swiss_knife_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_swiss_knife_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_swiss_knife_msgs::msg::Fluent & msg)
{
  return robot_swiss_knife_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_swiss_knife_msgs::msg::Fluent>()
{
  return "robot_swiss_knife_msgs::msg::Fluent";
}

template<>
inline const char * name<robot_swiss_knife_msgs::msg::Fluent>()
{
  return "robot_swiss_knife_msgs/msg/Fluent";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::msg::Fluent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::msg::Fluent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_swiss_knife_msgs::msg::Fluent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__FLUENT__TRAITS_HPP_
