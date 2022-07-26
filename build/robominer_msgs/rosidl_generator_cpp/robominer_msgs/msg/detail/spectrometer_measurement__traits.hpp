// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robominer_msgs:msg/SpectrometerMeasurement.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_MEASUREMENT__TRAITS_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_MEASUREMENT__TRAITS_HPP_

#include "robominer_msgs/msg/detail/spectrometer_measurement__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robominer_msgs::msg::SpectrometerMeasurement>()
{
  return "robominer_msgs::msg::SpectrometerMeasurement";
}

template<>
inline const char * name<robominer_msgs::msg::SpectrometerMeasurement>()
{
  return "robominer_msgs/msg/SpectrometerMeasurement";
}

template<>
struct has_fixed_size<robominer_msgs::msg::SpectrometerMeasurement>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<robominer_msgs::msg::SpectrometerMeasurement>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<robominer_msgs::msg::SpectrometerMeasurement>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_MEASUREMENT__TRAITS_HPP_
