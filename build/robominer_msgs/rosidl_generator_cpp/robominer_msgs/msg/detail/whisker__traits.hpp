// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robominer_msgs:msg/Whisker.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__WHISKER__TRAITS_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__WHISKER__TRAITS_HPP_

#include "robominer_msgs/msg/detail/whisker__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pos'
#include "robominer_msgs/msg/detail/whisker_pos_in_grid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robominer_msgs::msg::Whisker>()
{
  return "robominer_msgs::msg::Whisker";
}

template<>
inline const char * name<robominer_msgs::msg::Whisker>()
{
  return "robominer_msgs/msg/Whisker";
}

template<>
struct has_fixed_size<robominer_msgs::msg::Whisker>
  : std::integral_constant<bool, has_fixed_size<robominer_msgs::msg::WhiskerPosInGrid>::value> {};

template<>
struct has_bounded_size<robominer_msgs::msg::Whisker>
  : std::integral_constant<bool, has_bounded_size<robominer_msgs::msg::WhiskerPosInGrid>::value> {};

template<>
struct is_message<robominer_msgs::msg::Whisker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMINER_MSGS__MSG__DETAIL__WHISKER__TRAITS_HPP_
