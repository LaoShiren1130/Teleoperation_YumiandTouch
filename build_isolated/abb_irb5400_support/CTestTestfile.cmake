# CMake generated Testfile for 
# Source directory: /home/xiaohulu1130/teleop_ws/src/abb/abb_irb5400_support
# Build directory: /home/xiaohulu1130/teleop_ws/build_isolated/abb_irb5400_support
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_abb_irb5400_support_roslaunch-check_tests_roslaunch_test.xml "/home/xiaohulu1130/teleop_ws/build_isolated/abb_irb5400_support/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/xiaohulu1130/teleop_ws/build_isolated/abb_irb5400_support/test_results/abb_irb5400_support/roslaunch-check_tests_roslaunch_test.xml.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/xiaohulu1130/teleop_ws/build_isolated/abb_irb5400_support/test_results/abb_irb5400_support" "/opt/ros/noetic/share/roslaunch/cmake/../scripts/roslaunch-check -o \"/home/xiaohulu1130/teleop_ws/build_isolated/abb_irb5400_support/test_results/abb_irb5400_support/roslaunch-check_tests_roslaunch_test.xml.xml\" \"/home/xiaohulu1130/teleop_ws/src/abb/abb_irb5400_support/tests/roslaunch_test.xml\" ")
set_tests_properties(_ctest_abb_irb5400_support_roslaunch-check_tests_roslaunch_test.xml PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslaunch/cmake/roslaunch-extras.cmake;66;catkin_run_tests_target;/home/xiaohulu1130/teleop_ws/src/abb/abb_irb5400_support/CMakeLists.txt;10;roslaunch_add_file_check;/home/xiaohulu1130/teleop_ws/src/abb/abb_irb5400_support/CMakeLists.txt;0;")
subdirs("gtest")
