# Install script for directory: /home/xiaohulu1130/teleop_ws/src/YuMi-ROS_control_code_in_ROS/src/libvisensor_devel

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/xiaohulu1130/teleop_ws/install_isolated")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/xiaohulu1130/teleop_ws/install_isolated/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/xiaohulu1130/teleop_ws/install_isolated" TYPE PROGRAM FILES "/home/xiaohulu1130/teleop_ws/build_isolated/libvisensor/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/xiaohulu1130/teleop_ws/install_isolated/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/xiaohulu1130/teleop_ws/install_isolated" TYPE PROGRAM FILES "/home/xiaohulu1130/teleop_ws/build_isolated/libvisensor/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/xiaohulu1130/teleop_ws/install_isolated/setup.bash;/home/xiaohulu1130/teleop_ws/install_isolated/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/xiaohulu1130/teleop_ws/install_isolated" TYPE FILE FILES
    "/home/xiaohulu1130/teleop_ws/build_isolated/libvisensor/catkin_generated/installspace/setup.bash"
    "/home/xiaohulu1130/teleop_ws/build_isolated/libvisensor/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/xiaohulu1130/teleop_ws/install_isolated/setup.sh;/home/xiaohulu1130/teleop_ws/install_isolated/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/xiaohulu1130/teleop_ws/install_isolated" TYPE FILE FILES
    "/home/xiaohulu1130/teleop_ws/build_isolated/libvisensor/catkin_generated/installspace/setup.sh"
    "/home/xiaohulu1130/teleop_ws/build_isolated/libvisensor/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/xiaohulu1130/teleop_ws/install_isolated/setup.zsh;/home/xiaohulu1130/teleop_ws/install_isolated/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/xiaohulu1130/teleop_ws/install_isolated" TYPE FILE FILES
    "/home/xiaohulu1130/teleop_ws/build_isolated/libvisensor/catkin_generated/installspace/setup.zsh"
    "/home/xiaohulu1130/teleop_ws/build_isolated/libvisensor/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/xiaohulu1130/teleop_ws/install_isolated/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/xiaohulu1130/teleop_ws/install_isolated" TYPE FILE FILES "/home/xiaohulu1130/teleop_ws/build_isolated/libvisensor/catkin_generated/installspace/.rosinstall")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/xiaohulu1130/teleop_ws/build_isolated/libvisensor/catkin_generated/installspace/libvisensor.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/libvisensor/cmake" TYPE FILE FILES
    "/home/xiaohulu1130/teleop_ws/build_isolated/libvisensor/catkin_generated/installspace/libvisensorConfig.cmake"
    "/home/xiaohulu1130/teleop_ws/build_isolated/libvisensor/catkin_generated/installspace/libvisensorConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/libvisensor" TYPE FILE FILES "/home/xiaohulu1130/teleop_ws/src/YuMi-ROS_control_code_in_ROS/src/libvisensor_devel/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xshared-libx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/xiaohulu1130/teleop_ws/src/YuMi-ROS_control_code_in_ROS/src/libvisensor_devel/lib/libvisensor.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xstatic-libx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/xiaohulu1130/teleop_ws/src/YuMi-ROS_control_code_in_ROS/src/libvisensor_devel/lib/libvisensor.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xstatic-libx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visensor" TYPE FILE FILES
    "/home/xiaohulu1130/teleop_ws/src/YuMi-ROS_control_code_in_ROS/src/libvisensor_devel/include/visensor/visensor_api.hpp"
    "/home/xiaohulu1130/teleop_ws/src/YuMi-ROS_control_code_in_ROS/src/libvisensor_devel/include/visensor/visensor_config.hpp"
    "/home/xiaohulu1130/teleop_ws/src/YuMi-ROS_control_code_in_ROS/src/libvisensor_devel/include/visensor/visensor_constants.hpp"
    "/home/xiaohulu1130/teleop_ws/src/YuMi-ROS_control_code_in_ROS/src/libvisensor_devel/include/visensor/visensor_datatypes.hpp"
    "/home/xiaohulu1130/teleop_ws/src/YuMi-ROS_control_code_in_ROS/src/libvisensor_devel/include/visensor/visensor_exceptions.hpp"
    "/home/xiaohulu1130/teleop_ws/src/YuMi-ROS_control_code_in_ROS/src/libvisensor_devel/include/visensor/visensor_version.hpp"
    "/home/xiaohulu1130/teleop_ws/src/YuMi-ROS_control_code_in_ROS/src/libvisensor_devel/include/visensor/visensor.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xstatic-libx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/visensor" TYPE FILE FILES "/home/xiaohulu1130/teleop_ws/src/YuMi-ROS_control_code_in_ROS/src/libvisensor_devel/cmake/FindVISensor.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xstatic-libx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkgconfig" TYPE FILE FILES "/home/xiaohulu1130/teleop_ws/src/YuMi-ROS_control_code_in_ROS/src/libvisensor_devel/pkgconfig/visensor.pc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/xiaohulu1130/teleop_ws/build_isolated/libvisensor/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/xiaohulu1130/teleop_ws/build_isolated/libvisensor/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
