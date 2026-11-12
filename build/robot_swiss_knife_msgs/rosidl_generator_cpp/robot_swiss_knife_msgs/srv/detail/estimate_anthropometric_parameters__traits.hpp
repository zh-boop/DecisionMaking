// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_swiss_knife_msgs:srv/EstimateAnthropometricParameters.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__ESTIMATE_ANTHROPOMETRIC_PARAMETERS__TRAITS_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__ESTIMATE_ANTHROPOMETRIC_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_swiss_knife_msgs/srv/detail/estimate_anthropometric_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace robot_swiss_knife_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EstimateAnthropometricParameters_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstimateAnthropometricParameters_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstimateAnthropometricParameters_Request & msg, bool use_flow_style = false)
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
  const robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_swiss_knife_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_swiss_knife_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request & msg)
{
  return robot_swiss_knife_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request>()
{
  return "robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request>()
{
  return "robot_swiss_knife_msgs/srv/EstimateAnthropometricParameters_Request";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_swiss_knife_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EstimateAnthropometricParameters_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: height_cm
  {
    out << "height_cm: ";
    rosidl_generator_traits::value_to_yaml(msg.height_cm, out);
    out << ", ";
  }

  // member: mass_kg
  {
    out << "mass_kg: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_kg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstimateAnthropometricParameters_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: height_cm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_cm: ";
    rosidl_generator_traits::value_to_yaml(msg.height_cm, out);
    out << "\n";
  }

  // member: mass_kg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass_kg: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_kg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstimateAnthropometricParameters_Response & msg, bool use_flow_style = false)
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
  const robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_swiss_knife_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_swiss_knife_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response & msg)
{
  return robot_swiss_knife_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response>()
{
  return "robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response>()
{
  return "robot_swiss_knife_msgs/srv/EstimateAnthropometricParameters_Response";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters>()
{
  return "robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters>()
{
  return "robot_swiss_knife_msgs/srv/EstimateAnthropometricParameters";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request>::value &&
    has_fixed_size<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request>::value &&
    has_bounded_size<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response>::value
  >
{
};

template<>
struct is_service<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters>
  : std::true_type
{
};

template<>
struct is_service_request<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__ESTIMATE_ANTHROPOMETRIC_PARAMETERS__TRAITS_HPP_
