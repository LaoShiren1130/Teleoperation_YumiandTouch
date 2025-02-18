# generated from catkin/cmake/template/pkgConfig.cmake.in

# append elements to a list and remove existing duplicates from the list
# copied from catkin/cmake/list_append_deduplicate.cmake to keep pkgConfig
# self contained
macro(_list_append_deduplicate listname)
  if(NOT "${ARGN}" STREQUAL "")
    if(${listname})
      list(REMOVE_ITEM ${listname} ${ARGN})
    endif()
    list(APPEND ${listname} ${ARGN})
  endif()
endmacro()

# append elements to a list if they are not already in the list
# copied from catkin/cmake/list_append_unique.cmake to keep pkgConfig
# self contained
macro(_list_append_unique listname)
  foreach(_item ${ARGN})
    list(FIND ${listname} ${_item} _index)
    if(_index EQUAL -1)
      list(APPEND ${listname} ${_item})
    endif()
  endforeach()
endmacro()

# pack a list of libraries with optional build configuration keywords
# copied from catkin/cmake/catkin_libraries.cmake to keep pkgConfig
# self contained
macro(_pack_libraries_with_build_configuration VAR)
  set(${VAR} "")
  set(_argn ${ARGN})
  list(LENGTH _argn _count)
  set(_index 0)
  while(${_index} LESS ${_count})
    list(GET _argn ${_index} lib)
    if("${lib}" MATCHES "^(debug|optimized|general)$")
      math(EXPR _index "${_index} + 1")
      if(${_index} EQUAL ${_count})
        message(FATAL_ERROR "_pack_libraries_with_build_configuration() the list of libraries '${ARGN}' ends with '${lib}' which is a build configuration keyword and must be followed by a library")
      endif()
      list(GET _argn ${_index} library)
      list(APPEND ${VAR} "${lib}${CATKIN_BUILD_CONFIGURATION_KEYWORD_SEPARATOR}${library}")
    else()
      list(APPEND ${VAR} "${lib}")
    endif()
    math(EXPR _index "${_index} + 1")
  endwhile()
endmacro()

# unpack a list of libraries with optional build configuration keyword prefixes
# copied from catkin/cmake/catkin_libraries.cmake to keep pkgConfig
# self contained
macro(_unpack_libraries_with_build_configuration VAR)
  set(${VAR} "")
  foreach(lib ${ARGN})
    string(REGEX REPLACE "^(debug|optimized|general)${CATKIN_BUILD_CONFIGURATION_KEYWORD_SEPARATOR}(.+)$" "\\1;\\2" lib "${lib}")
    list(APPEND ${VAR} "${lib}")
  endforeach()
endmacro()


if(omni_description_CONFIG_INCLUDED)
  return()
endif()
set(omni_description_CONFIG_INCLUDED TRUE)

# set variables for source/devel/install prefixes
if("TRUE" STREQUAL "TRUE")
  set(omni_description_SOURCE_PREFIX /home/xiaohulu1130/teleop_ws/src/phantom_omni/omni_description)
  set(omni_description_DEVEL_PREFIX /home/xiaohulu1130/teleop_ws/devel_isolated/omni_description)
  set(omni_description_INSTALL_PREFIX "")
  set(omni_description_PREFIX ${omni_description_DEVEL_PREFIX})
else()
  set(omni_description_SOURCE_PREFIX "")
  set(omni_description_DEVEL_PREFIX "")
  set(omni_description_INSTALL_PREFIX /home/xiaohulu1130/teleop_ws/install_isolated)
  set(omni_description_PREFIX ${omni_description_INSTALL_PREFIX})
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "WARNING: package 'omni_description' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message("${_msg}")
endif()

# flag project as catkin-based to distinguish if a find_package()-ed project is a catkin project
set(omni_description_FOUND_CATKIN_PROJECT TRUE)

if(NOT " " STREQUAL " ")
  set(omni_description_INCLUDE_DIRS "")
  set(_include_dirs "")
  if(NOT " " STREQUAL " ")
    set(_report "Check the issue tracker '' and consider creating a ticket if the problem has not been reported yet.")
  elseif(NOT "https://github.com/fsuarez6/phantom_omni " STREQUAL " ")
    set(_report "Check the website 'https://github.com/fsuarez6/phantom_omni' for information and consider reporting the problem.")
  else()
    set(_report "Report the problem to the maintainer 'Francisco Suarez-Ruiz <fsuarez6@gmail.com>' and request to fix the problem.")
  endif()
  foreach(idir ${_include_dirs})
    if(IS_ABSOLUTE ${idir} AND IS_DIRECTORY ${idir})
      set(include ${idir})
    elseif("${idir} " STREQUAL "include ")
      get_filename_component(include "${omni_description_DIR}/../../../include" ABSOLUTE)
      if(NOT IS_DIRECTORY ${include})
        message(FATAL_ERROR "Project 'omni_description' specifies '${idir}' as an include dir, which is not found.  It does not exist in '${include}'.  ${_report}")
      endif()
    else()
      message(FATAL_ERROR "Project 'omni_description' specifies '${idir}' as an include dir, which is not found.  It does neither exist as an absolute directory nor in '/home/xiaohulu1130/teleop_ws/src/phantom_omni/omni_description/${idir}'.  ${_report}")
    endif()
    _list_append_unique(omni_description_INCLUDE_DIRS ${include})
  endforeach()
endif()

set(libraries "")
foreach(library ${libraries})
  # keep build configuration keywords, target names and absolute libraries as-is
  if("${library}" MATCHES "^(debug|optimized|general)$")
    list(APPEND omni_description_LIBRARIES ${library})
  elseif(${library} MATCHES "^-l")
    list(APPEND omni_description_LIBRARIES ${library})
  elseif(${library} MATCHES "^-")
    # This is a linker flag/option (like -pthread)
    # There's no standard variable for these, so create an interface library to hold it
    if(NOT omni_description_NUM_DUMMY_TARGETS)
      set(omni_description_NUM_DUMMY_TARGETS 0)
    endif()
    # Make sure the target name is unique
    set(interface_target_name "catkin::omni_description::wrapped-linker-option${omni_description_NUM_DUMMY_TARGETS}")
    while(TARGET "${interface_target_name}")
      math(EXPR omni_description_NUM_DUMMY_TARGETS "${omni_description_NUM_DUMMY_TARGETS}+1")
      set(interface_target_name "catkin::omni_description::wrapped-linker-option${omni_description_NUM_DUMMY_TARGETS}")
    endwhile()
    add_library("${interface_target_name}" INTERFACE IMPORTED)
    if("${CMAKE_VERSION}" VERSION_LESS "3.13.0")
      set_property(
        TARGET
        "${interface_target_name}"
        APPEND PROPERTY
        INTERFACE_LINK_LIBRARIES "${library}")
    else()
      target_link_options("${interface_target_name}" INTERFACE "${library}")
    endif()
    list(APPEND omni_description_LIBRARIES "${interface_target_name}")
  elseif(TARGET ${library})
    list(APPEND omni_description_LIBRARIES ${library})
  elseif(IS_ABSOLUTE ${library})
    list(APPEND omni_description_LIBRARIES ${library})
  else()
    set(lib_path "")
    set(lib "${library}-NOTFOUND")
    # since the path where the library is found is returned we have to iterate over the paths manually
    foreach(path /home/xiaohulu1130/teleop_ws/devel_isolated/omni_description/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/libvisensor/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/industrial_utils/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/industrial_robot_simulator/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/industrial_msgs/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/industrial_deprecated/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/industrial_core/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/gazebo_mimic/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_rws_state_publisher/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_rws_service_provider/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_egm_state_controller/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_egm_hardware_interface/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_robot_cpp_utilities/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_robot_msgs/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_robot_bringup_examples/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_resources/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_rapid_sm_addin_msgs/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_rapid_msgs/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb7600_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb6700_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb6650s_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb6640_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb6640_moveit_config/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb6600_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb5400_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb52_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb4600_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb4400_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb2600_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb2400_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb2400_moveit_plugins/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb2400_moveit_config/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb1600_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb1600_6_12_moveit_config/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb120t_moveit_config/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb120_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb120_moveit_config/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb120_gazebo/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb1200_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb1200_gazebo/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb1200_7_70_moveit_config/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_irb1200_5_90_moveit_config/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_experimental/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_egm_msgs/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb_crb15000_support/lib;/home/xiaohulu1130/teleop_ws/devel_isolated/abb/lib;/opt/ros/noetic/lib)
      find_library(lib ${library}
        PATHS ${path}
        NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH)
      if(lib)
        set(lib_path ${path})
        break()
      endif()
    endforeach()
    if(lib)
      _list_append_unique(omni_description_LIBRARY_DIRS ${lib_path})
      list(APPEND omni_description_LIBRARIES ${lib})
    else()
      # as a fall back for non-catkin libraries try to search globally
      find_library(lib ${library})
      if(NOT lib)
        message(FATAL_ERROR "Project '${PROJECT_NAME}' tried to find library '${library}'.  The library is neither a target nor built/installed properly.  Did you compile project 'omni_description'?  Did you find_package() it before the subdirectory containing its code is included?")
      endif()
      list(APPEND omni_description_LIBRARIES ${lib})
    endif()
  endif()
endforeach()

set(omni_description_EXPORTED_TARGETS "")
# create dummy targets for exported code generation targets to make life of users easier
foreach(t ${omni_description_EXPORTED_TARGETS})
  if(NOT TARGET ${t})
    add_custom_target(${t})
  endif()
endforeach()

set(depends "")
foreach(depend ${depends})
  string(REPLACE " " ";" depend_list ${depend})
  # the package name of the dependency must be kept in a unique variable so that it is not overwritten in recursive calls
  list(GET depend_list 0 omni_description_dep)
  list(LENGTH depend_list count)
  if(${count} EQUAL 1)
    # simple dependencies must only be find_package()-ed once
    if(NOT ${omni_description_dep}_FOUND)
      find_package(${omni_description_dep} REQUIRED NO_MODULE)
    endif()
  else()
    # dependencies with components must be find_package()-ed again
    list(REMOVE_AT depend_list 0)
    find_package(${omni_description_dep} REQUIRED NO_MODULE ${depend_list})
  endif()
  _list_append_unique(omni_description_INCLUDE_DIRS ${${omni_description_dep}_INCLUDE_DIRS})

  # merge build configuration keywords with library names to correctly deduplicate
  _pack_libraries_with_build_configuration(omni_description_LIBRARIES ${omni_description_LIBRARIES})
  _pack_libraries_with_build_configuration(_libraries ${${omni_description_dep}_LIBRARIES})
  _list_append_deduplicate(omni_description_LIBRARIES ${_libraries})
  # undo build configuration keyword merging after deduplication
  _unpack_libraries_with_build_configuration(omni_description_LIBRARIES ${omni_description_LIBRARIES})

  _list_append_unique(omni_description_LIBRARY_DIRS ${${omni_description_dep}_LIBRARY_DIRS})
  _list_append_deduplicate(omni_description_EXPORTED_TARGETS ${${omni_description_dep}_EXPORTED_TARGETS})
endforeach()

set(pkg_cfg_extras "")
foreach(extra ${pkg_cfg_extras})
  if(NOT IS_ABSOLUTE ${extra})
    set(extra ${omni_description_DIR}/${extra})
  endif()
  include(${extra})
endforeach()
