// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_swiss_knife_msgs:msg/Fluent.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__FLUENT__STRUCT_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__FLUENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'params'
#include "robot_swiss_knife_msgs/msg/detail/knowledge_item__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_swiss_knife_msgs__msg__Fluent __attribute__((deprecated))
#else
# define DEPRECATED__robot_swiss_knife_msgs__msg__Fluent __declspec(deprecated)
#endif

namespace robot_swiss_knife_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Fluent_
{
  using Type = Fluent_<ContainerAllocator>;

  explicit Fluent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->value = "";
    }
  }

  explicit Fluent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->value = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _params_type =
    std::vector<robot_swiss_knife_msgs::msg::KnowledgeItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_swiss_knife_msgs::msg::KnowledgeItem_<ContainerAllocator>>>;
  _params_type params;
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__params(
    const std::vector<robot_swiss_knife_msgs::msg::KnowledgeItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_swiss_knife_msgs::msg::KnowledgeItem_<ContainerAllocator>>> & _arg)
  {
    this->params = _arg;
    return *this;
  }
  Type & set__value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_swiss_knife_msgs::msg::Fluent_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_swiss_knife_msgs::msg::Fluent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::msg::Fluent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::msg::Fluent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::msg::Fluent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::msg::Fluent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::msg::Fluent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::msg::Fluent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::msg::Fluent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::msg::Fluent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_swiss_knife_msgs__msg__Fluent
    std::shared_ptr<robot_swiss_knife_msgs::msg::Fluent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_swiss_knife_msgs__msg__Fluent
    std::shared_ptr<robot_swiss_knife_msgs::msg::Fluent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fluent_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->params != other.params) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fluent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fluent_

// alias to use template instance with default allocator
using Fluent =
  robot_swiss_knife_msgs::msg::Fluent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__FLUENT__STRUCT_HPP_
