// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robominer_msgs:msg/WhiskerArray.idl
// generated code does not contain a copyright notice
#include "robominer_msgs/msg/detail/whisker_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robominer_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robominer_msgs/msg/detail/whisker_array__struct.h"
#include "robominer_msgs/msg/detail/whisker_array__functions.h"
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

#include "robominer_msgs/msg/detail/whisker__functions.h"  // whiskers
#include "rosidl_runtime_c/string.h"  // representation
#include "rosidl_runtime_c/string_functions.h"  // representation
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_robominer_msgs__msg__Whisker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robominer_msgs__msg__Whisker(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robominer_msgs, msg, Whisker)();
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


using _WhiskerArray__ros_msg_type = robominer_msgs__msg__WhiskerArray;

static bool _WhiskerArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WhiskerArray__ros_msg_type * ros_message = static_cast<const _WhiskerArray__ros_msg_type *>(untyped_ros_message);
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

  // Field name: num_mux
  {
    cdr << ros_message->num_mux;
  }

  // Field name: num_sensors
  {
    cdr << ros_message->num_sensors;
  }

  // Field name: representation
  {
    const rosidl_runtime_c__String * str = &ros_message->representation;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: whiskers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robominer_msgs, msg, Whisker
      )()->data);
    size_t size = ros_message->whiskers.size;
    auto array_ptr = ros_message->whiskers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _WhiskerArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WhiskerArray__ros_msg_type * ros_message = static_cast<_WhiskerArray__ros_msg_type *>(untyped_ros_message);
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

  // Field name: num_mux
  {
    cdr >> ros_message->num_mux;
  }

  // Field name: num_sensors
  {
    cdr >> ros_message->num_sensors;
  }

  // Field name: representation
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->representation.data) {
      rosidl_runtime_c__String__init(&ros_message->representation);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->representation,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'representation'\n");
      return false;
    }
  }

  // Field name: whiskers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robominer_msgs, msg, Whisker
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->whiskers.data) {
      robominer_msgs__msg__Whisker__Sequence__fini(&ros_message->whiskers);
    }
    if (!robominer_msgs__msg__Whisker__Sequence__init(&ros_message->whiskers, size)) {
      return "failed to create array for field 'whiskers'";
    }
    auto array_ptr = ros_message->whiskers.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robominer_msgs
size_t get_serialized_size_robominer_msgs__msg__WhiskerArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WhiskerArray__ros_msg_type * ros_message = static_cast<const _WhiskerArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name num_mux
  {
    size_t item_size = sizeof(ros_message->num_mux);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_sensors
  {
    size_t item_size = sizeof(ros_message->num_sensors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name representation
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->representation.size + 1);
  // field.name whiskers
  {
    size_t array_size = ros_message->whiskers.size;
    auto array_ptr = ros_message->whiskers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_robominer_msgs__msg__Whisker(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WhiskerArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robominer_msgs__msg__WhiskerArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robominer_msgs
size_t max_serialized_size_robominer_msgs__msg__WhiskerArray(
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
  // member: num_mux
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_sensors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: representation
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: whiskers
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_robominer_msgs__msg__Whisker(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _WhiskerArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robominer_msgs__msg__WhiskerArray(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WhiskerArray = {
  "robominer_msgs::msg",
  "WhiskerArray",
  _WhiskerArray__cdr_serialize,
  _WhiskerArray__cdr_deserialize,
  _WhiskerArray__get_serialized_size,
  _WhiskerArray__max_serialized_size
};

static rosidl_message_type_support_t _WhiskerArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WhiskerArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robominer_msgs, msg, WhiskerArray)() {
  return &_WhiskerArray__type_support;
}

#if defined(__cplusplus)
}
#endif
