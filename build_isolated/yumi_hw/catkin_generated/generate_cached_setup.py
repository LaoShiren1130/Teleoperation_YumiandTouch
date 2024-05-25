# -*- coding: utf-8 -*-
from __future__ import print_function

import os
import stat
import sys

# find the import for catkin's python package - either from source space or from an installed underlay
if os.path.exists(os.path.join('/opt/ros/noetic/share/catkin/cmake', 'catkinConfig.cmake.in')):
    sys.path.insert(0, os.path.join('/opt/ros/noetic/share/catkin/cmake', '..', 'python'))
try:
    from catkin.environment_cache import generate_environment_script
except ImportError:
    # search for catkin package in all workspaces and prepend to path
    for workspace in '/home/xiaohulu1130/teleop_ws/devel_isolated/yumi_description;/home/xiaohulu1130/teleop_ws/devel_isolated/yumi_control;/home/xiaohulu1130/teleop_ws/devel_isolated/teletouch_pkg;/home/xiaohulu1130/teleop_ws/devel_isolated/touch_custom_msgs;/home/xiaohulu1130/teleop_ws/devel_isolated/test1_moveit_config;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_driver;/home/xiaohulu1130/teleop_ws/devel_isolated/industrial_robot_client;/home/xiaohulu1130/teleop_ws/devel_isolated/simple_message;/home/xiaohulu1130/teleop_ws/devel_isolated/rotors_description;/home/xiaohulu1130/teleop_ws/devel_isolated/robot_vision;/home/xiaohulu1130/teleop_ws/devel_isolated/python_orocos_kdl;/home/xiaohulu1130/teleop_ws/devel_isolated/industrial_trajectory_filters;/home/xiaohulu1130/teleop_ws/devel_isolated/orocos_kdl;/home/xiaohulu1130/teleop_ws/devel_isolated/omni_common;/home/xiaohulu1130/teleop_ws/devel_isolated/omni_msgs;/home/xiaohulu1130/teleop_ws/devel_isolated/omni_description;/home/xiaohulu1130/teleop_ws/devel_isolated/libvisensor;/home/xiaohulu1130/teleop_ws/devel_isolated/industrial_utils;/home/xiaohulu1130/teleop_ws/devel_isolated/industrial_robot_simulator;/home/xiaohulu1130/teleop_ws/devel_isolated/industrial_msgs;/home/xiaohulu1130/teleop_ws/devel_isolated/industrial_deprecated;/home/xiaohulu1130/teleop_ws/devel_isolated/industrial_core;/home/xiaohulu1130/teleop_ws/devel_isolated/gazebo_mimic;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_rws_state_publisher;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_rws_service_provider;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_egm_state_controller;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_egm_hardware_interface;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_robot_cpp_utilities;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_robot_msgs;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_robot_bringup_examples;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_resources;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_rapid_sm_addin_msgs;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_rapid_msgs;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb7600_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb6700_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb6650s_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb6640_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb6640_moveit_config;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb6600_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb5400_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb52_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb4600_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb4400_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb2600_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb2400_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb2400_moveit_plugins;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb2400_moveit_config;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb1600_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb1600_6_12_moveit_config;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb120t_moveit_config;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb120_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb120_moveit_config;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb120_gazebo;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb1200_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb1200_gazebo;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb1200_7_70_moveit_config;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb1200_5_90_moveit_config;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_experimental;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_egm_msgs;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_crb15000_support;/home/xiaohulu1130/teleop_ws/devel_isolated/abb;/opt/ros/noetic'.split(';'):
        python_path = os.path.join(workspace, 'lib/python3/dist-packages')
        if os.path.isdir(os.path.join(python_path, 'catkin')):
            sys.path.insert(0, python_path)
            break
    from catkin.environment_cache import generate_environment_script

code = generate_environment_script('/home/xiaohulu1130/teleop_ws/devel_isolated/yumi_hw/env.sh')

output_filename = '/home/xiaohulu1130/teleop_ws/build_isolated/yumi_hw/catkin_generated/setup_cached.sh'
with open(output_filename, 'w') as f:
    # print('Generate script for cached setup "%s"' % output_filename)
    f.write('\n'.join(code))

mode = os.stat(output_filename).st_mode
os.chmod(output_filename, mode | stat.S_IXUSR)
