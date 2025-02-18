# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from abb_rapid_msgs/LoadData.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import abb_rapid_msgs.msg

class LoadData(genpy.Message):
  _md5sum = "dfe575484752eff5e837f54d2fd939e4"
  _type = "abb_rapid_msgs/LoadData"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#-------------------------------------------------------------------------------
# Description:
#   The purpose of this message definition, is to represent the
#   RAPID data type "loaddata" (load data).
#
# Note:
#   Please see the "Technical reference manual - RAPID Instructions,
#   Functions and Data types" for more details.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Message fields
#-------------------------------------------------------------------------------
# The mass (weight) of the load in kg.
float32 mass

# The center of gravity of the payload, expressed in mm,
# in the tool coordinate system if the robot is holding the tool.
#
# If a stationary tool is used then the center of gravity for the payload
# held by the gripper is expressed in the object frame of the work object
# coordinate system moved by the robot.
Pos cog

# The orientation of the axes of moment.
#
# These are the principal axes of the payload
# moment of inertia with origin in cog.
#
# If the robot is holding the tool, the axes of moment
# are expressed in the tool coordinate system.
Orient aom

# The moment of inertia of the load around the x-, y- and z-axis,
# expressed in kgm^2.
float32 ix
float32 iy
float32 iz

================================================================================
MSG: abb_rapid_msgs/Pos
#-------------------------------------------------------------------------------
# Description:
#   The purpose of this message definition, is to represent the
#   RAPID data type "pos" (positions (only X, Y and Z)).
#
# Note:
#   Please see the "Technical reference manual - RAPID Instructions,
#   Functions and Data types" for more details.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Message fields
#-------------------------------------------------------------------------------
# The x-, y- and z-value of the position.
float32 x
float32 y
float32 z

================================================================================
MSG: abb_rapid_msgs/Orient
#-------------------------------------------------------------------------------
# Description:
#   The purpose of this message definition, is to represent the
#   RAPID data type "orient" (orientation).
#
# Note:
#   Please see the "Technical reference manual - RAPID Instructions,
#   Functions and Data types" for more details.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Message fields
#-------------------------------------------------------------------------------
# Quaternion 1-4.
float32 q1
float32 q2
float32 q3
float32 q4
"""
  __slots__ = ['mass','cog','aom','ix','iy','iz']
  _slot_types = ['float32','abb_rapid_msgs/Pos','abb_rapid_msgs/Orient','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       mass,cog,aom,ix,iy,iz

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LoadData, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.mass is None:
        self.mass = 0.
      if self.cog is None:
        self.cog = abb_rapid_msgs.msg.Pos()
      if self.aom is None:
        self.aom = abb_rapid_msgs.msg.Orient()
      if self.ix is None:
        self.ix = 0.
      if self.iy is None:
        self.iy = 0.
      if self.iz is None:
        self.iz = 0.
    else:
      self.mass = 0.
      self.cog = abb_rapid_msgs.msg.Pos()
      self.aom = abb_rapid_msgs.msg.Orient()
      self.ix = 0.
      self.iy = 0.
      self.iz = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_11f().pack(_x.mass, _x.cog.x, _x.cog.y, _x.cog.z, _x.aom.q1, _x.aom.q2, _x.aom.q3, _x.aom.q4, _x.ix, _x.iy, _x.iz))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.cog is None:
        self.cog = abb_rapid_msgs.msg.Pos()
      if self.aom is None:
        self.aom = abb_rapid_msgs.msg.Orient()
      end = 0
      _x = self
      start = end
      end += 44
      (_x.mass, _x.cog.x, _x.cog.y, _x.cog.z, _x.aom.q1, _x.aom.q2, _x.aom.q3, _x.aom.q4, _x.ix, _x.iy, _x.iz,) = _get_struct_11f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_11f().pack(_x.mass, _x.cog.x, _x.cog.y, _x.cog.z, _x.aom.q1, _x.aom.q2, _x.aom.q3, _x.aom.q4, _x.ix, _x.iy, _x.iz))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.cog is None:
        self.cog = abb_rapid_msgs.msg.Pos()
      if self.aom is None:
        self.aom = abb_rapid_msgs.msg.Orient()
      end = 0
      _x = self
      start = end
      end += 44
      (_x.mass, _x.cog.x, _x.cog.y, _x.cog.z, _x.aom.q1, _x.aom.q2, _x.aom.q3, _x.aom.q4, _x.ix, _x.iy, _x.iz,) = _get_struct_11f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_11f = None
def _get_struct_11f():
    global _struct_11f
    if _struct_11f is None:
        _struct_11f = struct.Struct("<11f")
    return _struct_11f
