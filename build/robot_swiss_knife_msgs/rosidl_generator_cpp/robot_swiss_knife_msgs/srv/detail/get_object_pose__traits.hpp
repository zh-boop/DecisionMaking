// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_swiss_knife_msgs:srv/GetObjectPose.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_OBJECT_POSE__TRAITS_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_OBJECT_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_swiss_knife_msgs/srv/detail/get_object_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_swiss_knife_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetObjectPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_category
  {
    out << "object_category: ";
    rosidl_generator_traits::value_to_yaml(msg.object_category, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetObjectPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_category
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_category: ";
    rosidl_generator_traits::value_to_yaml(msg.object_category, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetObjectPose_Request & msg, bool use_flow_style = false)
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
  const robot_swiss_knife_msgs::srv::GetObjectPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_swiss_knife_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_swiss_knife_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_swiss_knife_msgs::srv::GetObjectPose_Request & msg)
{
  return robot_swiss_knife_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::GetObjectPose_Request>()
{
  return "robot_swiss_knife_msgs::srv::GetObjectPose_Request";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::GetObjectPose_Request>()
{
  return "robot_swiss_knife_msgs/srv/GetObjectPose_Request";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::GetObjectPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::GetObjectPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_swiss_knife_msgs::srv::GetObjectPose_Request>
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
  const GetObjectPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: tracking_state
  {
    out << "tracking_state: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_state, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetObjectPose_Response & msg,
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

  // member: tracking_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_state: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_state, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetObjectPose_Response & msg, bool use_flow_style = false)
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
  const robot_swiss_knife_msgs::srv::GetObjectPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_swiss_knife_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_swiss_knife_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_swiss_knife_msgs::srv::GetObjectPose_Response & msg)
{
  return robot_swiss_knife_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::GetObjectPose_Response>()
{
  return "robot_swiss_knife_msgs::srv::GetObjectPose_Response";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::GetObjectPose_Response>()
{
  return "robot_swiss_knife_msgs/srv/GetObjectPose_Response";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::GetObjectPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::GetObjectPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_swiss_knife_msgs::srv::GetObjectPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::GetObjectPose>()
{
  return "robot_swiss_knife_msgs::srv::GetObjectPose";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::GetObjectPose>()
{
  return "robot_swiss_knife_msgs/srv/GetObjectPose";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::GetObjectPose>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_swiss_knife_msgs::srv::GetObjectPose_Request>::value &&
    has_fixed_size<robot_swiss_knife_msgs::srv::GetObjectPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::GetObjectPose>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_swiss_knife_msgs::srv::GetObjectPose_Request>::value &&
    has_bounded_size<robot_swiss_knife_msgs::srv::GetObjectPose_Response>::value
  >
{
};

template<>
struct is_service<robot_swiss_knife_msgs::srv::GetObjectPose>
  : std::true_type
{
};

template<>
struct is_service_request<robot_swiss_knife_msgs::srv::GetObjectPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_swiss_knife_msgs::srv::GetObjectPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_OBJECT_POSE__TRAITS_HPP_
