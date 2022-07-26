// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robominer_msgs:msg/FiducialTransformArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM_ARRAY__TRAITS_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM_ARRAY__TRAITS_HPP_

#include "robominer_msgs/msg/detail/fiducial_transform_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robominer_msgs::msg::FiducialTransformArray>()
{
  return "robominer_msgs::msg::FiducialTransformArray";
}

template<>
inline const char * name<robominer_msgs::msg::FiducialTransformArray>()
{
  return "robominer_msgs/msg/FiducialTransformArray";
}

template<>
struct has_fixed_size<robominer_msgs::msg::FiducialTransformArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robominer_msgs::msg::FiducialTransformArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robominer_msgs::msg::FiducialTransformArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM_ARRAY__TRAITS_HPP_
