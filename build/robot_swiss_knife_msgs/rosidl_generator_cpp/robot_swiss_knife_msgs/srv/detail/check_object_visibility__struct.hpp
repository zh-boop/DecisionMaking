// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_swiss_knife_msgs:srv/CheckObjectVisibility.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CHECK_OBJECT_VISIBILITY__STRUCT_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CHECK_OBJECT_VISIBILITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request __declspec(deprecated)
#endif

namespace robot_swiss_knife_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckObjectVisibility_Request_
{
  using Type = CheckObjectVisibility_Request_<ContainerAllocator>;

  explicit CheckObjectVisibility_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit CheckObjectVisibility_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _object_categories_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _object_categories_type object_categories;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__object_categories(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->object_categories = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request
    std::shared_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request
    std::shared_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckObjectVisibility_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    if (this->object_categories != other.object_categories) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckObjectVisibility_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckObjectVisibility_Request_

// alias to use template instance with default allocator
using CheckObjectVisibility_Request =
  robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_swiss_knife_msgs


#ifndef _WIN32
# define DEPRECATED__robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response __declspec(deprecated)
#endif

namespace robot_swiss_knife_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckObjectVisibility_Response_
{
  using Type = CheckObjectVisibility_Response_<ContainerAllocator>;

  explicit CheckObjectVisibility_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CheckObjectVisibility_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _objects_visible_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _objects_visible_type objects_visible;

  // setters for named parameter idiom
  Type & set__objects_visible(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->objects_visible = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response
    std::shared_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response
    std::shared_ptr<robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckObjectVisibility_Response_ & other) const
  {
    if (this->objects_visible != other.objects_visible) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckObjectVisibility_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckObjectVisibility_Response_

// alias to use template instance with default allocator
using CheckObjectVisibility_Response =
  robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_swiss_knife_msgs

namespace robot_swiss_knife_msgs
{

namespace srv
{

struct CheckObjectVisibility
{
  using Request = robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request;
  using Response = robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response;
};

}  // namespace srv

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CHECK_OBJECT_VISIBILITY__STRUCT_HPP_
