# CMake generated Testfile for 
# Source directory: /home/xiaohulu1130/teleop_ws/src/industrial_core/industrial_robot_simulator
# Build directory: /home/xiaohulu1130/teleop_ws/build_isolated/industrial_robot_simulator
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_industrial_robot_simulator_roslaunch-check_launch "/home/xiaohulu1130/teleop_ws/build_isolated/industrial_robot_simulator/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/xiaohulu1130/teleop_ws/build_isolated/industrial_robot_simulator/test_results/industrial_robot_simulator/roslaunch-check_launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/xiaohulu1130/teleop_ws/build_isolated/industrial_robot_simulator/test_results/industrial_robot_simulator" "/opt/ros/noetic/share/roslaunch/cmake/../scripts/roslaunch-check -o \"/home/xiaohulu1130/teleop_ws/build_isolated/industrial_robot_simulator/test_results/industrial_robot_simulator/roslaunch-check_launch.xml\" \"/home/xiaohulu1130/teleop_ws/src/industrial_core/industrial_robot_simulator/launch\" ")
set_tests_properties(_ctest_industrial_robot_simulator_roslaunch-check_launch PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslaunch/cmake/roslaunch-extras.cmake;66;catkin_run_tests_target;/home/xiaohulu1130/teleop_ws/src/industrial_core/industrial_robot_simulator/CMakeLists.txt;15;roslaunch_add_file_check;/home/xiaohulu1130/teleop_ws/src/industrial_core/industrial_robot_simulator/CMakeLists.txt;0;")
subdirs("gtest")
