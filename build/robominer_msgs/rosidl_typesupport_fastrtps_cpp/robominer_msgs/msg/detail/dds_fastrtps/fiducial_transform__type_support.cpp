// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robominer_msgs:msg/FiducialTransform.idl
// generated code does not contain a copyright notice
#include "robominer_msgs/msg/detail/fiducial_transform__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robominer_msgs/msg/detail/fiducial_transform__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Transform &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Transform &);
size_t get_serialized_size(
  const geometry_msgs::msg::Transform &,
  size_t current_alignment);
size_t
max_serialized_size_Transform(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace robominer_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robominer_msgs
cdr_serialize(
  const robominer_msgs::msg::FiducialTransform & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: fiducial_id
  cdr << ros_message.fiducial_id;
  // Member: transform
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.transform,
    cdr);
  // Member: image_error
  cdr << ros_message.image_error;
  // Member: object_error
  cdr << ros_message.object_error;
  // Member: fiducial_area
  cdr << ros_message.fiducial_area;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robominer_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robominer_msgs::msg::FiducialTransform & ros_message)
{
  // Member: fiducial_id
  cdr >> ros_message.fiducial_id;

  // Member: transform
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.transform);

  // Member: image_error
  cdr >> ros_message.image_error;

  // Member: object_error
  cdr >> ros_message.object_error;

  // Member: fiducial_area
  cdr >> ros_message.fiducial_area;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robominer_msgs
get_serialized_size(
  const robominer_msgs::msg::FiducialTransform & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: fiducial_id
  {
    size_t item_size = sizeof(ros_message.fiducial_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transform

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.transform, current_alignment);
  // Member: image_error
  {
    size_t item_size = sizeof(ros_message.image_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: object_error
  {
    size_t item_size = sizeof(ros_message.object_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fiducial_area
  {
    size_t item_size = sizeof(ros_message.fiducial_area);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robominer_msgs
max_serialized_size_FiducialTransform(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: fiducial_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: transform
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Transform(
        full_bounded, current_alignment);
    }
  }

  // Member: image_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: object_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: fiducial_area
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _FiducialTransform__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robominer_msgs::msg::FiducialTransform *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FiducialTransform__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robominer_msgs::msg::FiducialTransform *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FiducialTransform__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robominer_msgs::msg::FiducialTransform *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FiducialTransform__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FiducialTransform(full_bounded, 0);
}

static message_type_support_callbacks_t _FiducialTransform__callbacks = {
  "robominer_msgs::msg",
  "FiducialTransform",
  _FiducialTransform__cdr_serialize,
  _FiducialTransform__cdr_deserialize,
  _FiducialTransform__get_serialized_size,
  _FiducialTransform__max_serialized_size
};

static rosidl_message_type_support_t _FiducialTransform__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FiducialTransform__callbacks,
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
get_message_type_support_handle<robominer_msgs::msg::FiducialTransform>()
{
  return &robominer_msgs::msg::typesupport_fastrtps_cpp::_FiducialTransform__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robominer_msgs, msg, FiducialTransform)() {
  return &robominer_msgs::msg::typesupport_fastrtps_cpp::_FiducialTransform__handle;
}

#ifdef __cplusplus
}
#endif
