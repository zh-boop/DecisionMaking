# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_swiss_knife_msgs:srv/UpdateKB.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UpdateKB_Request(type):
    """Metaclass of message 'UpdateKB_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INSERT': 0,
        'REMOVE': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_swiss_knife_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_swiss_knife_msgs.srv.UpdateKB_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__update_kb__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__update_kb__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__update_kb__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__update_kb__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__update_kb__request

            from robot_swiss_knife_msgs.msg import Fluent
            if Fluent.__class__._TYPE_SUPPORT is None:
                Fluent.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INSERT': cls.__constants['INSERT'],
            'REMOVE': cls.__constants['REMOVE'],
        }

    @property
    def INSERT(self):
        """Message constant 'INSERT'."""
        return Metaclass_UpdateKB_Request.__constants['INSERT']

    @property
    def REMOVE(self):
        """Message constant 'REMOVE'."""
        return Metaclass_UpdateKB_Request.__constants['REMOVE']


class UpdateKB_Request(metaclass=Metaclass_UpdateKB_Request):
    """
    Message class 'UpdateKB_Request'.

    Constants:
      INSERT
      REMOVE
    """

    __slots__ = [
        '_operation',
        '_fluents',
    ]

    _fields_and_field_types = {
        'operation': 'int8',
        'fluents': 'sequence<robot_swiss_knife_msgs/Fluent>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['robot_swiss_knife_msgs', 'msg'], 'Fluent')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.operation = kwargs.get('operation', int())
        self.fluents = kwargs.get('fluents', [])

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
        if self.operation != other.operation:
            return False
        if self.fluents != other.fluents:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def operation(self):
        """Message field 'operation'."""
        return self._operation

    @operation.setter
    def operation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operation' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'operation' field must be an integer in [-128, 127]"
        self._operation = value

    @builtins.property
    def fluents(self):
        """Message field 'fluents'."""
        return self._fluents

    @fluents.setter
    def fluents(self, value):
        if __debug__:
            from robot_swiss_knife_msgs.msg import Fluent
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
                 all(isinstance(v, Fluent) for v in value) and
                 True), \
                "The 'fluents' field must be a set or sequence and each value of type 'Fluent'"
        self._fluents = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UpdateKB_Response(type):
    """Metaclass of message 'UpdateKB_Response'."""

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
            module = import_type_support('robot_swiss_knife_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_swiss_knife_msgs.srv.UpdateKB_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__update_kb__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__update_kb__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__update_kb__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__update_kb__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__update_kb__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UpdateKB_Response(metaclass=Metaclass_UpdateKB_Response):
    """Message class 'UpdateKB_Response'."""

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


class Metaclass_UpdateKB(type):
    """Metaclass of service 'UpdateKB'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_swiss_knife_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_swiss_knife_msgs.srv.UpdateKB')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__update_kb

            from robot_swiss_knife_msgs.srv import _update_kb
            if _update_kb.Metaclass_UpdateKB_Request._TYPE_SUPPORT is None:
                _update_kb.Metaclass_UpdateKB_Request.__import_type_support__()
            if _update_kb.Metaclass_UpdateKB_Response._TYPE_SUPPORT is None:
                _update_kb.Metaclass_UpdateKB_Response.__import_type_support__()


class UpdateKB(metaclass=Metaclass_UpdateKB):
    from robot_swiss_knife_msgs.srv._update_kb import UpdateKB_Request as Request
    from robot_swiss_knife_msgs.srv._update_kb import UpdateKB_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
