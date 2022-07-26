// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robominer_msgs:msg/WhiskerPosInGrid.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__WHISKER_POS_IN_GRID__TRAITS_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__WHISKER_POS_IN_GRID__TRAITS_HPP_

#include "robominer_msgs/msg/detail/whisker_pos_in_grid__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robominer_msgs::msg::WhiskerPosInGrid>()
{
  return "robominer_msgs::msg::WhiskerPosInGrid";
}

template<>
inline const char * name<robominer_msgs::msg::WhiskerPosInGrid>()
{
  return "robominer_msgs/msg/WhiskerPosInGrid";
}

template<>
struct has_fixed_size<robominer_msgs::msg::WhiskerPosInGrid>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robominer_msgs::msg::WhiskerPosInGrid>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robominer_msgs::msg::WhiskerPosInGrid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMINER_MSGS__MSG__DETAIL__WHISKER_POS_IN_GRID__TRAITS_HPP_
