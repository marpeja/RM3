// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robominer_msgs:msg/SpectrometerMeasurement.idl
// generated code does not contain a copyright notice
#include "robominer_msgs/msg/detail/spectrometer_measurement__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
robominer_msgs__msg__SpectrometerMeasurement__init(robominer_msgs__msg__SpectrometerMeasurement * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robominer_msgs__msg__SpectrometerMeasurement__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Vector3__init(&msg->orientation)) {
    robominer_msgs__msg__SpectrometerMeasurement__fini(msg);
    return false;
  }
  // exposure_time
  // spectrum
  return true;
}

void
robominer_msgs__msg__SpectrometerMeasurement__fini(robominer_msgs__msg__SpectrometerMeasurement * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // orientation
  geometry_msgs__msg__Vector3__fini(&msg->orientation);
  // exposure_time
  // spectrum
}

robominer_msgs__msg__SpectrometerMeasurement *
robominer_msgs__msg__SpectrometerMeasurement__create()
{
  robominer_msgs__msg__SpectrometerMeasurement * msg = (robominer_msgs__msg__SpectrometerMeasurement *)malloc(sizeof(robominer_msgs__msg__SpectrometerMeasurement));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robominer_msgs__msg__SpectrometerMeasurement));
  bool success = robominer_msgs__msg__SpectrometerMeasurement__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robominer_msgs__msg__SpectrometerMeasurement__destroy(robominer_msgs__msg__SpectrometerMeasurement * msg)
{
  if (msg) {
    robominer_msgs__msg__SpectrometerMeasurement__fini(msg);
  }
  free(msg);
}


bool
robominer_msgs__msg__SpectrometerMeasurement__Sequence__init(robominer_msgs__msg__SpectrometerMeasurement__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robominer_msgs__msg__SpectrometerMeasurement * data = NULL;
  if (size) {
    data = (robominer_msgs__msg__SpectrometerMeasurement *)calloc(size, sizeof(robominer_msgs__msg__SpectrometerMeasurement));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robominer_msgs__msg__SpectrometerMeasurement__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robominer_msgs__msg__SpectrometerMeasurement__fini(&data[i - 1]);
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
robominer_msgs__msg__SpectrometerMeasurement__Sequence__fini(robominer_msgs__msg__SpectrometerMeasurement__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robominer_msgs__msg__SpectrometerMeasurement__fini(&array->data[i]);
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

robominer_msgs__msg__SpectrometerMeasurement__Sequence *
robominer_msgs__msg__SpectrometerMeasurement__Sequence__create(size_t size)
{
  robominer_msgs__msg__SpectrometerMeasurement__Sequence * array = (robominer_msgs__msg__SpectrometerMeasurement__Sequence *)malloc(sizeof(robominer_msgs__msg__SpectrometerMeasurement__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robominer_msgs__msg__SpectrometerMeasurement__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robominer_msgs__msg__SpectrometerMeasurement__Sequence__destroy(robominer_msgs__msg__SpectrometerMeasurement__Sequence * array)
{
  if (array) {
    robominer_msgs__msg__SpectrometerMeasurement__Sequence__fini(array);
  }
  free(array);
}
