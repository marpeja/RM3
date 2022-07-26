// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:msg/ScanDescriptor.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/scan_descriptor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `scan`
#include "sensor_msgs/msg/detail/laser_scan__functions.h"
// Member `scan_cloud`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `global_descriptor`
#include "rtabmap_ros/msg/detail/global_descriptor__functions.h"

bool
rtabmap_ros__msg__ScanDescriptor__init(rtabmap_ros__msg__ScanDescriptor * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rtabmap_ros__msg__ScanDescriptor__fini(msg);
    return false;
  }
  // scan
  if (!sensor_msgs__msg__LaserScan__init(&msg->scan)) {
    rtabmap_ros__msg__ScanDescriptor__fini(msg);
    return false;
  }
  // scan_cloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->scan_cloud)) {
    rtabmap_ros__msg__ScanDescriptor__fini(msg);
    return false;
  }
  // global_descriptor
  if (!rtabmap_ros__msg__GlobalDescriptor__init(&msg->global_descriptor)) {
    rtabmap_ros__msg__ScanDescriptor__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_ros__msg__ScanDescriptor__fini(rtabmap_ros__msg__ScanDescriptor * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // scan
  sensor_msgs__msg__LaserScan__fini(&msg->scan);
  // scan_cloud
  sensor_msgs__msg__PointCloud2__fini(&msg->scan_cloud);
  // global_descriptor
  rtabmap_ros__msg__GlobalDescriptor__fini(&msg->global_descriptor);
}

rtabmap_ros__msg__ScanDescriptor *
rtabmap_ros__msg__ScanDescriptor__create()
{
  rtabmap_ros__msg__ScanDescriptor * msg = (rtabmap_ros__msg__ScanDescriptor *)malloc(sizeof(rtabmap_ros__msg__ScanDescriptor));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__msg__ScanDescriptor));
  bool success = rtabmap_ros__msg__ScanDescriptor__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__msg__ScanDescriptor__destroy(rtabmap_ros__msg__ScanDescriptor * msg)
{
  if (msg) {
    rtabmap_ros__msg__ScanDescriptor__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__msg__ScanDescriptor__Sequence__init(rtabmap_ros__msg__ScanDescriptor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__msg__ScanDescriptor * data = NULL;
  if (size) {
    data = (rtabmap_ros__msg__ScanDescriptor *)calloc(size, sizeof(rtabmap_ros__msg__ScanDescriptor));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__msg__ScanDescriptor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__msg__ScanDescriptor__fini(&data[i - 1]);
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
rtabmap_ros__msg__ScanDescriptor__Sequence__fini(rtabmap_ros__msg__ScanDescriptor__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__msg__ScanDescriptor__fini(&array->data[i]);
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

rtabmap_ros__msg__ScanDescriptor__Sequence *
rtabmap_ros__msg__ScanDescriptor__Sequence__create(size_t size)
{
  rtabmap_ros__msg__ScanDescriptor__Sequence * array = (rtabmap_ros__msg__ScanDescriptor__Sequence *)malloc(sizeof(rtabmap_ros__msg__ScanDescriptor__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__msg__ScanDescriptor__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__msg__ScanDescriptor__Sequence__destroy(rtabmap_ros__msg__ScanDescriptor__Sequence * array)
{
  if (array) {
    rtabmap_ros__msg__ScanDescriptor__Sequence__fini(array);
  }
  free(array);
}
