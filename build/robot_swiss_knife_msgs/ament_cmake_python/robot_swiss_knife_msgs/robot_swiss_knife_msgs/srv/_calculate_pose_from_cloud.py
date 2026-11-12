# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_swiss_knife_msgs:srv/CalculatePoseFromCloud.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CalculatePoseFromCloud_Request(type):
    """Metaclass of message 'CalculatePoseFromCloud_Request'."""

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
                'robot_swiss_knife_msgs.srv.CalculatePoseFromCloud_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calculate_pose_from_cloud__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calculate_pose_from_cloud__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calculate_pose_from_cloud__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calculate_pose_from_cloud__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calculate_pose_from_cloud__request

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CalculatePoseFromCloud_Request(metaclass=Metaclass_CalculatePoseFromCloud_Request):
    """Message class 'CalculatePoseFromCloud_Request'."""

    __slots__ = [
        '_point_cloud',
    ]

    _fields_and_field_types = {
        'point_cloud': 'sensor_msgs/PointCloud2',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import PointCloud2
        self.point_cloud = kwargs.get('point_cloud', PointCloud2())

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
        if self.point_cloud != other.point_cloud:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def point_cloud(self):
        """Message field 'point_cloud'."""
        return self._point_cloud

    @point_cloud.setter
    def point_cloud(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'point_cloud' field must be a sub message of type 'PointCloud2'"
        self._point_cloud = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CalculatePoseFromCloud_Response(type):
    """Metaclass of message 'CalculatePoseFromCloud_Response'."""

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
                'robot_swiss_knife_msgs.srv.CalculatePoseFromCloud_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calculate_pose_from_cloud__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calculate_pose_from_cloud__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calculate_pose_from_cloud__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calculate_pose_from_cloud__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calculate_pose_from_cloud__response

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CalculatePoseFromCloud_Response(metaclass=Metaclass_CalculatePoseFromCloud_Response):
    """Message class 'CalculatePoseFromCloud_Response'."""

    __slots__ = [
        '_pose',
        '_calculation_successful',
    ]

    _fields_and_field_types = {
        'pose': 'geometry_msgs/PoseStamped',
        'calculation_successful': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.pose = kwargs.get('pose', PoseStamped())
        self.calculation_successful = kwargs.get('calculation_successful', bool())

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
        if self.pose != other.pose:
            return False
        if self.calculation_successful != other.calculation_successful:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'pose' field must be a sub message of type 'PoseStamped'"
        self._pose = value

    @builtins.property
    def calculation_successful(self):
        """Message field 'calculation_successful'."""
        return self._calculation_successful

    @calculation_successful.setter
    def calculation_successful(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'calculation_successful' field must be of type 'bool'"
        self._calculation_successful = value


class Metaclass_CalculatePoseFromCloud(type):
    """Metaclass of service 'CalculatePoseFromCloud'."""

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
                'robot_swiss_knife_msgs.srv.CalculatePoseFromCloud')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__calculate_pose_from_cloud

            from robot_swiss_knife_msgs.srv import _calculate_pose_from_cloud
            if _calculate_pose_from_cloud.Metaclass_CalculatePoseFromCloud_Request._TYPE_SUPPORT is None:
                _calculate_pose_from_cloud.Metaclass_CalculatePoseFromCloud_Request.__import_type_support__()
            if _calculate_pose_from_cloud.Metaclass_CalculatePoseFromCloud_Response._TYPE_SUPPORT is None:
                _calculate_pose_from_cloud.Metaclass_CalculatePoseFromCloud_Response.__import_type_support__()


class CalculatePoseFromCloud(metaclass=Metaclass_CalculatePoseFromCloud):
    from robot_swiss_knife_msgs.srv._calculate_pose_from_cloud import CalculatePoseFromCloud_Request as Request
    from robot_swiss_knife_msgs.srv._calculate_pose_from_cloud import CalculatePoseFromCloud_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
