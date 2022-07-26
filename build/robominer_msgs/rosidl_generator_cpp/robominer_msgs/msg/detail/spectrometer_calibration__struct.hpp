// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robominer_msgs:msg/SpectrometerCalibration.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_CALIBRATION__STRUCT_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_CALIBRATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robominer_msgs__msg__SpectrometerCalibration __attribute__((deprecated))
#else
# define DEPRECATED__robominer_msgs__msg__SpectrometerCalibration __declspec(deprecated)
#endif

namespace robominer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpectrometerCalibration_
{
  using Type = SpectrometerCalibration_<ContainerAllocator>;

  explicit SpectrometerCalibration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 5>::iterator, float>(this->parameters.begin(), this->parameters.end(), 0.0f);
    }
  }

  explicit SpectrometerCalibration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    parameters(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 5>::iterator, float>(this->parameters.begin(), this->parameters.end(), 0.0f);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _parameters_type =
    std::array<float, 5>;
  _parameters_type parameters;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__parameters(
    const std::array<float, 5> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robominer_msgs::msg::SpectrometerCalibration_<ContainerAllocator> *;
  using ConstRawPtr =
    const robominer_msgs::msg::SpectrometerCalibration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robominer_msgs::msg::SpectrometerCalibration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robominer_msgs::msg::SpectrometerCalibration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robominer_msgs::msg::SpectrometerCalibration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robominer_msgs::msg::SpectrometerCalibration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robominer_msgs::msg::SpectrometerCalibration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robominer_msgs::msg::SpectrometerCalibration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robominer_msgs::msg::SpectrometerCalibration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robominer_msgs::msg::SpectrometerCalibration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robominer_msgs__msg__SpectrometerCalibration
    std::shared_ptr<robominer_msgs::msg::SpectrometerCalibration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robominer_msgs__msg__SpectrometerCalibration
    std::shared_ptr<robominer_msgs::msg::SpectrometerCalibration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpectrometerCalibration_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpectrometerCalibration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpectrometerCalibration_

// alias to use template instance with default allocator
using SpectrometerCalibration =
  robominer_msgs::msg::SpectrometerCalibration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_CALIBRATION__STRUCT_HPP_
