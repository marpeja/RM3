// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robominer_msgs:msg/FiducialTransform.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM__STRUCT_H_
#define ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM__STRUCT_H_

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

// Struct defined in msg/FiducialTransform in the package robominer_msgs.
typedef struct robominer_msgs__msg__FiducialTransform
{
  int32_t fiducial_id;
  geometry_msgs__msg__Transform transform;
  double image_error;
  double object_error;
  double fiducial_area;
} robominer_msgs__msg__FiducialTransform;

// Struct for a sequence of robominer_msgs__msg__FiducialTransform.
typedef struct robominer_msgs__msg__FiducialTransform__Sequence
{
  robominer_msgs__msg__FiducialTransform * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robominer_msgs__msg__FiducialTransform__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM__STRUCT_H_
