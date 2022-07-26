// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robominer_msgs:msg/SpectrometerMeasurement.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robominer_msgs/msg/detail/spectrometer_measurement__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robominer_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SpectrometerMeasurement_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robominer_msgs::msg::SpectrometerMeasurement(_init);
}

void SpectrometerMeasurement_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robominer_msgs::msg::SpectrometerMeasurement *>(message_memory);
  typed_message->~SpectrometerMeasurement();
}

size_t size_function__SpectrometerMeasurement__spectrum(const void * untyped_member)
{
  (void)untyped_member;
  return 288;
}

const void * get_const_function__SpectrometerMeasurement__spectrum(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 288> *>(untyped_member);
  return &member[index];
}

void * get_function__SpectrometerMeasurement__spectrum(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 288> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SpectrometerMeasurement_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs::msg::SpectrometerMeasurement, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs::msg::SpectrometerMeasurement, orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "exposure_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs::msg::SpectrometerMeasurement, exposure_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "spectrum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    288,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs::msg::SpectrometerMeasurement, spectrum),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpectrometerMeasurement__spectrum,  // size() function pointer
    get_const_function__SpectrometerMeasurement__spectrum,  // get_const(index) function pointer
    get_function__SpectrometerMeasurement__spectrum,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SpectrometerMeasurement_message_members = {
  "robominer_msgs::msg",  // message namespace
  "SpectrometerMeasurement",  // message name
  4,  // number of fields
  sizeof(robominer_msgs::msg::SpectrometerMeasurement),
  SpectrometerMeasurement_message_member_array,  // message members
  SpectrometerMeasurement_init_function,  // function to initialize message memory (memory has to be allocated)
  SpectrometerMeasurement_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SpectrometerMeasurement_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpectrometerMeasurement_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robominer_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robominer_msgs::msg::SpectrometerMeasurement>()
{
  return &::robominer_msgs::msg::rosidl_typesupport_introspection_cpp::SpectrometerMeasurement_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robominer_msgs, msg, SpectrometerMeasurement)() {
  return &::robominer_msgs::msg::rosidl_typesupport_introspection_cpp::SpectrometerMeasurement_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
