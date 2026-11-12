// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_swiss_knife_msgs:srv/ExtractROI3DPoints.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__EXTRACT_ROI3_D_POINTS__STRUCT_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__EXTRACT_ROI3_D_POINTS__STRUCT_HPP_

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
// Member 'objects'
#include "robot_swiss_knife_msgs/msg/detail/object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request __declspec(deprecated)
#endif

namespace robot_swiss_knife_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExtractROI3DPoints_Request_
{
  using Type = ExtractROI3DPoints_Request_<ContainerAllocator>;

  explicit ExtractROI3DPoints_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point_cloud(_init)
  {
    (void)_init;
  }

  explicit ExtractROI3DPoints_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point_cloud(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _point_cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _point_cloud_type point_cloud;
  using _objects_type =
    std::vector<robot_swiss_knife_msgs::msg::Object_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_swiss_knife_msgs::msg::Object_<ContainerAllocator>>>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__point_cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->point_cloud = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<robot_swiss_knife_msgs::msg::Object_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_swiss_knife_msgs::msg::Object_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request
    std::shared_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request
    std::shared_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExtractROI3DPoints_Request_ & other) const
  {
    if (this->point_cloud != other.point_cloud) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExtractROI3DPoints_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExtractROI3DPoints_Request_

// alias to use template instance with default allocator
using ExtractROI3DPoints_Request =
  robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_swiss_knife_msgs


// Include directives for member types
// Member 'objects'
// already included above
// #include "robot_swiss_knife_msgs/msg/detail/object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response __declspec(deprecated)
#endif

namespace robot_swiss_knife_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExtractROI3DPoints_Response_
{
  using Type = ExtractROI3DPoints_Response_<ContainerAllocator>;

  explicit ExtractROI3DPoints_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ExtractROI3DPoints_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _objects_type =
    std::vector<robot_swiss_knife_msgs::msg::Object_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_swiss_knife_msgs::msg::Object_<ContainerAllocator>>>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__objects(
    const std::vector<robot_swiss_knife_msgs::msg::Object_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_swiss_knife_msgs::msg::Object_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response
    std::shared_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response
    std::shared_ptr<robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExtractROI3DPoints_Response_ & other) const
  {
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExtractROI3DPoints_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExtractROI3DPoints_Response_

// alias to use template instance with default allocator
using ExtractROI3DPoints_Response =
  robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_swiss_knife_msgs

namespace robot_swiss_knife_msgs
{

namespace srv
{

struct ExtractROI3DPoints
{
  using Request = robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request;
  using Response = robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response;
};

}  // namespace srv

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__EXTRACT_ROI3_D_POINTS__STRUCT_HPP_
