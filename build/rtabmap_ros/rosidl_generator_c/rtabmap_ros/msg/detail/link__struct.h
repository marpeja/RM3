// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_ros:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__LINK__STRUCT_H_
#define RTABMAP_ROS__MSG__DETAIL__LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__struct.h"

// Struct defined in msg/Link in the package rtabmap_ros.
typedef struct rtabmap_ros__msg__Link
{
  int32_t from_id;
  int32_t to_id;
  int32_t type;
  geometry_msgs__msg__Transform transform;
  double information[36];
} rtabmap_ros__msg__Link;

// Struct for a sequence of rtabmap_ros__msg__Link.
typedef struct rtabmap_ros__msg__Link__Sequence
{
  rtabmap_ros__msg__Link * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__msg__Link__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_ROS__MSG__DETAIL__LINK__STRUCT_H_
