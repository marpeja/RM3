// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_ros:srv/GetNodeData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__GET_NODE_DATA__TRAITS_HPP_
#define RTABMAP_ROS__SRV__DETAIL__GET_NODE_DATA__TRAITS_HPP_

#include "rtabmap_ros/srv/detail/get_node_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_ros::srv::GetNodeData_Request>()
{
  return "rtabmap_ros::srv::GetNodeData_Request";
}

template<>
inline const char * name<rtabmap_ros::srv::GetNodeData_Request>()
{
  return "rtabmap_ros/srv/GetNodeData_Request";
}

template<>
struct has_fixed_size<rtabmap_ros::srv::GetNodeData_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_ros::srv::GetNodeData_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_ros::srv::GetNodeData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_ros::srv::GetNodeData_Response>()
{
  return "rtabmap_ros::srv::GetNodeData_Response";
}

template<>
inline const char * name<rtabmap_ros::srv::GetNodeData_Response>()
{
  return "rtabmap_ros/srv/GetNodeData_Response";
}

template<>
struct has_fixed_size<rtabmap_ros::srv::GetNodeData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_ros::srv::GetNodeData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_ros::srv::GetNodeData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_ros::srv::GetNodeData>()
{
  return "rtabmap_ros::srv::GetNodeData";
}

template<>
inline const char * name<rtabmap_ros::srv::GetNodeData>()
{
  return "rtabmap_ros/srv/GetNodeData";
}

template<>
struct has_fixed_size<rtabmap_ros::srv::GetNodeData>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_ros::srv::GetNodeData_Request>::value &&
    has_fixed_size<rtabmap_ros::srv::GetNodeData_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_ros::srv::GetNodeData>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_ros::srv::GetNodeData_Request>::value &&
    has_bounded_size<rtabmap_ros::srv::GetNodeData_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_ros::srv::GetNodeData>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_ros::srv::GetNodeData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_ros::srv::GetNodeData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_ROS__SRV__DETAIL__GET_NODE_DATA__TRAITS_HPP_
