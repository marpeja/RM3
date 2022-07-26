// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robominer_msgs:msg/SpectrometerMeasurement.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_MEASUREMENT__STRUCT_H_
#define ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_MEASUREMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/SpectrometerMeasurement in the package robominer_msgs.
typedef struct robominer_msgs__msg__SpectrometerMeasurement
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 orientation;
  uint16_t exposure_time;
  uint16_t spectrum[288];
} robominer_msgs__msg__SpectrometerMeasurement;

// Struct for a sequence of robominer_msgs__msg__SpectrometerMeasurement.
typedef struct robominer_msgs__msg__SpectrometerMeasurement__Sequence
{
  robominer_msgs__msg__SpectrometerMeasurement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robominer_msgs__msg__SpectrometerMeasurement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_MEASUREMENT__STRUCT_H_
