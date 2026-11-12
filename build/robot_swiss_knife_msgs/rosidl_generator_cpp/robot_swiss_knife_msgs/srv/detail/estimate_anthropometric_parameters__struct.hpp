// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_swiss_knife_msgs:srv/EstimateAnthropometricParameters.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__ESTIMATE_ANTHROPOMETRIC_PARAMETERS__STRUCT_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__ESTIMATE_ANTHROPOMETRIC_PARAMETERS__STRUCT_HPP_

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
# define DEPRECATED__robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request __declspec(deprecated)
#endif

namespace robot_swiss_knife_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EstimateAnthropometricParameters_Request_
{
  using Type = EstimateAnthropometricParameters_Request_<ContainerAllocator>;

  explicit EstimateAnthropometricParameters_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit EstimateAnthropometricParameters_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request
    std::shared_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request
    std::shared_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimateAnthropometricParameters_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimateAnthropometricParameters_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimateAnthropometricParameters_Request_

// alias to use template instance with default allocator
using EstimateAnthropometricParameters_Request =
  robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_swiss_knife_msgs


#ifndef _WIN32
# define DEPRECATED__robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response __declspec(deprecated)
#endif

namespace robot_swiss_knife_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EstimateAnthropometricParameters_Response_
{
  using Type = EstimateAnthropometricParameters_Response_<ContainerAllocator>;

  explicit EstimateAnthropometricParameters_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height_cm = 0.0f;
      this->mass_kg = 0.0f;
    }
  }

  explicit EstimateAnthropometricParameters_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height_cm = 0.0f;
      this->mass_kg = 0.0f;
    }
  }

  // field types and members
  using _height_cm_type =
    float;
  _height_cm_type height_cm;
  using _mass_kg_type =
    float;
  _mass_kg_type mass_kg;

  // setters for named parameter idiom
  Type & set__height_cm(
    const float & _arg)
  {
    this->height_cm = _arg;
    return *this;
  }
  Type & set__mass_kg(
    const float & _arg)
  {
    this->mass_kg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response
    std::shared_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response
    std::shared_ptr<robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimateAnthropometricParameters_Response_ & other) const
  {
    if (this->height_cm != other.height_cm) {
      return false;
    }
    if (this->mass_kg != other.mass_kg) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimateAnthropometricParameters_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimateAnthropometricParameters_Response_

// alias to use template instance with default allocator
using EstimateAnthropometricParameters_Response =
  robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_swiss_knife_msgs

namespace robot_swiss_knife_msgs
{

namespace srv
{

struct EstimateAnthropometricParameters
{
  using Request = robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request;
  using Response = robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response;
};

}  // namespace srv

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__ESTIMATE_ANTHROPOMETRIC_PARAMETERS__STRUCT_HPP_
