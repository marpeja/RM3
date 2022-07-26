// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:srv/GetNodeData.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/srv/detail/get_node_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rtabmap_ros__srv__GetNodeData_Request__init(rtabmap_ros__srv__GetNodeData_Request * msg)
{
  if (!msg) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->ids, 0)) {
    rtabmap_ros__srv__GetNodeData_Request__fini(msg);
    return false;
  }
  // images
  // scan
  // grid
  // user_data
  return true;
}

void
rtabmap_ros__srv__GetNodeData_Request__fini(rtabmap_ros__srv__GetNodeData_Request * msg)
{
  if (!msg) {
    return;
  }
  // ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->ids);
  // images
  // scan
  // grid
  // user_data
}

rtabmap_ros__srv__GetNodeData_Request *
rtabmap_ros__srv__GetNodeData_Request__create()
{
  rtabmap_ros__srv__GetNodeData_Request * msg = (rtabmap_ros__srv__GetNodeData_Request *)malloc(sizeof(rtabmap_ros__srv__GetNodeData_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__srv__GetNodeData_Request));
  bool success = rtabmap_ros__srv__GetNodeData_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__srv__GetNodeData_Request__destroy(rtabmap_ros__srv__GetNodeData_Request * msg)
{
  if (msg) {
    rtabmap_ros__srv__GetNodeData_Request__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__srv__GetNodeData_Request__Sequence__init(rtabmap_ros__srv__GetNodeData_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__srv__GetNodeData_Request * data = NULL;
  if (size) {
    data = (rtabmap_ros__srv__GetNodeData_Request *)calloc(size, sizeof(rtabmap_ros__srv__GetNodeData_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__srv__GetNodeData_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__srv__GetNodeData_Request__fini(&data[i - 1]);
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
rtabmap_ros__srv__GetNodeData_Request__Sequence__fini(rtabmap_ros__srv__GetNodeData_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__srv__GetNodeData_Request__fini(&array->data[i]);
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

rtabmap_ros__srv__GetNodeData_Request__Sequence *
rtabmap_ros__srv__GetNodeData_Request__Sequence__create(size_t size)
{
  rtabmap_ros__srv__GetNodeData_Request__Sequence * array = (rtabmap_ros__srv__GetNodeData_Request__Sequence *)malloc(sizeof(rtabmap_ros__srv__GetNodeData_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__srv__GetNodeData_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__srv__GetNodeData_Request__Sequence__destroy(rtabmap_ros__srv__GetNodeData_Request__Sequence * array)
{
  if (array) {
    rtabmap_ros__srv__GetNodeData_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `data`
#include "rtabmap_ros/msg/detail/node_data__functions.h"

bool
rtabmap_ros__srv__GetNodeData_Response__init(rtabmap_ros__srv__GetNodeData_Response * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rtabmap_ros__msg__NodeData__Sequence__init(&msg->data, 0)) {
    rtabmap_ros__srv__GetNodeData_Response__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_ros__srv__GetNodeData_Response__fini(rtabmap_ros__srv__GetNodeData_Response * msg)
{
  if (!msg) {
    return;
  }
  // data
  rtabmap_ros__msg__NodeData__Sequence__fini(&msg->data);
}

rtabmap_ros__srv__GetNodeData_Response *
rtabmap_ros__srv__GetNodeData_Response__create()
{
  rtabmap_ros__srv__GetNodeData_Response * msg = (rtabmap_ros__srv__GetNodeData_Response *)malloc(sizeof(rtabmap_ros__srv__GetNodeData_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__srv__GetNodeData_Response));
  bool success = rtabmap_ros__srv__GetNodeData_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__srv__GetNodeData_Response__destroy(rtabmap_ros__srv__GetNodeData_Response * msg)
{
  if (msg) {
    rtabmap_ros__srv__GetNodeData_Response__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__srv__GetNodeData_Response__Sequence__init(rtabmap_ros__srv__GetNodeData_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__srv__GetNodeData_Response * data = NULL;
  if (size) {
    data = (rtabmap_ros__srv__GetNodeData_Response *)calloc(size, sizeof(rtabmap_ros__srv__GetNodeData_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__srv__GetNodeData_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__srv__GetNodeData_Response__fini(&data[i - 1]);
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
rtabmap_ros__srv__GetNodeData_Response__Sequence__fini(rtabmap_ros__srv__GetNodeData_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__srv__GetNodeData_Response__fini(&array->data[i]);
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

rtabmap_ros__srv__GetNodeData_Response__Sequence *
rtabmap_ros__srv__GetNodeData_Response__Sequence__create(size_t size)
{
  rtabmap_ros__srv__GetNodeData_Response__Sequence * array = (rtabmap_ros__srv__GetNodeData_Response__Sequence *)malloc(sizeof(rtabmap_ros__srv__GetNodeData_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__srv__GetNodeData_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__srv__GetNodeData_Response__Sequence__destroy(rtabmap_ros__srv__GetNodeData_Response__Sequence * array)
{
  if (array) {
    rtabmap_ros__srv__GetNodeData_Response__Sequence__fini(array);
  }
  free(array);
}
