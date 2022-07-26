// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robominer_msgs:msg/FiducialTransformArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM_ARRAY__BUILDER_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM_ARRAY__BUILDER_HPP_

#include "robominer_msgs/msg/detail/fiducial_transform_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robominer_msgs
{

namespace msg
{

namespace builder
{

class Init_FiducialTransformArray_transforms
{
public:
  explicit Init_FiducialTransformArray_transforms(::robominer_msgs::msg::FiducialTransformArray & msg)
  : msg_(msg)
  {}
  ::robominer_msgs::msg::FiducialTransformArray transforms(::robominer_msgs::msg::FiducialTransformArray::_transforms_type arg)
  {
    msg_.transforms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robominer_msgs::msg::FiducialTransformArray msg_;
};

class Init_FiducialTransformArray_image_seq
{
public:
  explicit Init_FiducialTransformArray_image_seq(::robominer_msgs::msg::FiducialTransformArray & msg)
  : msg_(msg)
  {}
  Init_FiducialTransformArray_transforms image_seq(::robominer_msgs::msg::FiducialTransformArray::_image_seq_type arg)
  {
    msg_.image_seq = std::move(arg);
    return Init_FiducialTransformArray_transforms(msg_);
  }

private:
  ::robominer_msgs::msg::FiducialTransformArray msg_;
};

class Init_FiducialTransformArray_header
{
public:
  Init_FiducialTransformArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FiducialTransformArray_image_seq header(::robominer_msgs::msg::FiducialTransformArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FiducialTransformArray_image_seq(msg_);
  }

private:
  ::robominer_msgs::msg::FiducialTransformArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robominer_msgs::msg::FiducialTransformArray>()
{
  return robominer_msgs::msg::builder::Init_FiducialTransformArray_header();
}

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__FIDUCIAL_TRANSFORM_ARRAY__BUILDER_HPP_
