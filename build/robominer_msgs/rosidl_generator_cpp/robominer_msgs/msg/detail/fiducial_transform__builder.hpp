// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robominer_msgs:msg/FiducialTransform.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM__BUILDER_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM__BUILDER_HPP_

#include "robominer_msgs/msg/detail/fiducial_transform__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robominer_msgs
{

namespace msg
{

namespace builder
{

class Init_FiducialTransform_fiducial_area
{
public:
  explicit Init_FiducialTransform_fiducial_area(::robominer_msgs::msg::FiducialTransform & msg)
  : msg_(msg)
  {}
  ::robominer_msgs::msg::FiducialTransform fiducial_area(::robominer_msgs::msg::FiducialTransform::_fiducial_area_type arg)
  {
    msg_.fiducial_area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robominer_msgs::msg::FiducialTransform msg_;
};

class Init_FiducialTransform_object_error
{
public:
  explicit Init_FiducialTransform_object_error(::robominer_msgs::msg::FiducialTransform & msg)
  : msg_(msg)
  {}
  Init_FiducialTransform_fiducial_area object_error(::robominer_msgs::msg::FiducialTransform::_object_error_type arg)
  {
    msg_.object_error = std::move(arg);
    return Init_FiducialTransform_fiducial_area(msg_);
  }

private:
  ::robominer_msgs::msg::FiducialTransform msg_;
};

class Init_FiducialTransform_image_error
{
public:
  explicit Init_FiducialTransform_image_error(::robominer_msgs::msg::FiducialTransform & msg)
  : msg_(msg)
  {}
  Init_FiducialTransform_object_error image_error(::robominer_msgs::msg::FiducialTransform::_image_error_type arg)
  {
    msg_.image_error = std::move(arg);
    return Init_FiducialTransform_object_error(msg_);
  }

private:
  ::robominer_msgs::msg::FiducialTransform msg_;
};

class Init_FiducialTransform_transform
{
public:
  explicit Init_FiducialTransform_transform(::robominer_msgs::msg::FiducialTransform & msg)
  : msg_(msg)
  {}
  Init_FiducialTransform_image_error transform(::robominer_msgs::msg::FiducialTransform::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return Init_FiducialTransform_image_error(msg_);
  }

private:
  ::robominer_msgs::msg::FiducialTransform msg_;
};

class Init_FiducialTransform_fiducial_id
{
public:
  Init_FiducialTransform_fiducial_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FiducialTransform_transform fiducial_id(::robominer_msgs::msg::FiducialTransform::_fiducial_id_type arg)
  {
    msg_.fiducial_id = std::move(arg);
    return Init_FiducialTransform_transform(msg_);
  }

private:
  ::robominer_msgs::msg::FiducialTransform msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robominer_msgs::msg::FiducialTransform>()
{
  return robominer_msgs::msg::builder::Init_FiducialTransform_fiducial_id();
}

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM__BUILDER_HPP_
