// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:srv/LoadDatabase.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/srv/detail/load_database__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `database_path`
#include "rosidl_runtime_c/string_functions.h"

bool
rtabmap_ros__srv__LoadDatabase_Request__init(rtabmap_ros__srv__LoadDatabase_Request * msg)
{
  if (!msg) {
    return false;
  }
  // database_path
  if (!rosidl_runtime_c__String__init(&msg->database_path)) {
    rtabmap_ros__srv__LoadDatabase_Request__fini(msg);
    return false;
  }
  // clear
  return true;
}

void
rtabmap_ros__srv__LoadDatabase_Request__fini(rtabmap_ros__srv__LoadDatabase_Request * msg)
{
  if (!msg) {
    return;
  }
  // database_path
  rosidl_runtime_c__String__fini(&msg->database_path);
  // clear
}

rtabmap_ros__srv__LoadDatabase_Request *
rtabmap_ros__srv__LoadDatabase_Request__create()
{
  rtabmap_ros__srv__LoadDatabase_Request * msg = (rtabmap_ros__srv__LoadDatabase_Request *)malloc(sizeof(rtabmap_ros__srv__LoadDatabase_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__srv__LoadDatabase_Request));
  bool success = rtabmap_ros__srv__LoadDatabase_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__srv__LoadDatabase_Request__destroy(rtabmap_ros__srv__LoadDatabase_Request * msg)
{
  if (msg) {
    rtabmap_ros__srv__LoadDatabase_Request__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__srv__LoadDatabase_Request__Sequence__init(rtabmap_ros__srv__LoadDatabase_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__srv__LoadDatabase_Request * data = NULL;
  if (size) {
    data = (rtabmap_ros__srv__LoadDatabase_Request *)calloc(size, sizeof(rtabmap_ros__srv__LoadDatabase_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__srv__LoadDatabase_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__srv__LoadDatabase_Request__fini(&data[i - 1]);
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
rtabmap_ros__srv__LoadDatabase_Request__Sequence__fini(rtabmap_ros__srv__LoadDatabase_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__srv__LoadDatabase_Request__fini(&array->data[i]);
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

rtabmap_ros__srv__LoadDatabase_Request__Sequence *
rtabmap_ros__srv__LoadDatabase_Request__Sequence__create(size_t size)
{
  rtabmap_ros__srv__LoadDatabase_Request__Sequence * array = (rtabmap_ros__srv__LoadDatabase_Request__Sequence *)malloc(sizeof(rtabmap_ros__srv__LoadDatabase_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__srv__LoadDatabase_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__srv__LoadDatabase_Request__Sequence__destroy(rtabmap_ros__srv__LoadDatabase_Request__Sequence * array)
{
  if (array) {
    rtabmap_ros__srv__LoadDatabase_Request__Sequence__fini(array);
  }
  free(array);
}


bool
rtabmap_ros__srv__LoadDatabase_Response__init(rtabmap_ros__srv__LoadDatabase_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rtabmap_ros__srv__LoadDatabase_Response__fini(rtabmap_ros__srv__LoadDatabase_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

rtabmap_ros__srv__LoadDatabase_Response *
rtabmap_ros__srv__LoadDatabase_Response__create()
{
  rtabmap_ros__srv__LoadDatabase_Response * msg = (rtabmap_ros__srv__LoadDatabase_Response *)malloc(sizeof(rtabmap_ros__srv__LoadDatabase_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__srv__LoadDatabase_Response));
  bool success = rtabmap_ros__srv__LoadDatabase_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__srv__LoadDatabase_Response__destroy(rtabmap_ros__srv__LoadDatabase_Response * msg)
{
  if (msg) {
    rtabmap_ros__srv__LoadDatabase_Response__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__srv__LoadDatabase_Response__Sequence__init(rtabmap_ros__srv__LoadDatabase_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__srv__LoadDatabase_Response * data = NULL;
  if (size) {
    data = (rtabmap_ros__srv__LoadDatabase_Response *)calloc(size, sizeof(rtabmap_ros__srv__LoadDatabase_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__srv__LoadDatabase_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__srv__LoadDatabase_Response__fini(&data[i - 1]);
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
rtabmap_ros__srv__LoadDatabase_Response__Sequence__fini(rtabmap_ros__srv__LoadDatabase_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__srv__LoadDatabase_Response__fini(&array->data[i]);
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

rtabmap_ros__srv__LoadDatabase_Response__Sequence *
rtabmap_ros__srv__LoadDatabase_Response__Sequence__create(size_t size)
{
  rtabmap_ros__srv__LoadDatabase_Response__Sequence * array = (rtabmap_ros__srv__LoadDatabase_Response__Sequence *)malloc(sizeof(rtabmap_ros__srv__LoadDatabase_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__srv__LoadDatabase_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__srv__LoadDatabase_Response__Sequence__destroy(rtabmap_ros__srv__LoadDatabase_Response__Sequence * array)
{
  if (array) {
    rtabmap_ros__srv__LoadDatabase_Response__Sequence__fini(array);
  }
  free(array);
}