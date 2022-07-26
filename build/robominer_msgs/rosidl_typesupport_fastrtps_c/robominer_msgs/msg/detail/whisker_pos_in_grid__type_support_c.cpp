// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robominer_msgs:msg/WhiskerPosInGrid.idl
// generated code does not contain a copyright notice
#include "robominer_msgs/msg/detail/whisker_pos_in_grid__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robominer_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robominer_msgs/msg/detail/whisker_pos_in_grid__struct.h"
#include "robominer_msgs/msg/detail/whisker_pos_in_grid__functions.h"
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


// forward declare type support functions


using _WhiskerPosInGrid__ros_msg_type = robominer_msgs__msg__WhiskerPosInGrid;

static bool _WhiskerPosInGrid__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WhiskerPosInGrid__ros_msg_type * ros_message = static_cast<const _WhiskerPosInGrid__ros_msg_type *>(untyped_ros_message);
  // Field name: row_num
  {
    cdr << ros_message->row_num;
  }

  // Field name: col_num
  {
    cdr << ros_message->col_num;
  }

  // Field name: offset_y
  {
    cdr << ros_message->offset_y;
  }

  return true;
}

static bool _WhiskerPosInGrid__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WhiskerPosInGrid__ros_msg_type * ros_message = static_cast<_WhiskerPosInGrid__ros_msg_type *>(untyped_ros_message);
  // Field name: row_num
  {
    cdr >> ros_message->row_num;
  }

  // Field name: col_num
  {
    cdr >> ros_message->col_num;
  }

  // Field name: offset_y
  {
    cdr >> ros_message->offset_y;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robominer_msgs
size_t get_serialized_size_robominer_msgs__msg__WhiskerPosInGrid(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WhiskerPosInGrid__ros_msg_type * ros_message = static_cast<const _WhiskerPosInGrid__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name row_num
  {
    size_t item_size = sizeof(ros_message->row_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name col_num
  {
    size_t item_size = sizeof(ros_message->col_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset_y
  {
    size_t item_size = sizeof(ros_message->offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WhiskerPosInGrid__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robominer_msgs__msg__WhiskerPosInGrid(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robominer_msgs
size_t max_serialized_size_robominer_msgs__msg__WhiskerPosInGrid(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: row_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: col_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: offset_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _WhiskerPosInGrid__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robominer_msgs__msg__WhiskerPosInGrid(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WhiskerPosInGrid = {
  "robominer_msgs::msg",
  "WhiskerPosInGrid",
  _WhiskerPosInGrid__cdr_serialize,
  _WhiskerPosInGrid__cdr_deserialize,
  _WhiskerPosInGrid__get_serialized_size,
  _WhiskerPosInGrid__max_serialized_size
};

static rosidl_message_type_support_t _WhiskerPosInGrid__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WhiskerPosInGrid,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robominer_msgs, msg, WhiskerPosInGrid)() {
  return &_WhiskerPosInGrid__type_support;
}

#if defined(__cplusplus)
}
#endif
