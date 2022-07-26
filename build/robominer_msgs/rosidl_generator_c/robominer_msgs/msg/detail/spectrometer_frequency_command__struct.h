// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robominer_msgs:msg/SpectrometerFrequencyCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_FREQUENCY_COMMAND__STRUCT_H_
#define ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_FREQUENCY_COMMAND__STRUCT_H_

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

// Struct defined in msg/SpectrometerFrequencyCommand in the package robominer_msgs.
typedef struct robominer_msgs__msg__SpectrometerFrequencyCommand
{
  std_msgs__msg__Header header;
  float frequency;
} robominer_msgs__msg__SpectrometerFrequencyCommand;

// Struct for a sequence of robominer_msgs__msg__SpectrometerFrequencyCommand.
typedef struct robominer_msgs__msg__SpectrometerFrequencyCommand__Sequence
{
  robominer_msgs__msg__SpectrometerFrequencyCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robominer_msgs__msg__SpectrometerFrequencyCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_FREQUENCY_COMMAND__STRUCT_H_
