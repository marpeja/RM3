# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robominer_msgs:msg/SpectrometerMeasurement.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'spectrum'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpectrometerMeasurement(type):
    """Metaclass of message 'SpectrometerMeasurement'."""

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
                'robominer_msgs.msg.SpectrometerMeasurement')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__spectrometer_measurement
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__spectrometer_measurement
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__spectrometer_measurement
            cls._TYPE_SUPPORT = module.type_support_msg__msg__spectrometer_measurement
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__spectrometer_measurement

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

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


class SpectrometerMeasurement(metaclass=Metaclass_SpectrometerMeasurement):
    """Message class 'SpectrometerMeasurement'."""

    __slots__ = [
        '_header',
        '_orientation',
        '_exposure_time',
        '_spectrum',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'orientation': 'geometry_msgs/Vector3',
        'exposure_time': 'uint16',
        'spectrum': 'uint16[288]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 288),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Vector3
        self.orientation = kwargs.get('orientation', Vector3())
        self.exposure_time = kwargs.get('exposure_time', int())
        if 'spectrum' not in kwargs:
            self.spectrum = numpy.zeros(288, dtype=numpy.uint16)
        else:
            self.spectrum = numpy.array(kwargs.get('spectrum'), dtype=numpy.uint16)
            assert self.spectrum.shape == (288, )

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
        if self.orientation != other.orientation:
            return False
        if self.exposure_time != other.exposure_time:
            return False
        if all(self.spectrum != other.spectrum):
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
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'orientation' field must be a sub message of type 'Vector3'"
        self._orientation = value

    @property
    def exposure_time(self):
        """Message field 'exposure_time'."""
        return self._exposure_time

    @exposure_time.setter
    def exposure_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'exposure_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'exposure_time' field must be an unsigned integer in [0, 65535]"
        self._exposure_time = value

    @property
    def spectrum(self):
        """Message field 'spectrum'."""
        return self._spectrum

    @spectrum.setter
    def spectrum(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint16, \
                "The 'spectrum' numpy.ndarray() must have the dtype of 'numpy.uint16'"
            assert value.size == 288, \
                "The 'spectrum' numpy.ndarray() must have a size of 288"
            self._spectrum = value
            return
        if __debug__:
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
                 len(value) == 288 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'spectrum' field must be a set or sequence with length 288 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._spectrum = numpy.array(value, dtype=numpy.uint16)
