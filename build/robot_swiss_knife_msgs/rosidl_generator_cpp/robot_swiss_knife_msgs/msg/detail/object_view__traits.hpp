// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_swiss_knife_msgs:msg/ObjectView.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT_VIEW__TRAITS_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT_VIEW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_swiss_knife_msgs/msg/detail/object_view__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
// Member 'mask'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'point_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace robot_swiss_knife_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectView & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: mask
  {
    out << "mask: ";
    to_flow_style_yaml(msg.mask, out);
    out << ", ";
  }

  // member: point_cloud
  {
    out << "point_cloud: ";
    to_flow_style_yaml(msg.point_cloud, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectView & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mask:\n";
    to_block_style_yaml(msg.mask, out, indentation + 2);
  }

  // member: point_cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_cloud:\n";
    to_block_style_yaml(msg.point_cloud, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectView & msg, bool use_flow_style = false)
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
  const robot_swiss_knife_msgs::msg::ObjectView & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_swiss_knife_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_swiss_knife_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_swiss_knife_msgs::msg::ObjectView & msg)
{
  return robot_swiss_knife_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_swiss_knife_msgs::msg::ObjectView>()
{
  return "robot_swiss_knife_msgs::msg::ObjectView";
}

template<>
inline const char * name<robot_swiss_knife_msgs::msg::ObjectView>()
{
  return "robot_swiss_knife_msgs/msg/ObjectView";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::msg::ObjectView>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::msg::ObjectView>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value && has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<robot_swiss_knife_msgs::msg::ObjectView>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT_VIEW__TRAITS_HPP_
