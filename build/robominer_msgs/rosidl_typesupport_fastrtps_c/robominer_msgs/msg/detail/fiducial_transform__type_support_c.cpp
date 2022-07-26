// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robominer_msgs:msg/FiducialTransform.idl
// generated code does not contain a copyright notice
#include "robominer_msgs/msg/detail/fiducial_transform__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robominer_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robominer_msgs/msg/detail/fiducial_transform__struct.h"
#include "robominer_msgs/msg/detail/fiducial_transform__functions.h"
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

#include "geometry_msgs/msg/detail/transform__functions.h"  // transform

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robominer_msgs
size_t get_serialized_size_geometry_msgs__msg__Transform(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robominer_msgs
size_t max_serialized_size_geometry_msgs__msg__Transform(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robominer_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform)();


using _FiducialTransform__ros_msg_type = robominer_msgs__msg__FiducialTransform;

static bool _FiducialTransform__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FiducialTransform__ros_msg_type * ros_message = static_cast<const _FiducialTransform__ros_msg_type *>(untyped_ros_message);
  // Field name: fiducial_id
  {
    cdr << ros_message->fiducial_id;
  }

  // Field name: transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->transform, cdr))
    {
      return false;
    }
  }

  // Field name: image_error
  {
    cdr << ros_message->image_error;
  }

  // Field name: object_error
  {
    cdr << ros_message->object_error;
  }

  // Field name: fiducial_area
  {
    cdr << ros_message->fiducial_area;
  }

  return true;
}

static bool _FiducialTransform__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FiducialTransform__ros_msg_type * ros_message = static_cast<_FiducialTransform__ros_msg_type *>(untyped_ros_message);
  // Field name: fiducial_id
  {
    cdr >> ros_message->fiducial_id;
  }

  // Field name: transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->transform))
    {
      return false;
    }
  }

  // Field name: image_error
  {
    cdr >> ros_message->image_error;
  }

  // Field name: object_error
  {
    cdr >> ros_message->object_error;
  }

  // Field name: fiducial_area
  {
    cdr >> ros_message->fiducial_area;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robominer_msgs
size_t get_serialized_size_robominer_msgs__msg__FiducialTransform(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FiducialTransform__ros_msg_type * ros_message = static_cast<const _FiducialTransform__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name fiducial_id
  {
    size_t item_size = sizeof(ros_message->fiducial_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transform

  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->transform), current_alignment);
  // field.name image_error
  {
    size_t item_size = sizeof(ros_message->image_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_error
  {
    size_t item_size = sizeof(ros_message->object_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fiducial_area
  {
    size_t item_size = sizeof(ros_message->fiducial_area);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FiducialTransform__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robominer_msgs__msg__FiducialTransform(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robominer_msgs
size_t max_serialized_size_robominer_msgs__msg__FiducialTransform(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: fiducial_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: transform
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Transform(
        full_bounded, current_alignment);
    }
  }
  // member: image_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: object_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fiducial_area
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _FiducialTransform__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robominer_msgs__msg__FiducialTransform(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FiducialTransform = {
  "robominer_msgs::msg",
  "FiducialTransform",
  _FiducialTransform__cdr_serialize,
  _FiducialTransform__cdr_deserialize,
  _FiducialTransform__get_serialized_size,
  _FiducialTransform__max_serialized_size
};

static rosidl_message_type_support_t _FiducialTransform__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FiducialTransform,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robominer_msgs, msg, FiducialTransform)() {
  return &_FiducialTransform__type_support;
}

#if defined(__cplusplus)
}
#endif
