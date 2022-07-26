// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robominer_msgs:msg/SpectrometerMeasurement.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_MEASUREMENT__BUILDER_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_MEASUREMENT__BUILDER_HPP_

#include "robominer_msgs/msg/detail/spectrometer_measurement__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robominer_msgs
{

namespace msg
{

namespace builder
{

class Init_SpectrometerMeasurement_spectrum
{
public:
  explicit Init_SpectrometerMeasurement_spectrum(::robominer_msgs::msg::SpectrometerMeasurement & msg)
  : msg_(msg)
  {}
  ::robominer_msgs::msg::SpectrometerMeasurement spectrum(::robominer_msgs::msg::SpectrometerMeasurement::_spectrum_type arg)
  {
    msg_.spectrum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robominer_msgs::msg::SpectrometerMeasurement msg_;
};

class Init_SpectrometerMeasurement_exposure_time
{
public:
  explicit Init_SpectrometerMeasurement_exposure_time(::robominer_msgs::msg::SpectrometerMeasurement & msg)
  : msg_(msg)
  {}
  Init_SpectrometerMeasurement_spectrum exposure_time(::robominer_msgs::msg::SpectrometerMeasurement::_exposure_time_type arg)
  {
    msg_.exposure_time = std::move(arg);
    return Init_SpectrometerMeasurement_spectrum(msg_);
  }

private:
  ::robominer_msgs::msg::SpectrometerMeasurement msg_;
};

class Init_SpectrometerMeasurement_orientation
{
public:
  explicit Init_SpectrometerMeasurement_orientation(::robominer_msgs::msg::SpectrometerMeasurement & msg)
  : msg_(msg)
  {}
  Init_SpectrometerMeasurement_exposure_time orientation(::robominer_msgs::msg::SpectrometerMeasurement::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_SpectrometerMeasurement_exposure_time(msg_);
  }

private:
  ::robominer_msgs::msg::SpectrometerMeasurement msg_;
};

class Init_SpectrometerMeasurement_header
{
public:
  Init_SpectrometerMeasurement_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpectrometerMeasurement_orientation header(::robominer_msgs::msg::SpectrometerMeasurement::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SpectrometerMeasurement_orientation(msg_);
  }

private:
  ::robominer_msgs::msg::SpectrometerMeasurement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robominer_msgs::msg::SpectrometerMeasurement>()
{
  return robominer_msgs::msg::builder::Init_SpectrometerMeasurement_header();
}

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__SPECTROMETER_MEASUREMENT__BUILDER_HPP_
