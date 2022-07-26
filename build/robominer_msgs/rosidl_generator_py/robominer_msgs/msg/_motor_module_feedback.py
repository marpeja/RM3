# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robominer_msgs:msg/MotorModuleFeedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorModuleFeedback(type):
    """Metaclass of message 'MotorModuleFeedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robominer_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robominer_msgs.msg.MotorModuleFeedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_module_feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_module_feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_module_feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_module_feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_module_feedback

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorModuleFeedback(metaclass=Metaclass_MotorModuleFeedback):
    """Message class 'MotorModuleFeedback'."""

    __slots__ = [
        '_header',
        '_motor_id',
        '_motor_rpm',
        '_motor_current_ma',
        '_motor_voltage_v',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'motor_id': 'string',
        'motor_rpm': 'float',
        'motor_current_ma': 'float',
        'motor_voltage_v': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.motor_id = kwargs.get('motor_id', str())
        self.motor_rpm = kwargs.get('motor_rpm', float())
        self.motor_current_ma = kwargs.get('motor_current_ma', float())
        self.motor_voltage_v = kwargs.get('motor_voltage_v', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.motor_id != other.motor_id:
            return False
        if self.motor_rpm != other.motor_rpm:
            return False
        if self.motor_current_ma != other.motor_current_ma:
            return False
        if self.motor_voltage_v != other.motor_voltage_v:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def motor_id(self):
        """Message field 'motor_id'."""
        return self._motor_id

    @motor_id.setter
    def motor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'motor_id' field must be of type 'str'"
        self._motor_id = value

    @property
    def motor_rpm(self):
        """Message field 'motor_rpm'."""
        return self._motor_rpm

    @motor_rpm.setter
    def motor_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_rpm' field must be of type 'float'"
        self._motor_rpm = value

    @property
    def motor_current_ma(self):
        """Message field 'motor_current_ma'."""
        return self._motor_current_ma

    @motor_current_ma.setter
    def motor_current_ma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_current_ma' field must be of type 'float'"
        self._motor_current_ma = value

    @property
    def motor_voltage_v(self):
        """Message field 'motor_voltage_v'."""
        return self._motor_voltage_v

    @motor_voltage_v.setter
    def motor_voltage_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_voltage_v' field must be of type 'float'"
        self._motor_voltage_v = value
