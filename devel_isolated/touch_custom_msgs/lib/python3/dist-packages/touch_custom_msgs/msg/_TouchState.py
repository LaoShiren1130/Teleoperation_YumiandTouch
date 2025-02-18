# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from touch_custom_msgs/TouchState.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class TouchState(genpy.Message):
  _md5sum = "2bd38533ff540d6d79b941998e2b99a3"
  _type = "touch_custom_msgs/TouchState"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float64[16] IRBtransform
float64[6] Joints
bool Functioncall
float64 Gripcommand"""
  __slots__ = ['IRBtransform','Joints','Functioncall','Gripcommand']
  _slot_types = ['float64[16]','float64[6]','bool','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       IRBtransform,Joints,Functioncall,Gripcommand

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TouchState, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.IRBtransform is None:
        self.IRBtransform = [0.] * 16
      if self.Joints is None:
        self.Joints = [0.] * 6
      if self.Functioncall is None:
        self.Functioncall = False
      if self.Gripcommand is None:
        self.Gripcommand = 0.
    else:
      self.IRBtransform = [0.] * 16
      self.Joints = [0.] * 6
      self.Functioncall = False
      self.Gripcommand = 0.

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
      buff.write(_get_struct_16d().pack(*self.IRBtransform))
      buff.write(_get_struct_6d().pack(*self.Joints))
      _x = self
      buff.write(_get_struct_Bd().pack(_x.Functioncall, _x.Gripcommand))
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
      end = 0
      start = end
      end += 128
      self.IRBtransform = _get_struct_16d().unpack(str[start:end])
      start = end
      end += 48
      self.Joints = _get_struct_6d().unpack(str[start:end])
      _x = self
      start = end
      end += 9
      (_x.Functioncall, _x.Gripcommand,) = _get_struct_Bd().unpack(str[start:end])
      self.Functioncall = bool(self.Functioncall)
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
      buff.write(self.IRBtransform.tostring())
      buff.write(self.Joints.tostring())
      _x = self
      buff.write(_get_struct_Bd().pack(_x.Functioncall, _x.Gripcommand))
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
      end = 0
      start = end
      end += 128
      self.IRBtransform = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=16)
      start = end
      end += 48
      self.Joints = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=6)
      _x = self
      start = end
      end += 9
      (_x.Functioncall, _x.Gripcommand,) = _get_struct_Bd().unpack(str[start:end])
      self.Functioncall = bool(self.Functioncall)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_16d = None
def _get_struct_16d():
    global _struct_16d
    if _struct_16d is None:
        _struct_16d = struct.Struct("<16d")
    return _struct_16d
_struct_6d = None
def _get_struct_6d():
    global _struct_6d
    if _struct_6d is None:
        _struct_6d = struct.Struct("<6d")
    return _struct_6d
_struct_Bd = None
def _get_struct_Bd():
    global _struct_Bd
    if _struct_Bd is None:
        _struct_Bd = struct.Struct("<Bd")
    return _struct_Bd
