# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dms_interfaces:srv/PubResCmdVel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PubResCmdVel_Request(type):
    """Metaclass of message 'PubResCmdVel_Request'."""

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
                'dms_interfaces.srv.PubResCmdVel_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pub_res_cmd_vel__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pub_res_cmd_vel__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pub_res_cmd_vel__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pub_res_cmd_vel__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pub_res_cmd_vel__request

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PubResCmdVel_Request(metaclass=Metaclass_PubResCmdVel_Request):
    """Message class 'PubResCmdVel_Request'."""

    __slots__ = [
        '_cmd_vel',
    ]

    _fields_and_field_types = {
        'cmd_vel': 'geometry_msgs/Twist',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Twist
        self.cmd_vel = kwargs.get('cmd_vel', Twist())

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
        if self.cmd_vel != other.cmd_vel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cmd_vel(self):
        """Message field 'cmd_vel'."""
        return self._cmd_vel

    @cmd_vel.setter
    def cmd_vel(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'cmd_vel' field must be a sub message of type 'Twist'"
        self._cmd_vel = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PubResCmdVel_Response(type):
    """Metaclass of message 'PubResCmdVel_Response'."""

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
                'dms_interfaces.srv.PubResCmdVel_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pub_res_cmd_vel__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pub_res_cmd_vel__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pub_res_cmd_vel__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pub_res_cmd_vel__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pub_res_cmd_vel__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PubResCmdVel_Response(metaclass=Metaclass_PubResCmdVel_Response):
    """Message class 'PubResCmdVel_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_PubResCmdVel(type):
    """Metaclass of service 'PubResCmdVel'."""

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
                'dms_interfaces.srv.PubResCmdVel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__pub_res_cmd_vel

            from dms_interfaces.srv import _pub_res_cmd_vel
            if _pub_res_cmd_vel.Metaclass_PubResCmdVel_Request._TYPE_SUPPORT is None:
                _pub_res_cmd_vel.Metaclass_PubResCmdVel_Request.__import_type_support__()
            if _pub_res_cmd_vel.Metaclass_PubResCmdVel_Response._TYPE_SUPPORT is None:
                _pub_res_cmd_vel.Metaclass_PubResCmdVel_Response.__import_type_support__()


class PubResCmdVel(metaclass=Metaclass_PubResCmdVel):
    from dms_interfaces.srv._pub_res_cmd_vel import PubResCmdVel_Request as Request
    from dms_interfaces.srv._pub_res_cmd_vel import PubResCmdVel_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
