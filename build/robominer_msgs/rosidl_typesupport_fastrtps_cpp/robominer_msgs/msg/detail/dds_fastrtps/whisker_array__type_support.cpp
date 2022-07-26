// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robominer_msgs:msg/WhiskerArray.idl
// generated code does not contain a copyright notice
#include "robominer_msgs/msg/detail/whisker_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robominer_msgs/msg/detail/whisker_array__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace robominer_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const robominer_msgs::msg::Whisker &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  robominer_msgs::msg::Whisker &);
size_t get_serialized_size(
  const robominer_msgs::msg::Whisker &,
  size_t current_alignment);
size_t
max_serialized_size_Whisker(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace robominer_msgs


namespace robominer_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robominer_msgs
cdr_serialize(
  const robominer_msgs::msg::WhiskerArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: num_mux
  cdr << ros_message.num_mux;
  // Member: num_sensors
  cdr << ros_message.num_sensors;
  // Member: representation
  cdr << ros_message.representation;
  // Member: whiskers
  {
    size_t size = ros_message.whiskers.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      robominer_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.whiskers[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robominer_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robominer_msgs::msg::WhiskerArray & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: num_mux
  cdr >> ros_message.num_mux;

  // Member: num_sensors
  cdr >> ros_message.num_sensors;

  // Member: representation
  cdr >> ros_message.representation;

  // Member: whiskers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.whiskers.resize(size);
    for (size_t i = 0; i < size; i++) {
      robominer_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.whiskers[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robominer_msgs
get_serialized_size(
  const robominer_msgs::msg::WhiskerArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: num_mux
  {
    size_t item_size = sizeof(ros_message.num_mux);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_sensors
  {
    size_t item_size = sizeof(ros_message.num_sensors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: representation
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.representation.size() + 1);
  // Member: whiskers
  {
    size_t array_size = ros_message.whiskers.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        robominer_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.whiskers[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robominer_msgs
max_serialized_size_WhiskerArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: num_mux
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_sensors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: representation
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: whiskers
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        robominer_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Whisker(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _WhiskerArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robominer_msgs::msg::WhiskerArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WhiskerArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robominer_msgs::msg::WhiskerArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WhiskerArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robominer_msgs::msg::WhiskerArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WhiskerArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_WhiskerArray(full_bounded, 0);
}

static message_type_support_callbacks_t _WhiskerArray__callbacks = {
  "robominer_msgs::msg",
  "WhiskerArray",
  _WhiskerArray__cdr_serialize,
  _WhiskerArray__cdr_deserialize,
  _WhiskerArray__get_serialized_size,
  _WhiskerArray__max_serialized_size
};

static rosidl_message_type_support_t _WhiskerArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WhiskerArray__callbacks,
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
get_message_type_support_handle<robominer_msgs::msg::WhiskerArray>()
{
  return &robominer_msgs::msg::typesupport_fastrtps_cpp::_WhiskerArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robominer_msgs, msg, WhiskerArray)() {
  return &robominer_msgs::msg::typesupport_fastrtps_cpp::_WhiskerArray__handle;
}

#ifdef __cplusplus
}
#endif
