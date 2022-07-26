// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robominer_msgs:msg/FiducialTransform.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM__TRAITS_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM__TRAITS_HPP_

#include "robominer_msgs/msg/detail/fiducial_transform__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robominer_msgs::msg::FiducialTransform>()
{
  return "robominer_msgs::msg::FiducialTransform";
}

template<>
inline const char * name<robominer_msgs::msg::FiducialTransform>()
{
  return "robominer_msgs/msg/FiducialTransform";
}

template<>
struct has_fixed_size<robominer_msgs::msg::FiducialTransform>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Transform>::value> {};

template<>
struct has_bounded_size<robominer_msgs::msg::FiducialTransform>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Transform>::value> {};

template<>
struct is_message<robominer_msgs::msg::FiducialTransform>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM__TRAITS_HPP_
