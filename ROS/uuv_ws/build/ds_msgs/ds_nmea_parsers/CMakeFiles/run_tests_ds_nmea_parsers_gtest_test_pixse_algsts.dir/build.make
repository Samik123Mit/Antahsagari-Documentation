# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/roshan/uuv_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/roshan/uuv_ws/build

# Utility rule file for run_tests_ds_nmea_parsers_gtest_test_pixse_algsts.

# Include the progress variables for this target.
include ds_msgs/ds_nmea_parsers/CMakeFiles/run_tests_ds_nmea_parsers_gtest_test_pixse_algsts.dir/progress.make

ds_msgs/ds_nmea_parsers/CMakeFiles/run_tests_ds_nmea_parsers_gtest_test_pixse_algsts:
	cd /home/roshan/uuv_ws/build/ds_msgs/ds_nmea_parsers && ../../catkin_generated/env_cached.sh /usr/bin/python2 /opt/ros/melodic/share/catkin/cmake/test/run_tests.py /home/roshan/uuv_ws/build/test_results/ds_nmea_parsers/gtest-test_pixse_algsts.xml "/home/roshan/uuv_ws/devel/lib/ds_nmea_parsers/test_pixse_algsts --gtest_output=xml:/home/roshan/uuv_ws/build/test_results/ds_nmea_parsers/gtest-test_pixse_algsts.xml"

run_tests_ds_nmea_parsers_gtest_test_pixse_algsts: ds_msgs/ds_nmea_parsers/CMakeFiles/run_tests_ds_nmea_parsers_gtest_test_pixse_algsts
run_tests_ds_nmea_parsers_gtest_test_pixse_algsts: ds_msgs/ds_nmea_parsers/CMakeFiles/run_tests_ds_nmea_parsers_gtest_test_pixse_algsts.dir/build.make

.PHONY : run_tests_ds_nmea_parsers_gtest_test_pixse_algsts

# Rule to build all files generated by this target.
ds_msgs/ds_nmea_parsers/CMakeFiles/run_tests_ds_nmea_parsers_gtest_test_pixse_algsts.dir/build: run_tests_ds_nmea_parsers_gtest_test_pixse_algsts

.PHONY : ds_msgs/ds_nmea_parsers/CMakeFiles/run_tests_ds_nmea_parsers_gtest_test_pixse_algsts.dir/build

ds_msgs/ds_nmea_parsers/CMakeFiles/run_tests_ds_nmea_parsers_gtest_test_pixse_algsts.dir/clean:
	cd /home/roshan/uuv_ws/build/ds_msgs/ds_nmea_parsers && $(CMAKE_COMMAND) -P CMakeFiles/run_tests_ds_nmea_parsers_gtest_test_pixse_algsts.dir/cmake_clean.cmake
.PHONY : ds_msgs/ds_nmea_parsers/CMakeFiles/run_tests_ds_nmea_parsers_gtest_test_pixse_algsts.dir/clean

ds_msgs/ds_nmea_parsers/CMakeFiles/run_tests_ds_nmea_parsers_gtest_test_pixse_algsts.dir/depend:
	cd /home/roshan/uuv_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/roshan/uuv_ws/src /home/roshan/uuv_ws/src/ds_msgs/ds_nmea_parsers /home/roshan/uuv_ws/build /home/roshan/uuv_ws/build/ds_msgs/ds_nmea_parsers /home/roshan/uuv_ws/build/ds_msgs/ds_nmea_parsers/CMakeFiles/run_tests_ds_nmea_parsers_gtest_test_pixse_algsts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ds_msgs/ds_nmea_parsers/CMakeFiles/run_tests_ds_nmea_parsers_gtest_test_pixse_algsts.dir/depend

