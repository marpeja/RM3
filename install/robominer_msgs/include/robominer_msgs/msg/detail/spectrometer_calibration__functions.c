// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robominer_msgs:msg/SpectrometerCalibration.idl
// generated code does not contain a copyright notice
#include "robominer_msgs/msg/detail/spectrometer_calibration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
robominer_msgs__msg__SpectrometerCalibration__init(robominer_msgs__msg__SpectrometerCalibration * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robominer_msgs__msg__SpectrometerCalibration__fini(msg);
    return false;
  }
  // parameters
  return true;
}

void
robominer_msgs__msg__SpectrometerCalibration__fini(robominer_msgs__msg__SpectrometerCalibration * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // parameters
}

robominer_msgs__msg__SpectrometerCalibration *
robominer_msgs__msg__SpectrometerCalibration__create()
{
  robominer_msgs__msg__SpectrometerCalibration * msg = (robominer_msgs__msg__SpectrometerCalibration *)malloc(sizeof(robominer_msgs__msg__SpectrometerCalibration));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robominer_msgs__msg__SpectrometerCalibration));
  bool success = robominer_msgs__msg__SpectrometerCalibration__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robominer_msgs__msg__SpectrometerCalibration__destroy(robominer_msgs__msg__SpectrometerCalibration * msg)
{
  if (msg) {
    robominer_msgs__msg__SpectrometerCalibration__fini(msg);
  }
  free(msg);
}


bool
robominer_msgs__msg__SpectrometerCalibration__Sequence__init(robominer_msgs__msg__SpectrometerCalibration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robominer_msgs__msg__SpectrometerCalibration * data = NULL;
  if (size) {
    data = (robominer_msgs__msg__SpectrometerCalibration *)calloc(size, sizeof(robominer_msgs__msg__SpectrometerCalibration));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robominer_msgs__msg__SpectrometerCalibration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robominer_msgs__msg__SpectrometerCalibration__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robominer_msgs__msg__SpectrometerCalibration__Sequence__fini(robominer_msgs__msg__SpectrometerCalibration__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robominer_msgs__msg__SpectrometerCalibration__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robominer_msgs__msg__SpectrometerCalibration__Sequence *
robominer_msgs__msg__SpectrometerCalibration__Sequence__create(size_t size)
{
  robominer_msgs__msg__SpectrometerCalibration__Sequence * array = (robominer_msgs__msg__SpectrometerCalibration__Sequence *)malloc(sizeof(robominer_msgs__msg__SpectrometerCalibration__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robominer_msgs__msg__SpectrometerCalibration__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robominer_msgs__msg__SpectrometerCalibration__Sequence__destroy(robominer_msgs__msg__SpectrometerCalibration__Sequence * array)
{
  if (array) {
    robominer_msgs__msg__SpectrometerCalibration__Sequence__fini(array);
  }
  free(array);
}
