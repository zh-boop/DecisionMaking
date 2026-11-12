# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_swiss_knife_msgs:srv/SegmentObjects.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SegmentObjects_Request(type):
    """Metaclass of message 'SegmentObjects_Request'."""

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
                'robot_swiss_knife_msgs.srv.SegmentObjects_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__segment_objects__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__segment_objects__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__segment_objects__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__segment_objects__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__segment_objects__request

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SegmentObjects_Request(metaclass=Metaclass_SegmentObjects_Request):
    """Message class 'SegmentObjects_Request'."""

    __slots__ = [
        '_image',
        '_object_categories',
    ]

    _fields_and_field_types = {
        'image': 'sensor_msgs/Image',
        'object_categories': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.image = kwargs.get('image', Image())
        self.object_categories = kwargs.get('object_categories', [])

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
        if self.image != other.image:
            return False
        if self.object_categories != other.object_categories:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'image' field must be a sub message of type 'Image'"
        self._image = value

    @builtins.property
    def object_categories(self):
        """Message field 'object_categories'."""
        return self._object_categories

    @object_categories.setter
    def object_categories(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'object_categories' field must be a set or sequence and each value of type 'str'"
        self._object_categories = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SegmentObjects_Response(type):
    """Metaclass of message 'SegmentObjects_Response'."""

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
                'robot_swiss_knife_msgs.srv.SegmentObjects_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__segment_objects__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__segment_objects__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__segment_objects__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__segment_objects__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__segment_objects__response

            from robot_swiss_knife_msgs.msg import Object
            if Object.__class__._TYPE_SUPPORT is None:
                Object.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SegmentObjects_Response(metaclass=Metaclass_SegmentObjects_Response):
    """Message class 'SegmentObjects_Response'."""

    __slots__ = [
        '_objects',
    ]

    _fields_and_field_types = {
        'objects': 'sequence<robot_swiss_knife_msgs/Object>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['robot_swiss_knife_msgs', 'msg'], 'Object')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.objects = kwargs.get('objects', [])

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
        if self.objects != other.objects:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def objects(self):
        """Message field 'objects'."""
        return self._objects

    @objects.setter
    def objects(self, value):
        if __debug__:
            from robot_swiss_knife_msgs.msg import Object
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
                 all(isinstance(v, Object) for v in value) and
                 True), \
                "The 'objects' field must be a set or sequence and each value of type 'Object'"
        self._objects = value


class Metaclass_SegmentObjects(type):
    """Metaclass of service 'SegmentObjects'."""

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
                'robot_swiss_knife_msgs.srv.SegmentObjects')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__segment_objects

            from robot_swiss_knife_msgs.srv import _segment_objects
            if _segment_objects.Metaclass_SegmentObjects_Request._TYPE_SUPPORT is None:
                _segment_objects.Metaclass_SegmentObjects_Request.__import_type_support__()
            if _segment_objects.Metaclass_SegmentObjects_Response._TYPE_SUPPORT is None:
                _segment_objects.Metaclass_SegmentObjects_Response.__import_type_support__()


class SegmentObjects(metaclass=Metaclass_SegmentObjects):
    from robot_swiss_knife_msgs.srv._segment_objects import SegmentObjects_Request as Request
    from robot_swiss_knife_msgs.srv._segment_objects import SegmentObjects_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
