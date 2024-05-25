// Auto-generated. Do not edit!

// (in-package touch_custom_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class TouchState {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.IRBtransform = null;
      this.Joints = null;
      this.Functioncall = null;
      this.Gripcommand = null;
    }
    else {
      if (initObj.hasOwnProperty('IRBtransform')) {
        this.IRBtransform = initObj.IRBtransform
      }
      else {
        this.IRBtransform = new Array(16).fill(0);
      }
      if (initObj.hasOwnProperty('Joints')) {
        this.Joints = initObj.Joints
      }
      else {
        this.Joints = new Array(6).fill(0);
      }
      if (initObj.hasOwnProperty('Functioncall')) {
        this.Functioncall = initObj.Functioncall
      }
      else {
        this.Functioncall = false;
      }
      if (initObj.hasOwnProperty('Gripcommand')) {
        this.Gripcommand = initObj.Gripcommand
      }
      else {
        this.Gripcommand = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TouchState
    // Check that the constant length array field [IRBtransform] has the right length
    if (obj.IRBtransform.length !== 16) {
      throw new Error('Unable to serialize array field IRBtransform - length must be 16')
    }
    // Serialize message field [IRBtransform]
    bufferOffset = _arraySerializer.float64(obj.IRBtransform, buffer, bufferOffset, 16);
    // Check that the constant length array field [Joints] has the right length
    if (obj.Joints.length !== 6) {
      throw new Error('Unable to serialize array field Joints - length must be 6')
    }
    // Serialize message field [Joints]
    bufferOffset = _arraySerializer.float64(obj.Joints, buffer, bufferOffset, 6);
    // Serialize message field [Functioncall]
    bufferOffset = _serializer.bool(obj.Functioncall, buffer, bufferOffset);
    // Serialize message field [Gripcommand]
    bufferOffset = _serializer.float64(obj.Gripcommand, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TouchState
    let len;
    let data = new TouchState(null);
    // Deserialize message field [IRBtransform]
    data.IRBtransform = _arrayDeserializer.float64(buffer, bufferOffset, 16)
    // Deserialize message field [Joints]
    data.Joints = _arrayDeserializer.float64(buffer, bufferOffset, 6)
    // Deserialize message field [Functioncall]
    data.Functioncall = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [Gripcommand]
    data.Gripcommand = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 185;
  }

  static datatype() {
    // Returns string type for a message object
    return 'touch_custom_msgs/TouchState';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2bd38533ff540d6d79b941998e2b99a3';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64[16] IRBtransform
    float64[6] Joints
    bool Functioncall
    float64 Gripcommand
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TouchState(null);
    if (msg.IRBtransform !== undefined) {
      resolved.IRBtransform = msg.IRBtransform;
    }
    else {
      resolved.IRBtransform = new Array(16).fill(0)
    }

    if (msg.Joints !== undefined) {
      resolved.Joints = msg.Joints;
    }
    else {
      resolved.Joints = new Array(6).fill(0)
    }

    if (msg.Functioncall !== undefined) {
      resolved.Functioncall = msg.Functioncall;
    }
    else {
      resolved.Functioncall = false
    }

    if (msg.Gripcommand !== undefined) {
      resolved.Gripcommand = msg.Gripcommand;
    }
    else {
      resolved.Gripcommand = 0.0
    }

    return resolved;
    }
};

module.exports = TouchState;
