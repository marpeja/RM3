// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robominer_msgs:msg/Whisker.idl
// generated code does not contain a copyright notice
#include "robominer_msgs/msg/detail/whisker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pos`
#include "robominer_msgs/msg/detail/whisker_pos_in_grid__functions.h"

bool
robominer_msgs__msg__Whisker__init(robominer_msgs__msg__Whisker * msg)
{
  if (!msg) {
    return false;
  }
  // pos
  if (!robominer_msgs__msg__WhiskerPosInGrid__init(&msg->pos)) {
    robominer_msgs__msg__Whisker__fini(msg);
    return false;
  }
  // has_error
  // x
  // y
  // z
  return true;
}

void
robominer_msgs__msg__Whisker__fini(robominer_msgs__msg__Whisker * msg)
{
  if (!msg) {
    return;
  }
  // pos
  robominer_msgs__msg__WhiskerPosInGrid__fini(&msg->pos);
  // has_error
  // x
  // y
  // z
}

robominer_msgs__msg__Whisker *
robominer_msgs__msg__Whisker__create()
{
  robominer_msgs__msg__Whisker * msg = (robominer_msgs__msg__Whisker *)malloc(sizeof(robominer_msgs__msg__Whisker));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robominer_msgs__msg__Whisker));
  bool success = robominer_msgs__msg__Whisker__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robominer_msgs__msg__Whisker__destroy(robominer_msgs__msg__Whisker * msg)
{
  if (msg) {
    robominer_msgs__msg__Whisker__fini(msg);
  }
  free(msg);
}


bool
robominer_msgs__msg__Whisker__Sequence__init(robominer_msgs__msg__Whisker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robominer_msgs__msg__Whisker * data = NULL;
  if (size) {
    data = (robominer_msgs__msg__Whisker *)calloc(size, sizeof(robominer_msgs__msg__Whisker));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robominer_msgs__msg__Whisker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robominer_msgs__msg__Whisker__fini(&data[i - 1]);
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
robominer_msgs__msg__Whisker__Sequence__fini(robominer_msgs__msg__Whisker__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robominer_msgs__msg__Whisker__fini(&array->data[i]);
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

robominer_msgs__msg__Whisker__Sequence *
robominer_msgs__msg__Whisker__Sequence__create(size_t size)
{
  robominer_msgs__msg__Whisker__Sequence * array = (robominer_msgs__msg__Whisker__Sequence *)malloc(sizeof(robominer_msgs__msg__Whisker__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robominer_msgs__msg__Whisker__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robominer_msgs__msg__Whisker__Sequence__destroy(robominer_msgs__msg__Whisker__Sequence * array)
{
  if (array) {
    robominer_msgs__msg__Whisker__Sequence__fini(array);
  }
  free(array);
}
