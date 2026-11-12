// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_swiss_knife_msgs:msg/ObjectView.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT_VIEW__STRUCT_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT_VIEW__STRUCT_HPP_

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
// Member 'mask'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'point_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_swiss_knife_msgs__msg__ObjectView __attribute__((deprecated))
#else
# define DEPRECATED__robot_swiss_knife_msgs__msg__ObjectView __declspec(deprecated)
#endif

namespace robot_swiss_knife_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectView_
{
  using Type = ObjectView_<ContainerAllocator>;

  explicit ObjectView_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init),
    mask(_init),
    point_cloud(_init)
  {
    (void)_init;
  }

  explicit ObjectView_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init),
    mask(_alloc, _init),
    point_cloud(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _mask_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _mask_type mask;
  using _point_cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _point_cloud_type point_cloud;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__mask(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->mask = _arg;
    return *this;
  }
  Type & set__point_cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->point_cloud = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_swiss_knife_msgs::msg::ObjectView_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_swiss_knife_msgs::msg::ObjectView_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::msg::ObjectView_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::msg::ObjectView_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::msg::ObjectView_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::msg::ObjectView_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::msg::ObjectView_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::msg::ObjectView_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::msg::ObjectView_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::msg::ObjectView_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_swiss_knife_msgs__msg__ObjectView
    std::shared_ptr<robot_swiss_knife_msgs::msg::ObjectView_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_swiss_knife_msgs__msg__ObjectView
    std::shared_ptr<robot_swiss_knife_msgs::msg::ObjectView_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectView_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    if (this->mask != other.mask) {
      return false;
    }
    if (this->point_cloud != other.point_cloud) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectView_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectView_

// alias to use template instance with default allocator
using ObjectView =
  robot_swiss_knife_msgs::msg::ObjectView_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT_VIEW__STRUCT_HPP_
