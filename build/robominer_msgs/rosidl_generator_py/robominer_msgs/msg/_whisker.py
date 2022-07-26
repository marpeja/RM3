# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robominer_msgs:msg/Whisker.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Whisker(type):
    """Metaclass of message 'Whisker'."""

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
                'robominer_msgs.msg.Whisker')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__whisker
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__whisker
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__whisker
            cls._TYPE_SUPPORT = module.type_support_msg__msg__whisker
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__whisker

            from robominer_msgs.msg import WhiskerPosInGrid
            if WhiskerPosInGrid.__class__._TYPE_SUPPORT is None:
                WhiskerPosInGrid.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Whisker(metaclass=Metaclass_Whisker):
    """Message class 'Whisker'."""

    __slots__ = [
        '_pos',
        '_has_error',
        '_x',
        '_y',
        '_z',
    ]

    _fields_and_field_types = {
        'pos': 'robominer_msgs/WhiskerPosInGrid',
        'has_error': 'boolean',
        'x': 'float',
        'y': 'float',
        'z': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['robominer_msgs', 'msg'], 'WhiskerPosInGrid'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from robominer_msgs.msg import WhiskerPosInGrid
        self.pos = kwargs.get('pos', WhiskerPosInGrid())
        self.has_error = kwargs.get('has_error', bool())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())

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
        if self.pos != other.pos:
            return False
        if self.has_error != other.has_error:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pos(self):
        """Message field 'pos'."""
        return self._pos

    @pos.setter
    def pos(self, value):
        if __debug__:
            from robominer_msgs.msg import WhiskerPosInGrid
            assert \
                isinstance(value, WhiskerPosInGrid), \
                "The 'pos' field must be a sub message of type 'WhiskerPosInGrid'"
        self._pos = value

    @property
    def has_error(self):
        """Message field 'has_error'."""
        return self._has_error

    @has_error.setter
    def has_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_error' field must be of type 'bool'"
        self._has_error = value

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

    @property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
        self._z = value
