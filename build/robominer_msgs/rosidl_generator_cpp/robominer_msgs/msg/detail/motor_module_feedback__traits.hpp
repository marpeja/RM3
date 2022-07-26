// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robominer_msgs:msg/MotorModuleFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_FEEDBACK__TRAITS_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_FEEDBACK__TRAITS_HPP_

#include "robominer_msgs/msg/detail/motor_module_feedback__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robominer_msgs::msg::MotorModuleFeedback>()
{
  return "robominer_msgs::msg::MotorModuleFeedback";
}

template<>
inline const char * name<robominer_msgs::msg::MotorModuleFeedback>()
{
  return "robominer_msgs/msg/MotorModuleFeedback";
}

template<>
struct has_fixed_size<robominer_msgs::msg::MotorModuleFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robominer_msgs::msg::MotorModuleFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robominer_msgs::msg::MotorModuleFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_FEEDBACK__TRAITS_HPP_
