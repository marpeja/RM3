// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robominer_msgs:msg/SpectrometerMeasurement.idl
// generated code does not contain a copyright notice
#include "robominer_msgs/msg/detail/spectrometer_measurement__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robominer_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robominer_msgs/msg/detail/spectrometer_measurement__struct.h"
#include "robominer_msgs/msg/detail/spectrometer_measurement__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/vector3__functions.h"  // orientation
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robominer_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robominer_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robominer_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robominer_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robominer_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robominer_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _SpectrometerMeasurement__ros_msg_type = robominer_msgs__msg__SpectrometerMeasurement;

static bool _SpectrometerMeasurement__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpectrometerMeasurement__ros_msg_type * ros_message = static_cast<const _SpectrometerMeasurement__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: orientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->orientation, cdr))
    {
      return false;
    }
  }

  // Field name: exposure_time
  {
    cdr << ros_message->exposure_time;
  }

  // Field name: spectrum
  {
    size_t size = 288;
    auto array_ptr = ros_message->spectrum;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SpectrometerMeasurement__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpectrometerMeasurement__ros_msg_type * ros_message = static_cast<_SpectrometerMeasurement__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: orientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->orientation))
    {
      return false;
    }
  }

  // Field name: exposure_time
  {
    cdr >> ros_message->exposure_time;
  }

  // Field name: spectrum
  {
    size_t size = 288;
    auto array_ptr = ros_message->spectrum;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robominer_msgs
size_t get_serialized_size_robominer_msgs__msg__SpectrometerMeasurement(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpectrometerMeasurement__ros_msg_type * ros_message = static_cast<const _SpectrometerMeasurement__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name orientation

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->orientation), current_alignment);
  // field.name exposure_time
  {
    size_t item_size = sizeof(ros_message->exposure_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spectrum
  {
    size_t array_size = 288;
    auto array_ptr = ros_message->spectrum;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SpectrometerMeasurement__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robominer_msgs__msg__SpectrometerMeasurement(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robominer_msgs
size_t max_serialized_size_robominer_msgs__msg__SpectrometerMeasurement(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: orientation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3(
        full_bounded, current_alignment);
    }
  }
  // member: exposure_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: spectrum
  {
    size_t array_size = 288;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SpectrometerMeasurement__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robominer_msgs__msg__SpectrometerMeasurement(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SpectrometerMeasurement = {
  "robominer_msgs::msg",
  "SpectrometerMeasurement",
  _SpectrometerMeasurement__cdr_serialize,
  _SpectrometerMeasurement__cdr_deserialize,
  _SpectrometerMeasurement__get_serialized_size,
  _SpectrometerMeasurement__max_serialized_size
};

static rosidl_message_type_support_t _SpectrometerMeasurement__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpectrometerMeasurement,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robominer_msgs, msg, SpectrometerMeasurement)() {
  return &_SpectrometerMeasurement__type_support;
}

#if defined(__cplusplus)
}
#endif
