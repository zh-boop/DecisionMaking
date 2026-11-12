// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_swiss_knife_msgs:srv/CheckObjectVisibility.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CHECK_OBJECT_VISIBILITY__TRAITS_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CHECK_OBJECT_VISIBILITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_swiss_knife_msgs/srv/detail/check_object_visibility__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace robot_swiss_knife_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckObjectVisibility_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: object_categories
  {
    if (msg.object_categories.size() == 0) {
      out << "object_categories: []";
    } else {
      out << "object_categories: [";
      size_t pending_items = msg.object_categories.size();
      for (auto item : msg.object_categories) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const CheckObjectVisibility_Request & msg,
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

  // member: object_categories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_categories.size() == 0) {
      out << "object_categories: []\n";
    } else {
      out << "object_categories:\n";
      for (auto item : msg.object_categories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckObjectVisibility_Request & msg, bool use_flow_style = false)
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
  const robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_swiss_knife_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_swiss_knife_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request & msg)
{
  return robot_swiss_knife_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request>()
{
  return "robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request>()
{
  return "robot_swiss_knife_msgs/srv/CheckObjectVisibility_Request";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_swiss_knife_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckObjectVisibility_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: objects_visible
  {
    if (msg.objects_visible.size() == 0) {
      out << "objects_visible: []";
    } else {
      out << "objects_visible: [";
      size_t pending_items = msg.objects_visible.size();
      for (auto item : msg.objects_visible) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const CheckObjectVisibility_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: objects_visible
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects_visible.size() == 0) {
      out << "objects_visible: []\n";
    } else {
      out << "objects_visible:\n";
      for (auto item : msg.objects_visible) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckObjectVisibility_Response & msg, bool use_flow_style = false)
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
  const robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_swiss_knife_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_swiss_knife_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response & msg)
{
  return robot_swiss_knife_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response>()
{
  return "robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response>()
{
  return "robot_swiss_knife_msgs/srv/CheckObjectVisibility_Response";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_swiss_knife_msgs::srv::CheckObjectVisibility>()
{
  return "robot_swiss_knife_msgs::srv::CheckObjectVisibility";
}

template<>
inline const char * name<robot_swiss_knife_msgs::srv::CheckObjectVisibility>()
{
  return "robot_swiss_knife_msgs/srv/CheckObjectVisibility";
}

template<>
struct has_fixed_size<robot_swiss_knife_msgs::srv::CheckObjectVisibility>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request>::value &&
    has_fixed_size<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_swiss_knife_msgs::srv::CheckObjectVisibility>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request>::value &&
    has_bounded_size<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response>::value
  >
{
};

template<>
struct is_service<robot_swiss_knife_msgs::srv::CheckObjectVisibility>
  : std::true_type
{
};

template<>
struct is_service_request<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CHECK_OBJECT_VISIBILITY__TRAITS_HPP_
