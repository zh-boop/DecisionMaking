// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_swiss_knife_msgs:srv/CalculatePoseFromCloud.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CALCULATE_POSE_FROM_CLOUD__TRAITS_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CALCULATE_POSE_FROM_CLOUD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_swiss_knife_msgs/srv/detail/calculate_pose_from_cloud__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'point_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace robot_swiss_knife_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalculatePoseFromCloud_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: point_cloud
  {
    out << "point_cloud: ";
    to_flow_style_yaml(msg.point_cloud, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalculatePoseFromCloud_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point_cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_cloud:\n";
    to_block_style_yaml(msg.point_cloud, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalculatePoseFromCloud_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_swiss_knife_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robot_swiss_knife_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_swiss_knife_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_swiss_knife_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request & msg)
{
  return robot_swiss_knife_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request>()
{
  return "robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request>()
{
  return "robot_swiss_knife_msgs/srv/CalculatePoseFromCloud_Request";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace robot_swiss_knife_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalculatePoseFromCloud_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: calculation_successful
  {
    out << "calculation_successful: ";
    rosidl_generator_traits::value_to_yaml(msg.calculation_successful, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalculatePoseFromCloud_Response & msg,
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

  // member: calculation_successful
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calculation_successful: ";
    rosidl_generator_traits::value_to_yaml(msg.calculation_successful, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalculatePoseFromCloud_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_swiss_knife_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robot_swiss_knife_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_swiss_knife_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_swiss_knife_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response & msg)
{
  return robot_swiss_knife_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response>()
{
  return "robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response>()
{
  return "robot_swiss_knife_msgs/srv/CalculatePoseFromCloud_Response";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud>()
{
  return "robot_swiss_knife_msgs::srv::CalculatePoseFromCloud";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud>()
{
  return "robot_swiss_knife_msgs/srv/CalculatePoseFromCloud";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request>::value &&
    has_fixed_size<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request>::value &&
    has_bounded_size<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response>::value
  >
{
};

template<>
struct is_service<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud>
  : std::true_type
{
};

template<>
struct is_service_request<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CALCULATE_POSE_FROM_CLOUD__TRAITS_HPP_
