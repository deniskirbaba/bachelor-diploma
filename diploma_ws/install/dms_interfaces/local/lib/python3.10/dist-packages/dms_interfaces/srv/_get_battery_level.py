# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dms_interfaces:srv/GetBatteryLevel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetBatteryLevel_Request(type):
    """Metaclass of message 'GetBatteryLevel_Request'."""

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
            module = import_type_support('dms_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dms_interfaces.srv.GetBatteryLevel_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_battery_level__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_battery_level__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_battery_level__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_battery_level__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_battery_level__request

            from std_msgs.msg import Empty
            if Empty.__class__._TYPE_SUPPORT is None:
                Empty.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetBatteryLevel_Request(metaclass=Metaclass_GetBatteryLevel_Request):
    """Message class 'GetBatteryLevel_Request'."""

    __slots__ = [
        '_empty_request',
    ]

    _fields_and_field_types = {
        'empty_request': 'std_msgs/Empty',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Empty'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Empty
        self.empty_request = kwargs.get('empty_request', Empty())

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
        if self.empty_request != other.empty_request:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def empty_request(self):
        """Message field 'empty_request'."""
        return self._empty_request

    @empty_request.setter
    def empty_request(self, value):
        if __debug__:
            from std_msgs.msg import Empty
            assert \
                isinstance(value, Empty), \
                "The 'empty_request' field must be a sub message of type 'Empty'"
        self._empty_request = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetBatteryLevel_Response(type):
    """Metaclass of message 'GetBatteryLevel_Response'."""

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
            module = import_type_support('dms_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dms_interfaces.srv.GetBatteryLevel_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_battery_level__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_battery_level__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_battery_level__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_battery_level__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_battery_level__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetBatteryLevel_Response(metaclass=Metaclass_GetBatteryLevel_Response):
    """Message class 'GetBatteryLevel_Response'."""

    __slots__ = [
        '_battery_level',
        '_idle_consumption',
        '_drive_consumption',
    ]

    _fields_and_field_types = {
        'battery_level': 'double',
        'idle_consumption': 'double',
        'drive_consumption': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.battery_level = kwargs.get('battery_level', float())
        self.idle_consumption = kwargs.get('idle_consumption', float())
        self.drive_consumption = kwargs.get('drive_consumption', float())

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
        if self.battery_level != other.battery_level:
            return False
        if self.idle_consumption != other.idle_consumption:
            return False
        if self.drive_consumption != other.drive_consumption:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def battery_level(self):
        """Message field 'battery_level'."""
        return self._battery_level

    @battery_level.setter
    def battery_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_level' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_level' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_level = value

    @builtins.property
    def idle_consumption(self):
        """Message field 'idle_consumption'."""
        return self._idle_consumption

    @idle_consumption.setter
    def idle_consumption(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'idle_consumption' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'idle_consumption' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._idle_consumption = value

    @builtins.property
    def drive_consumption(self):
        """Message field 'drive_consumption'."""
        return self._drive_consumption

    @drive_consumption.setter
    def drive_consumption(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'drive_consumption' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'drive_consumption' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._drive_consumption = value


class Metaclass_GetBatteryLevel(type):
    """Metaclass of service 'GetBatteryLevel'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dms_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dms_interfaces.srv.GetBatteryLevel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_battery_level

            from dms_interfaces.srv import _get_battery_level
            if _get_battery_level.Metaclass_GetBatteryLevel_Request._TYPE_SUPPORT is None:
                _get_battery_level.Metaclass_GetBatteryLevel_Request.__import_type_support__()
            if _get_battery_level.Metaclass_GetBatteryLevel_Response._TYPE_SUPPORT is None:
                _get_battery_level.Metaclass_GetBatteryLevel_Response.__import_type_support__()


class GetBatteryLevel(metaclass=Metaclass_GetBatteryLevel):
    from dms_interfaces.srv._get_battery_level import GetBatteryLevel_Request as Request
    from dms_interfaces.srv._get_battery_level import GetBatteryLevel_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
