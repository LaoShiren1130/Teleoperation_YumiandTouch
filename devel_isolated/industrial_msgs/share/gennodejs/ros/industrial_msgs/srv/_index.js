
"use strict";

let SetRemoteLoggerLevel = require('./SetRemoteLoggerLevel.js')
let GetRobotInfo = require('./GetRobotInfo.js')
let StartMotion = require('./StartMotion.js')
let SetDrivePower = require('./SetDrivePower.js')
let CmdJointTrajectory = require('./CmdJointTrajectory.js')
let StopMotion = require('./StopMotion.js')

module.exports = {
  SetRemoteLoggerLevel: SetRemoteLoggerLevel,
  GetRobotInfo: GetRobotInfo,
  StartMotion: StartMotion,
  SetDrivePower: SetDrivePower,
  CmdJointTrajectory: CmdJointTrajectory,
  StopMotion: StopMotion,
};
