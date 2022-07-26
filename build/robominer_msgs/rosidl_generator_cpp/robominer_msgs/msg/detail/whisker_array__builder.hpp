// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robominer_msgs:msg/WhiskerArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__WHISKER_ARRAY__BUILDER_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__WHISKER_ARRAY__BUILDER_HPP_

#include "robominer_msgs/msg/detail/whisker_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robominer_msgs
{

namespace msg
{

namespace builder
{

class Init_WhiskerArray_whiskers
{
public:
  explicit Init_WhiskerArray_whiskers(::robominer_msgs::msg::WhiskerArray & msg)
  : msg_(msg)
  {}
  ::robominer_msgs::msg::WhiskerArray whiskers(::robominer_msgs::msg::WhiskerArray::_whiskers_type arg)
  {
    msg_.whiskers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robominer_msgs::msg::WhiskerArray msg_;
};

class Init_WhiskerArray_representation
{
public:
  explicit Init_WhiskerArray_representation(::robominer_msgs::msg::WhiskerArray & msg)
  : msg_(msg)
  {}
  Init_WhiskerArray_whiskers representation(::robominer_msgs::msg::WhiskerArray::_representation_type arg)
  {
    msg_.representation = std::move(arg);
    return Init_WhiskerArray_whiskers(msg_);
  }

private:
  ::robominer_msgs::msg::WhiskerArray msg_;
};

class Init_WhiskerArray_num_sensors
{
public:
  explicit Init_WhiskerArray_num_sensors(::robominer_msgs::msg::WhiskerArray & msg)
  : msg_(msg)
  {}
  Init_WhiskerArray_representation num_sensors(::robominer_msgs::msg::WhiskerArray::_num_sensors_type arg)
  {
    msg_.num_sensors = std::move(arg);
    return Init_WhiskerArray_representation(msg_);
  }

private:
  ::robominer_msgs::msg::WhiskerArray msg_;
};

class Init_WhiskerArray_num_mux
{
public:
  explicit Init_WhiskerArray_num_mux(::robominer_msgs::msg::WhiskerArray & msg)
  : msg_(msg)
  {}
  Init_WhiskerArray_num_sensors num_mux(::robominer_msgs::msg::WhiskerArray::_num_mux_type arg)
  {
    msg_.num_mux = std::move(arg);
    return Init_WhiskerArray_num_sensors(msg_);
  }

private:
  ::robominer_msgs::msg::WhiskerArray msg_;
};

class Init_WhiskerArray_header
{
public:
  Init_WhiskerArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WhiskerArray_num_mux header(::robominer_msgs::msg::WhiskerArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WhiskerArray_num_mux(msg_);
  }

private:
  ::robominer_msgs::msg::WhiskerArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robominer_msgs::msg::WhiskerArray>()
{
  return robominer_msgs::msg::builder::Init_WhiskerArray_header();
}

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__WHISKER_ARRAY__BUILDER_HPP_
