// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_swiss_knife_msgs:srv/GetFluentAssertions.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_FLUENT_ASSERTIONS__TRAITS_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_FLUENT_ASSERTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_swiss_knife_msgs/srv/detail/get_fluent_assertions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_swiss_knife_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFluentAssertions_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFluentAssertions_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFluentAssertions_Request & msg, bool use_flow_style = false)
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
  const robot_swiss_knife_msgs::srv::GetFluentAssertions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_swiss_knife_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_swiss_knife_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_swiss_knife_msgs::srv::GetFluentAssertions_Request & msg)
{
  return robot_swiss_knife_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::GetFluentAssertions_Request>()
{
  return "robot_swiss_knife_msgs::srv::GetFluentAssertions_Request";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::GetFluentAssertions_Request>()
{
  return "robot_swiss_knife_msgs/srv/GetFluentAssertions_Request";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::GetFluentAssertions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::GetFluentAssertions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_swiss_knife_msgs::srv::GetFluentAssertions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'fluents'
#include "robot_swiss_knife_msgs/msg/detail/fluent__traits.hpp"

namespace robot_swiss_knife_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFluentAssertions_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: fluents
  {
    if (msg.fluents.size() == 0) {
      out << "fluents: []";
    } else {
      out << "fluents: [";
      size_t pending_items = msg.fluents.size();
      for (auto item : msg.fluents) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFluentAssertions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fluents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fluents.size() == 0) {
      out << "fluents: []\n";
    } else {
      out << "fluents:\n";
      for (auto item : msg.fluents) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFluentAssertions_Response & msg, bool use_flow_style = false)
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
  const robot_swiss_knife_msgs::srv::GetFluentAssertions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_swiss_knife_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_swiss_knife_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_swiss_knife_msgs::srv::GetFluentAssertions_Response & msg)
{
  return robot_swiss_knife_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::GetFluentAssertions_Response>()
{
  return "robot_swiss_knife_msgs::srv::GetFluentAssertions_Response";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::GetFluentAssertions_Response>()
{
  return "robot_swiss_knife_msgs/srv/GetFluentAssertions_Response";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::GetFluentAssertions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::GetFluentAssertions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_swiss_knife_msgs::srv::GetFluentAssertions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::GetFluentAssertions>()
{
  return "robot_swiss_knife_msgs::srv::GetFluentAssertions";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::GetFluentAssertions>()
{
  return "robot_swiss_knife_msgs/srv/GetFluentAssertions";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::GetFluentAssertions>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_swiss_knife_msgs::srv::GetFluentAssertions_Request>::value &&
    has_fixed_size<robot_swiss_knife_msgs::srv::GetFluentAssertions_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::GetFluentAssertions>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_swiss_knife_msgs::srv::GetFluentAssertions_Request>::value &&
    has_bounded_size<robot_swiss_knife_msgs::srv::GetFluentAssertions_Response>::value
  >
{
};

template<>
struct is_service<robot_swiss_knife_msgs::srv::GetFluentAssertions>
  : std::true_type
{
};

template<>
struct is_service_request<robot_swiss_knife_msgs::srv::GetFluentAssertions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_swiss_knife_msgs::srv::GetFluentAssertions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_FLUENT_ASSERTIONS__TRAITS_HPP_
