// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_swiss_knife_msgs:srv/CalculatePoseFromCloud.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CALCULATE_POSE_FROM_CLOUD__STRUCT_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CALCULATE_POSE_FROM_CLOUD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'point_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request __declspec(deprecated)
#endif

namespace robot_swiss_knife_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalculatePoseFromCloud_Request_
{
  using Type = CalculatePoseFromCloud_Request_<ContainerAllocator>;

  explicit CalculatePoseFromCloud_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point_cloud(_init)
  {
    (void)_init;
  }

  explicit CalculatePoseFromCloud_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point_cloud(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _point_cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _point_cloud_type point_cloud;

  // setters for named parameter idiom
  Type & set__point_cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->point_cloud = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request
    std::shared_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request
    std::shared_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalculatePoseFromCloud_Request_ & other) const
  {
    if (this->point_cloud != other.point_cloud) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalculatePoseFromCloud_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalculatePoseFromCloud_Request_

// alias to use template instance with default allocator
using CalculatePoseFromCloud_Request =
  robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_swiss_knife_msgs


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response __declspec(deprecated)
#endif

namespace robot_swiss_knife_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalculatePoseFromCloud_Response_
{
  using Type = CalculatePoseFromCloud_Response_<ContainerAllocator>;

  explicit CalculatePoseFromCloud_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calculation_successful = false;
    }
  }

  explicit CalculatePoseFromCloud_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calculation_successful = false;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;
  using _calculation_successful_type =
    bool;
  _calculation_successful_type calculation_successful;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__calculation_successful(
    const bool & _arg)
  {
    this->calculation_successful = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response
    std::shared_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response
    std::shared_ptr<robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalculatePoseFromCloud_Response_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->calculation_successful != other.calculation_successful) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalculatePoseFromCloud_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalculatePoseFromCloud_Response_

// alias to use template instance with default allocator
using CalculatePoseFromCloud_Response =
  robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_swiss_knife_msgs

namespace robot_swiss_knife_msgs
{

namespace srv
{

struct CalculatePoseFromCloud
{
  using Request = robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request;
  using Response = robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response;
};

}  // namespace srv

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CALCULATE_POSE_FROM_CLOUD__STRUCT_HPP_
