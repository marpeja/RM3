// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:msg/OdomInfo.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/odom_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `local_bundle_ids`
// Member `words_keys`
// Member `word_matches`
// Member `word_inliers`
// Member `local_map_keys`
// Member `corner_inliers`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `local_bundle_models`
#include "sensor_msgs/msg/detail/camera_info__functions.h"
// Member `local_bundle_model_transforms`
// Member `transform`
// Member `transform_filtered`
// Member `transform_ground_truth`
// Member `guess`
#include "geometry_msgs/msg/detail/transform__functions.h"
// Member `local_bundle_poses`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `words_values`
#include "rtabmap_ros/msg/detail/key_point__functions.h"
// Member `local_map_values`
#include "rtabmap_ros/msg/detail/point3f__functions.h"
// Member `local_scan_map`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `ref_corners`
// Member `new_corners`
#include "rtabmap_ros/msg/detail/point2f__functions.h"

bool
rtabmap_ros__msg__OdomInfo__init(rtabmap_ros__msg__OdomInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // lost
  // matches
  // inliers
  // icp_inliers_ratio
  // icp_rotation
  // icp_translation
  // icp_structural_complexity
  // icp_structural_distribution
  // icp_correspondences
  // covariance
  // features
  // local_map_size
  // local_scan_map_size
  // local_key_frames
  // local_bundle_outliers
  // local_bundle_constraints
  // local_bundle_time
  // key_frame_added
  // time_estimation
  // time_particle_filtering
  // stamp
  // interval
  // distance_travelled
  // memory_usage
  // gravity_roll_error
  // gravity_pitch_error
  // local_bundle_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->local_bundle_ids, 0)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // local_bundle_models
  if (!sensor_msgs__msg__CameraInfo__Sequence__init(&msg->local_bundle_models, 0)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // local_bundle_model_transforms
  if (!geometry_msgs__msg__Transform__Sequence__init(&msg->local_bundle_model_transforms, 0)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // local_bundle_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->local_bundle_poses, 0)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Transform__init(&msg->transform)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // transform_filtered
  if (!geometry_msgs__msg__Transform__init(&msg->transform_filtered)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // transform_ground_truth
  if (!geometry_msgs__msg__Transform__init(&msg->transform_ground_truth)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // guess
  if (!geometry_msgs__msg__Transform__init(&msg->guess)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // type
  // words_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->words_keys, 0)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // words_values
  if (!rtabmap_ros__msg__KeyPoint__Sequence__init(&msg->words_values, 0)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // word_matches
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->word_matches, 0)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // word_inliers
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->word_inliers, 0)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // local_map_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->local_map_keys, 0)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // local_map_values
  if (!rtabmap_ros__msg__Point3f__Sequence__init(&msg->local_map_values, 0)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // local_scan_map
  if (!sensor_msgs__msg__PointCloud2__init(&msg->local_scan_map)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // ref_corners
  if (!rtabmap_ros__msg__Point2f__Sequence__init(&msg->ref_corners, 0)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // new_corners
  if (!rtabmap_ros__msg__Point2f__Sequence__init(&msg->new_corners, 0)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  // corner_inliers
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->corner_inliers, 0)) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_ros__msg__OdomInfo__fini(rtabmap_ros__msg__OdomInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // lost
  // matches
  // inliers
  // icp_inliers_ratio
  // icp_rotation
  // icp_translation
  // icp_structural_complexity
  // icp_structural_distribution
  // icp_correspondences
  // covariance
  // features
  // local_map_size
  // local_scan_map_size
  // local_key_frames
  // local_bundle_outliers
  // local_bundle_constraints
  // local_bundle_time
  // key_frame_added
  // time_estimation
  // time_particle_filtering
  // stamp
  // interval
  // distance_travelled
  // memory_usage
  // gravity_roll_error
  // gravity_pitch_error
  // local_bundle_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->local_bundle_ids);
  // local_bundle_models
  sensor_msgs__msg__CameraInfo__Sequence__fini(&msg->local_bundle_models);
  // local_bundle_model_transforms
  geometry_msgs__msg__Transform__Sequence__fini(&msg->local_bundle_model_transforms);
  // local_bundle_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->local_bundle_poses);
  // transform
  geometry_msgs__msg__Transform__fini(&msg->transform);
  // transform_filtered
  geometry_msgs__msg__Transform__fini(&msg->transform_filtered);
  // transform_ground_truth
  geometry_msgs__msg__Transform__fini(&msg->transform_ground_truth);
  // guess
  geometry_msgs__msg__Transform__fini(&msg->guess);
  // type
  // words_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->words_keys);
  // words_values
  rtabmap_ros__msg__KeyPoint__Sequence__fini(&msg->words_values);
  // word_matches
  rosidl_runtime_c__int32__Sequence__fini(&msg->word_matches);
  // word_inliers
  rosidl_runtime_c__int32__Sequence__fini(&msg->word_inliers);
  // local_map_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->local_map_keys);
  // local_map_values
  rtabmap_ros__msg__Point3f__Sequence__fini(&msg->local_map_values);
  // local_scan_map
  sensor_msgs__msg__PointCloud2__fini(&msg->local_scan_map);
  // ref_corners
  rtabmap_ros__msg__Point2f__Sequence__fini(&msg->ref_corners);
  // new_corners
  rtabmap_ros__msg__Point2f__Sequence__fini(&msg->new_corners);
  // corner_inliers
  rosidl_runtime_c__int32__Sequence__fini(&msg->corner_inliers);
}

rtabmap_ros__msg__OdomInfo *
rtabmap_ros__msg__OdomInfo__create()
{
  rtabmap_ros__msg__OdomInfo * msg = (rtabmap_ros__msg__OdomInfo *)malloc(sizeof(rtabmap_ros__msg__OdomInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__msg__OdomInfo));
  bool success = rtabmap_ros__msg__OdomInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__msg__OdomInfo__destroy(rtabmap_ros__msg__OdomInfo * msg)
{
  if (msg) {
    rtabmap_ros__msg__OdomInfo__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__msg__OdomInfo__Sequence__init(rtabmap_ros__msg__OdomInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__msg__OdomInfo * data = NULL;
  if (size) {
    data = (rtabmap_ros__msg__OdomInfo *)calloc(size, sizeof(rtabmap_ros__msg__OdomInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__msg__OdomInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__msg__OdomInfo__fini(&data[i - 1]);
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
rtabmap_ros__msg__OdomInfo__Sequence__fini(rtabmap_ros__msg__OdomInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__msg__OdomInfo__fini(&array->data[i]);
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

rtabmap_ros__msg__OdomInfo__Sequence *
rtabmap_ros__msg__OdomInfo__Sequence__create(size_t size)
{
  rtabmap_ros__msg__OdomInfo__Sequence * array = (rtabmap_ros__msg__OdomInfo__Sequence *)malloc(sizeof(rtabmap_ros__msg__OdomInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__msg__OdomInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__msg__OdomInfo__Sequence__destroy(rtabmap_ros__msg__OdomInfo__Sequence * array)
{
  if (array) {
    rtabmap_ros__msg__OdomInfo__Sequence__fini(array);
  }
  free(array);
}
