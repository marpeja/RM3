// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robominer_msgs:msg/MotorModuleFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_FEEDBACK__STRUCT_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_FEEDBACK__STRUCT_HPP_

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
# define DEPRECATED__robominer_msgs__msg__MotorModuleFeedback __attribute__((deprecated))
#else
# define DEPRECATED__robominer_msgs__msg__MotorModuleFeedback __declspec(deprecated)
#endif

namespace robominer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorModuleFeedback_
{
  using Type = MotorModuleFeedback_<ContainerAllocator>;

  explicit MotorModuleFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = "";
      this->motor_rpm = 0.0f;
      this->motor_current_ma = 0.0f;
      this->motor_voltage_v = 0.0f;
    }
  }

  explicit MotorModuleFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    motor_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = "";
      this->motor_rpm = 0.0f;
      this->motor_current_ma = 0.0f;
      this->motor_voltage_v = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _motor_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _motor_id_type motor_id;
  using _motor_rpm_type =
    float;
  _motor_rpm_type motor_rpm;
  using _motor_current_ma_type =
    float;
  _motor_current_ma_type motor_current_ma;
  using _motor_voltage_v_type =
    float;
  _motor_voltage_v_type motor_voltage_v;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__motor_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__motor_rpm(
    const float & _arg)
  {
    this->motor_rpm = _arg;
    return *this;
  }
  Type & set__motor_current_ma(
    const float & _arg)
  {
    this->motor_current_ma = _arg;
    return *this;
  }
  Type & set__motor_voltage_v(
    const float & _arg)
  {
    this->motor_voltage_v = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robominer_msgs::msg::MotorModuleFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const robominer_msgs::msg::MotorModuleFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robominer_msgs::msg::MotorModuleFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robominer_msgs::msg::MotorModuleFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robominer_msgs::msg::MotorModuleFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robominer_msgs::msg::MotorModuleFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robominer_msgs::msg::MotorModuleFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robominer_msgs::msg::MotorModuleFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robominer_msgs::msg::MotorModuleFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robominer_msgs::msg::MotorModuleFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robominer_msgs__msg__MotorModuleFeedback
    std::shared_ptr<robominer_msgs::msg::MotorModuleFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robominer_msgs__msg__MotorModuleFeedback
    std::shared_ptr<robominer_msgs::msg::MotorModuleFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorModuleFeedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->motor_rpm != other.motor_rpm) {
      return false;
    }
    if (this->motor_current_ma != other.motor_current_ma) {
      return false;
    }
    if (this->motor_voltage_v != other.motor_voltage_v) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorModuleFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorModuleFeedback_

// alias to use template instance with default allocator
using MotorModuleFeedback =
  robominer_msgs::msg::MotorModuleFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_FEEDBACK__STRUCT_HPP_
