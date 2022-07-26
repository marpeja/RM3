// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robominer_msgs:msg/FiducialTransform.idl
// generated code does not contain a copyright notice
#include "robominer_msgs/msg/detail/fiducial_transform__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/detail/transform__functions.h"

bool
robominer_msgs__msg__FiducialTransform__init(robominer_msgs__msg__FiducialTransform * msg)
{
  if (!msg) {
    return false;
  }
  // fiducial_id
  // transform
  if (!geometry_msgs__msg__Transform__init(&msg->transform)) {
    robominer_msgs__msg__FiducialTransform__fini(msg);
    return false;
  }
  // image_error
  // object_error
  // fiducial_area
  return true;
}

void
robominer_msgs__msg__FiducialTransform__fini(robominer_msgs__msg__FiducialTransform * msg)
{
  if (!msg) {
    return;
  }
  // fiducial_id
  // transform
  geometry_msgs__msg__Transform__fini(&msg->transform);
  // image_error
  // object_error
  // fiducial_area
}

robominer_msgs__msg__FiducialTransform *
robominer_msgs__msg__FiducialTransform__create()
{
  robominer_msgs__msg__FiducialTransform * msg = (robominer_msgs__msg__FiducialTransform *)malloc(sizeof(robominer_msgs__msg__FiducialTransform));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robominer_msgs__msg__FiducialTransform));
  bool success = robominer_msgs__msg__FiducialTransform__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robominer_msgs__msg__FiducialTransform__destroy(robominer_msgs__msg__FiducialTransform * msg)
{
  if (msg) {
    robominer_msgs__msg__FiducialTransform__fini(msg);
  }
  free(msg);
}


bool
robominer_msgs__msg__FiducialTransform__Sequence__init(robominer_msgs__msg__FiducialTransform__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robominer_msgs__msg__FiducialTransform * data = NULL;
  if (size) {
    data = (robominer_msgs__msg__FiducialTransform *)calloc(size, sizeof(robominer_msgs__msg__FiducialTransform));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robominer_msgs__msg__FiducialTransform__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robominer_msgs__msg__FiducialTransform__fini(&data[i - 1]);
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
robominer_msgs__msg__FiducialTransform__Sequence__fini(robominer_msgs__msg__FiducialTransform__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robominer_msgs__msg__FiducialTransform__fini(&array->data[i]);
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

robominer_msgs__msg__FiducialTransform__Sequence *
robominer_msgs__msg__FiducialTransform__Sequence__create(size_t size)
{
  robominer_msgs__msg__FiducialTransform__Sequence * array = (robominer_msgs__msg__FiducialTransform__Sequence *)malloc(sizeof(robominer_msgs__msg__FiducialTransform__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robominer_msgs__msg__FiducialTransform__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robominer_msgs__msg__FiducialTransform__Sequence__destroy(robominer_msgs__msg__FiducialTransform__Sequence * array)
{
  if (array) {
    robominer_msgs__msg__FiducialTransform__Sequence__fini(array);
  }
  free(array);
}
