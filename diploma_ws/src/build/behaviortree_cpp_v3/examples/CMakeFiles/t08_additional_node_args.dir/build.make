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
CMAKE_SOURCE_DIR = /home/denis/diploma_ws/src/BehaviorTree.CPP-3.8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/denis/diploma_ws/src/build/behaviortree_cpp_v3

# Include any dependencies generated for this target.
include examples/CMakeFiles/t08_additional_node_args.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/CMakeFiles/t08_additional_node_args.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/t08_additional_node_args.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/t08_additional_node_args.dir/flags.make

examples/CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.o: examples/CMakeFiles/t08_additional_node_args.dir/flags.make
examples/CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.o: /home/denis/diploma_ws/src/BehaviorTree.CPP-3.8/examples/t08_additional_node_args.cpp
examples/CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.o: examples/CMakeFiles/t08_additional_node_args.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/denis/diploma_ws/src/build/behaviortree_cpp_v3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.o"
	cd /home/denis/diploma_ws/src/build/behaviortree_cpp_v3/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.o -MF CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.o.d -o CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.o -c /home/denis/diploma_ws/src/BehaviorTree.CPP-3.8/examples/t08_additional_node_args.cpp

examples/CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.i"
	cd /home/denis/diploma_ws/src/build/behaviortree_cpp_v3/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/denis/diploma_ws/src/BehaviorTree.CPP-3.8/examples/t08_additional_node_args.cpp > CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.i

examples/CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.s"
	cd /home/denis/diploma_ws/src/build/behaviortree_cpp_v3/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/denis/diploma_ws/src/BehaviorTree.CPP-3.8/examples/t08_additional_node_args.cpp -o CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.s

# Object files for target t08_additional_node_args
t08_additional_node_args_OBJECTS = \
"CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.o"

# External object files for target t08_additional_node_args
t08_additional_node_args_EXTERNAL_OBJECTS =

examples/t08_additional_node_args: examples/CMakeFiles/t08_additional_node_args.dir/t08_additional_node_args.cpp.o
examples/t08_additional_node_args: examples/CMakeFiles/t08_additional_node_args.dir/build.make
examples/t08_additional_node_args: sample_nodes/lib/libbt_sample_nodes.a
examples/t08_additional_node_args: libbehaviortree_cpp_v3.so
examples/t08_additional_node_args: examples/CMakeFiles/t08_additional_node_args.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/denis/diploma_ws/src/build/behaviortree_cpp_v3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable t08_additional_node_args"
	cd /home/denis/diploma_ws/src/build/behaviortree_cpp_v3/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/t08_additional_node_args.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/t08_additional_node_args.dir/build: examples/t08_additional_node_args
.PHONY : examples/CMakeFiles/t08_additional_node_args.dir/build

examples/CMakeFiles/t08_additional_node_args.dir/clean:
	cd /home/denis/diploma_ws/src/build/behaviortree_cpp_v3/examples && $(CMAKE_COMMAND) -P CMakeFiles/t08_additional_node_args.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/t08_additional_node_args.dir/clean

examples/CMakeFiles/t08_additional_node_args.dir/depend:
	cd /home/denis/diploma_ws/src/build/behaviortree_cpp_v3 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/denis/diploma_ws/src/BehaviorTree.CPP-3.8 /home/denis/diploma_ws/src/BehaviorTree.CPP-3.8/examples /home/denis/diploma_ws/src/build/behaviortree_cpp_v3 /home/denis/diploma_ws/src/build/behaviortree_cpp_v3/examples /home/denis/diploma_ws/src/build/behaviortree_cpp_v3/examples/CMakeFiles/t08_additional_node_args.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/t08_additional_node_args.dir/depend

