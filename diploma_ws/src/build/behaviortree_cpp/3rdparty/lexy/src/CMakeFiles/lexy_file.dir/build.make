# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/denis/diploma_ws/src/BehaviorTree.CPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/denis/diploma_ws/src/build/behaviortree_cpp

# Include any dependencies generated for this target.
include 3rdparty/lexy/src/CMakeFiles/lexy_file.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include 3rdparty/lexy/src/CMakeFiles/lexy_file.dir/compiler_depend.make

# Include the progress variables for this target.
include 3rdparty/lexy/src/CMakeFiles/lexy_file.dir/progress.make

# Include the compile flags for this target's objects.
include 3rdparty/lexy/src/CMakeFiles/lexy_file.dir/flags.make

3rdparty/lexy/src/CMakeFiles/lexy_file.dir/input/file.cpp.o: 3rdparty/lexy/src/CMakeFiles/lexy_file.dir/flags.make
3rdparty/lexy/src/CMakeFiles/lexy_file.dir/input/file.cpp.o: /home/denis/diploma_ws/src/BehaviorTree.CPP/3rdparty/lexy/src/input/file.cpp
3rdparty/lexy/src/CMakeFiles/lexy_file.dir/input/file.cpp.o: 3rdparty/lexy/src/CMakeFiles/lexy_file.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/denis/diploma_ws/src/build/behaviortree_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 3rdparty/lexy/src/CMakeFiles/lexy_file.dir/input/file.cpp.o"
	cd /home/denis/diploma_ws/src/build/behaviortree_cpp/3rdparty/lexy/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT 3rdparty/lexy/src/CMakeFiles/lexy_file.dir/input/file.cpp.o -MF CMakeFiles/lexy_file.dir/input/file.cpp.o.d -o CMakeFiles/lexy_file.dir/input/file.cpp.o -c /home/denis/diploma_ws/src/BehaviorTree.CPP/3rdparty/lexy/src/input/file.cpp

3rdparty/lexy/src/CMakeFiles/lexy_file.dir/input/file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lexy_file.dir/input/file.cpp.i"
	cd /home/denis/diploma_ws/src/build/behaviortree_cpp/3rdparty/lexy/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/denis/diploma_ws/src/BehaviorTree.CPP/3rdparty/lexy/src/input/file.cpp > CMakeFiles/lexy_file.dir/input/file.cpp.i

3rdparty/lexy/src/CMakeFiles/lexy_file.dir/input/file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lexy_file.dir/input/file.cpp.s"
	cd /home/denis/diploma_ws/src/build/behaviortree_cpp/3rdparty/lexy/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/denis/diploma_ws/src/BehaviorTree.CPP/3rdparty/lexy/src/input/file.cpp -o CMakeFiles/lexy_file.dir/input/file.cpp.s

# Object files for target lexy_file
lexy_file_OBJECTS = \
"CMakeFiles/lexy_file.dir/input/file.cpp.o"

# External object files for target lexy_file
lexy_file_EXTERNAL_OBJECTS =

3rdparty/lexy/src/liblexy_file.a: 3rdparty/lexy/src/CMakeFiles/lexy_file.dir/input/file.cpp.o
3rdparty/lexy/src/liblexy_file.a: 3rdparty/lexy/src/CMakeFiles/lexy_file.dir/build.make
3rdparty/lexy/src/liblexy_file.a: 3rdparty/lexy/src/CMakeFiles/lexy_file.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/denis/diploma_ws/src/build/behaviortree_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblexy_file.a"
	cd /home/denis/diploma_ws/src/build/behaviortree_cpp/3rdparty/lexy/src && $(CMAKE_COMMAND) -P CMakeFiles/lexy_file.dir/cmake_clean_target.cmake
	cd /home/denis/diploma_ws/src/build/behaviortree_cpp/3rdparty/lexy/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lexy_file.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
3rdparty/lexy/src/CMakeFiles/lexy_file.dir/build: 3rdparty/lexy/src/liblexy_file.a
.PHONY : 3rdparty/lexy/src/CMakeFiles/lexy_file.dir/build

3rdparty/lexy/src/CMakeFiles/lexy_file.dir/clean:
	cd /home/denis/diploma_ws/src/build/behaviortree_cpp/3rdparty/lexy/src && $(CMAKE_COMMAND) -P CMakeFiles/lexy_file.dir/cmake_clean.cmake
.PHONY : 3rdparty/lexy/src/CMakeFiles/lexy_file.dir/clean

3rdparty/lexy/src/CMakeFiles/lexy_file.dir/depend:
	cd /home/denis/diploma_ws/src/build/behaviortree_cpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/denis/diploma_ws/src/BehaviorTree.CPP /home/denis/diploma_ws/src/BehaviorTree.CPP/3rdparty/lexy/src /home/denis/diploma_ws/src/build/behaviortree_cpp /home/denis/diploma_ws/src/build/behaviortree_cpp/3rdparty/lexy/src /home/denis/diploma_ws/src/build/behaviortree_cpp/3rdparty/lexy/src/CMakeFiles/lexy_file.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 3rdparty/lexy/src/CMakeFiles/lexy_file.dir/depend

