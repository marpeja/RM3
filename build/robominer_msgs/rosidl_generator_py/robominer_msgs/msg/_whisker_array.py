# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robominer_msgs:msg/WhiskerArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WhiskerArray(type):
    """Metaclass of message 'WhiskerArray'."""

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
                'robominer_msgs.msg.WhiskerArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__whisker_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__whisker_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__whisker_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__whisker_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__whisker_array

            from robominer_msgs.msg import Whisker
            if Whisker.__class__._TYPE_SUPPORT is None:
                Whisker.__class__.__import_type_support__()

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


class WhiskerArray(metaclass=Metaclass_WhiskerArray):
    """Message class 'WhiskerArray'."""

    __slots__ = [
        '_header',
        '_num_mux',
        '_num_sensors',
        '_representation',
        '_whiskers',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'num_mux': 'uint8',
        'num_sensors': 'uint8',
        'representation': 'string',
        'whiskers': 'sequence<robominer_msgs/Whisker>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['robominer_msgs', 'msg'], 'Whisker')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.num_mux = kwargs.get('num_mux', int())
        self.num_sensors = kwargs.get('num_sensors', int())
        self.representation = kwargs.get('representation', str())
        self.whiskers = kwargs.get('whiskers', [])

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
        if self.num_mux != other.num_mux:
            return False
        if self.num_sensors != other.num_sensors:
            return False
        if self.representation != other.representation:
            return False
        if self.whiskers != other.whiskers:
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
    def num_mux(self):
        """Message field 'num_mux'."""
        return self._num_mux

    @num_mux.setter
    def num_mux(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_mux' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_mux' field must be an unsigned integer in [0, 255]"
        self._num_mux = value

    @property
    def num_sensors(self):
        """Message field 'num_sensors'."""
        return self._num_sensors

    @num_sensors.setter
    def num_sensors(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_sensors' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_sensors' field must be an unsigned integer in [0, 255]"
        self._num_sensors = value

    @property
    def representation(self):
        """Message field 'representation'."""
        return self._representation

    @representation.setter
    def representation(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'representation' field must be of type 'str'"
        self._representation = value

    @property
    def whiskers(self):
        """Message field 'whiskers'."""
        return self._whiskers

    @whiskers.setter
    def whiskers(self, value):
        if __debug__:
            from robominer_msgs.msg import Whisker
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Whisker) for v in value) and
                 True), \
                "The 'whiskers' field must be a set or sequence and each value of type 'Whisker'"
        self._whiskers = value
