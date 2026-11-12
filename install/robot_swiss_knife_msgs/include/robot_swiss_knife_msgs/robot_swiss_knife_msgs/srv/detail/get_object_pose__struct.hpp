// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_swiss_knife_msgs:srv/GetObjectPose.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_OBJECT_POSE__STRUCT_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_OBJECT_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_swiss_knife_msgs__srv__GetObjectPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_swiss_knife_msgs__srv__GetObjectPose_Request __declspec(deprecated)
#endif

namespace robot_swiss_knife_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetObjectPose_Request_
{
  using Type = GetObjectPose_Request_<ContainerAllocator>;

  explicit GetObjectPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_category = "";
    }
  }

  explicit GetObjectPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_category(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_category = "";
    }
  }

  // field types and members
  using _object_category_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_category_type object_category;

  // setters for named parameter idiom
  Type & set__object_category(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_category = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_swiss_knife_msgs::srv::GetObjectPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_swiss_knife_msgs::srv::GetObjectPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::GetObjectPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::GetObjectPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__GetObjectPose_Request
    std::shared_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__GetObjectPose_Request
    std::shared_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetObjectPose_Request_ & other) const
  {
    if (this->object_category != other.object_category) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetObjectPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetObjectPose_Request_

// alias to use template instance with default allocator
using GetObjectPose_Request =
  robot_swiss_knife_msgs::srv::GetObjectPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_swiss_knife_msgs


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_swiss_knife_msgs__srv__GetObjectPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_swiss_knife_msgs__srv__GetObjectPose_Response __declspec(deprecated)
#endif

namespace robot_swiss_knife_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetObjectPose_Response_
{
  using Type = GetObjectPose_Response_<ContainerAllocator>;

  explicit GetObjectPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracking_state = "";
      this->success = false;
    }
  }

  explicit GetObjectPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    tracking_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracking_state = "";
      this->success = false;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;
  using _tracking_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tracking_state_type tracking_state;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__tracking_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tracking_state = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_swiss_knife_msgs::srv::GetObjectPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_swiss_knife_msgs::srv::GetObjectPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::GetObjectPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::GetObjectPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__GetObjectPose_Response
    std::shared_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__GetObjectPose_Response
    std::shared_ptr<robot_swiss_knife_msgs::srv::GetObjectPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetObjectPose_Response_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->tracking_state != other.tracking_state) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetObjectPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetObjectPose_Response_

// alias to use template instance with default allocator
using GetObjectPose_Response =
  robot_swiss_knife_msgs::srv::GetObjectPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_swiss_knife_msgs

namespace robot_swiss_knife_msgs
{

namespace srv
{

struct GetObjectPose
{
  using Request = robot_swiss_knife_msgs::srv::GetObjectPose_Request;
  using Response = robot_swiss_knife_msgs::srv::GetObjectPose_Response;
};

}  // namespace srv

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_OBJECT_POSE__STRUCT_HPP_
