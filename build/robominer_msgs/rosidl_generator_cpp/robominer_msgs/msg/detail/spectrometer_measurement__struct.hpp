// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robominer_msgs:msg/SpectrometerMeasurement.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_MEASUREMENT__STRUCT_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_MEASUREMENT__STRUCT_HPP_

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
// Member 'orientation'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robominer_msgs__msg__SpectrometerMeasurement __attribute__((deprecated))
#else
# define DEPRECATED__robominer_msgs__msg__SpectrometerMeasurement __declspec(deprecated)
#endif

namespace robominer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpectrometerMeasurement_
{
  using Type = SpectrometerMeasurement_<ContainerAllocator>;

  explicit SpectrometerMeasurement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    orientation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exposure_time = 0;
      std::fill<typename std::array<uint16_t, 288>::iterator, uint16_t>(this->spectrum.begin(), this->spectrum.end(), 0);
    }
  }

  explicit SpectrometerMeasurement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    orientation(_alloc, _init),
    spectrum(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exposure_time = 0;
      std::fill<typename std::array<uint16_t, 288>::iterator, uint16_t>(this->spectrum.begin(), this->spectrum.end(), 0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _orientation_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _orientation_type orientation;
  using _exposure_time_type =
    uint16_t;
  _exposure_time_type exposure_time;
  using _spectrum_type =
    std::array<uint16_t, 288>;
  _spectrum_type spectrum;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__exposure_time(
    const uint16_t & _arg)
  {
    this->exposure_time = _arg;
    return *this;
  }
  Type & set__spectrum(
    const std::array<uint16_t, 288> & _arg)
  {
    this->spectrum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robominer_msgs::msg::SpectrometerMeasurement_<ContainerAllocator> *;
  using ConstRawPtr =
    const robominer_msgs::msg::SpectrometerMeasurement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robominer_msgs::msg::SpectrometerMeasurement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robominer_msgs::msg::SpectrometerMeasurement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robominer_msgs::msg::SpectrometerMeasurement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robominer_msgs::msg::SpectrometerMeasurement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robominer_msgs::msg::SpectrometerMeasurement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robominer_msgs::msg::SpectrometerMeasurement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robominer_msgs::msg::SpectrometerMeasurement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robominer_msgs::msg::SpectrometerMeasurement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robominer_msgs__msg__SpectrometerMeasurement
    std::shared_ptr<robominer_msgs::msg::SpectrometerMeasurement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robominer_msgs__msg__SpectrometerMeasurement
    std::shared_ptr<robominer_msgs::msg::SpectrometerMeasurement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpectrometerMeasurement_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->exposure_time != other.exposure_time) {
      return false;
    }
    if (this->spectrum != other.spectrum) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpectrometerMeasurement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpectrometerMeasurement_

// alias to use template instance with default allocator
using SpectrometerMeasurement =
  robominer_msgs::msg::SpectrometerMeasurement_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_MEASUREMENT__STRUCT_HPP_
