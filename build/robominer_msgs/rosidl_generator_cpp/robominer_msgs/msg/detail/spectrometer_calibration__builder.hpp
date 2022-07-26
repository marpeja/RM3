// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robominer_msgs:msg/SpectrometerCalibration.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_CALIBRATION__BUILDER_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_CALIBRATION__BUILDER_HPP_

#include "robominer_msgs/msg/detail/spectrometer_calibration__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robominer_msgs
{

namespace msg
{

namespace builder
{

class Init_SpectrometerCalibration_parameters
{
public:
  explicit Init_SpectrometerCalibration_parameters(::robominer_msgs::msg::SpectrometerCalibration & msg)
  : msg_(msg)
  {}
  ::robominer_msgs::msg::SpectrometerCalibration parameters(::robominer_msgs::msg::SpectrometerCalibration::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robominer_msgs::msg::SpectrometerCalibration msg_;
};

class Init_SpectrometerCalibration_header
{
public:
  Init_SpectrometerCalibration_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpectrometerCalibration_parameters header(::robominer_msgs::msg::SpectrometerCalibration::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SpectrometerCalibration_parameters(msg_);
  }

private:
  ::robominer_msgs::msg::SpectrometerCalibration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robominer_msgs::msg::SpectrometerCalibration>()
{
  return robominer_msgs::msg::builder::Init_SpectrometerCalibration_header();
}

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_CALIBRATION__BUILDER_HPP_
