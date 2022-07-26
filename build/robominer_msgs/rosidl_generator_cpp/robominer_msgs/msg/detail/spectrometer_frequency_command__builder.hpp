// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robominer_msgs:msg/SpectrometerFrequencyCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_FREQUENCY_COMMAND__BUILDER_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_FREQUENCY_COMMAND__BUILDER_HPP_

#include "robominer_msgs/msg/detail/spectrometer_frequency_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robominer_msgs
{

namespace msg
{

namespace builder
{

class Init_SpectrometerFrequencyCommand_frequency
{
public:
  explicit Init_SpectrometerFrequencyCommand_frequency(::robominer_msgs::msg::SpectrometerFrequencyCommand & msg)
  : msg_(msg)
  {}
  ::robominer_msgs::msg::SpectrometerFrequencyCommand frequency(::robominer_msgs::msg::SpectrometerFrequencyCommand::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robominer_msgs::msg::SpectrometerFrequencyCommand msg_;
};

class Init_SpectrometerFrequencyCommand_header
{
public:
  Init_SpectrometerFrequencyCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpectrometerFrequencyCommand_frequency header(::robominer_msgs::msg::SpectrometerFrequencyCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SpectrometerFrequencyCommand_frequency(msg_);
  }

private:
  ::robominer_msgs::msg::SpectrometerFrequencyCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robominer_msgs::msg::SpectrometerFrequencyCommand>()
{
  return robominer_msgs::msg::builder::Init_SpectrometerFrequencyCommand_header();
}

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_FREQUENCY_COMMAND__BUILDER_HPP_
