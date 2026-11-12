// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_swiss_knife_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_swiss_knife_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3_stamped__traits.hpp"
// Member 'view'
#include "robot_swiss_knife_msgs/msg/detail/object_view__traits.hpp"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace robot_swiss_knife_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: dimensions
  {
    out << "dimensions: ";
    to_flow_style_yaml(msg.dimensions, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: category
  {
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
    out << ", ";
  }

  // member: database_id
  {
    out << "database_id: ";
    rosidl_generator_traits::value_to_yaml(msg.database_id, out);
    out << ", ";
  }

  // member: probability
  {
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << ", ";
  }

  // member: view
  {
    out << "view: ";
    to_flow_style_yaml(msg.view, out);
    out << ", ";
  }

  // member: roi
  {
    out << "roi: ";
    to_flow_style_yaml(msg.roi, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: dimensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dimensions:\n";
    to_block_style_yaml(msg.dimensions, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: category
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
    out << "\n";
  }

  // member: database_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "database_id: ";
    rosidl_generator_traits::value_to_yaml(msg.database_id, out);
    out << "\n";
  }

  // member: probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << "\n";
  }

  // member: view
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "view:\n";
    to_block_style_yaml(msg.view, out, indentation + 2);
  }

  // member: roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi:\n";
    to_block_style_yaml(msg.roi, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Object & msg, bool use_flow_style = false)
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
  const robot_swiss_knife_msgs::msg::Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_swiss_knife_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_swiss_knife_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_swiss_knife_msgs::msg::Object & msg)
{
  return robot_swiss_knife_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_swiss_knife_msgs::msg::Object>()
{
  return "robot_swiss_knife_msgs::msg::Object";
}

template<>
inline const char * name<robot_swiss_knife_msgs::msg::Object>()
{
  return "robot_swiss_knife_msgs/msg/Object";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_swiss_knife_msgs::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
