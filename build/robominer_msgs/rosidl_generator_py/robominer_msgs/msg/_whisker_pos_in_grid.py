# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robominer_msgs:msg/WhiskerPosInGrid.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WhiskerPosInGrid(type):
    """Metaclass of message 'WhiskerPosInGrid'."""

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
                'robominer_msgs.msg.WhiskerPosInGrid')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__whisker_pos_in_grid
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__whisker_pos_in_grid
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__whisker_pos_in_grid
            cls._TYPE_SUPPORT = module.type_support_msg__msg__whisker_pos_in_grid
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__whisker_pos_in_grid

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WhiskerPosInGrid(metaclass=Metaclass_WhiskerPosInGrid):
    """Message class 'WhiskerPosInGrid'."""

    __slots__ = [
        '_row_num',
        '_col_num',
        '_offset_y',
    ]

    _fields_and_field_types = {
        'row_num': 'uint8',
        'col_num': 'uint8',
        'offset_y': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.row_num = kwargs.get('row_num', int())
        self.col_num = kwargs.get('col_num', int())
        self.offset_y = kwargs.get('offset_y', float())

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
        if self.row_num != other.row_num:
            return False
        if self.col_num != other.col_num:
            return False
        if self.offset_y != other.offset_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def row_num(self):
        """Message field 'row_num'."""
        return self._row_num

    @row_num.setter
    def row_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'row_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'row_num' field must be an unsigned integer in [0, 255]"
        self._row_num = value

    @property
    def col_num(self):
        """Message field 'col_num'."""
        return self._col_num

    @col_num.setter
    def col_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'col_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'col_num' field must be an unsigned integer in [0, 255]"
        self._col_num = value

    @property
    def offset_y(self):
        """Message field 'offset_y'."""
        return self._offset_y

    @offset_y.setter
    def offset_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_y' field must be of type 'float'"
        self._offset_y = value
