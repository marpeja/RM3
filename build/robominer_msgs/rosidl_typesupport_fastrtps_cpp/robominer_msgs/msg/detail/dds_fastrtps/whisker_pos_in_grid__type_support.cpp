// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robominer_msgs:msg/WhiskerPosInGrid.idl
// generated code does not contain a copyright notice
#include "robominer_msgs/msg/detail/whisker_pos_in_grid__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robominer_msgs/msg/detail/whisker_pos_in_grid__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robominer_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robominer_msgs
cdr_serialize(
  const robominer_msgs::msg::WhiskerPosInGrid & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: row_num
  cdr << ros_message.row_num;
  // Member: col_num
  cdr << ros_message.col_num;
  // Member: offset_y
  cdr << ros_message.offset_y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robominer_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robominer_msgs::msg::WhiskerPosInGrid & ros_message)
{
  // Member: row_num
  cdr >> ros_message.row_num;

  // Member: col_num
  cdr >> ros_message.col_num;

  // Member: offset_y
  cdr >> ros_message.offset_y;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robominer_msgs
get_serialized_size(
  const robominer_msgs::msg::WhiskerPosInGrid & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: row_num
  {
    size_t item_size = sizeof(ros_message.row_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: col_num
  {
    size_t item_size = sizeof(ros_message.col_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offset_y
  {
    size_t item_size = sizeof(ros_message.offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robominer_msgs
max_serialized_size_WhiskerPosInGrid(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: row_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: col_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: offset_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _WhiskerPosInGrid__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robominer_msgs::msg::WhiskerPosInGrid *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WhiskerPosInGrid__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robominer_msgs::msg::WhiskerPosInGrid *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WhiskerPosInGrid__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robominer_msgs::msg::WhiskerPosInGrid *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WhiskerPosInGrid__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_WhiskerPosInGrid(full_bounded, 0);
}

static message_type_support_callbacks_t _WhiskerPosInGrid__callbacks = {
  "robominer_msgs::msg",
  "WhiskerPosInGrid",
  _WhiskerPosInGrid__cdr_serialize,
  _WhiskerPosInGrid__cdr_deserialize,
  _WhiskerPosInGrid__get_serialized_size,
  _WhiskerPosInGrid__max_serialized_size
};

static rosidl_message_type_support_t _WhiskerPosInGrid__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WhiskerPosInGrid__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robominer_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robominer_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<robominer_msgs::msg::WhiskerPosInGrid>()
{
  return &robominer_msgs::msg::typesupport_fastrtps_cpp::_WhiskerPosInGrid__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robominer_msgs, msg, WhiskerPosInGrid)() {
  return &robominer_msgs::msg::typesupport_fastrtps_cpp::_WhiskerPosInGrid__handle;
}

#ifdef __cplusplus
}
#endif
