# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_swiss_knife_msgs:srv/EstimateAnthropometricParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EstimateAnthropometricParameters_Request(type):
    """Metaclass of message 'EstimateAnthropometricParameters_Request'."""

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
                'robot_swiss_knife_msgs.srv.EstimateAnthropometricParameters_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__estimate_anthropometric_parameters__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__estimate_anthropometric_parameters__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__estimate_anthropometric_parameters__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__estimate_anthropometric_parameters__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__estimate_anthropometric_parameters__request

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


class EstimateAnthropometricParameters_Request(metaclass=Metaclass_EstimateAnthropometricParameters_Request):
    """Message class 'EstimateAnthropometricParameters_Request'."""

    __slots__ = [
        '_image',
    ]

    _fields_and_field_types = {
        'image': 'sensor_msgs/Image',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.image = kwargs.get('image', Image())

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


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_EstimateAnthropometricParameters_Response(type):
    """Metaclass of message 'EstimateAnthropometricParameters_Response'."""

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
                'robot_swiss_knife_msgs.srv.EstimateAnthropometricParameters_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__estimate_anthropometric_parameters__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__estimate_anthropometric_parameters__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__estimate_anthropometric_parameters__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__estimate_anthropometric_parameters__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__estimate_anthropometric_parameters__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EstimateAnthropometricParameters_Response(metaclass=Metaclass_EstimateAnthropometricParameters_Response):
    """Message class 'EstimateAnthropometricParameters_Response'."""

    __slots__ = [
        '_height_cm',
        '_mass_kg',
    ]

    _fields_and_field_types = {
        'height_cm': 'float',
        'mass_kg': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.height_cm = kwargs.get('height_cm', float())
        self.mass_kg = kwargs.get('mass_kg', float())

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
        if self.height_cm != other.height_cm:
            return False
        if self.mass_kg != other.mass_kg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def height_cm(self):
        """Message field 'height_cm'."""
        return self._height_cm

    @height_cm.setter
    def height_cm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height_cm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height_cm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height_cm = value

    @builtins.property
    def mass_kg(self):
        """Message field 'mass_kg'."""
        return self._mass_kg

    @mass_kg.setter
    def mass_kg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mass_kg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mass_kg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mass_kg = value


class Metaclass_EstimateAnthropometricParameters(type):
    """Metaclass of service 'EstimateAnthropometricParameters'."""

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
                'robot_swiss_knife_msgs.srv.EstimateAnthropometricParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__estimate_anthropometric_parameters

            from robot_swiss_knife_msgs.srv import _estimate_anthropometric_parameters
            if _estimate_anthropometric_parameters.Metaclass_EstimateAnthropometricParameters_Request._TYPE_SUPPORT is None:
                _estimate_anthropometric_parameters.Metaclass_EstimateAnthropometricParameters_Request.__import_type_support__()
            if _estimate_anthropometric_parameters.Metaclass_EstimateAnthropometricParameters_Response._TYPE_SUPPORT is None:
                _estimate_anthropometric_parameters.Metaclass_EstimateAnthropometricParameters_Response.__import_type_support__()


class EstimateAnthropometricParameters(metaclass=Metaclass_EstimateAnthropometricParameters):
    from robot_swiss_knife_msgs.srv._estimate_anthropometric_parameters import EstimateAnthropometricParameters_Request as Request
    from robot_swiss_knife_msgs.srv._estimate_anthropometric_parameters import EstimateAnthropometricParameters_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
