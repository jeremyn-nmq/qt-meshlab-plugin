# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.29.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.29.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build

# Utility rule file for edit_paint_autogen.

# Include any custom commands dependencies for this target.
include meshlabplugins/edit_paint/CMakeFiles/edit_paint_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include meshlabplugins/edit_paint/CMakeFiles/edit_paint_autogen.dir/progress.make

meshlabplugins/edit_paint/CMakeFiles/edit_paint_autogen: meshlabplugins/edit_paint/edit_paint_autogen/timestamp

meshlabplugins/edit_paint/edit_paint_autogen/timestamp: /usr/local/Cellar/qt@5/5.15.13/bin/moc
meshlabplugins/edit_paint/edit_paint_autogen/timestamp: /usr/local/Cellar/qt@5/5.15.13/bin/uic
meshlabplugins/edit_paint/edit_paint_autogen/timestamp: meshlabplugins/edit_paint/CMakeFiles/edit_paint_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target edit_paint"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_paint && /usr/local/Cellar/cmake/3.29.1/bin/cmake -E cmake_autogen /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_paint/CMakeFiles/edit_paint_autogen.dir/AutogenInfo.json ""
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_paint && /usr/local/Cellar/cmake/3.29.1/bin/cmake -E touch /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_paint/edit_paint_autogen/timestamp

edit_paint_autogen: meshlabplugins/edit_paint/CMakeFiles/edit_paint_autogen
edit_paint_autogen: meshlabplugins/edit_paint/edit_paint_autogen/timestamp
edit_paint_autogen: meshlabplugins/edit_paint/CMakeFiles/edit_paint_autogen.dir/build.make
.PHONY : edit_paint_autogen

# Rule to build all files generated by this target.
meshlabplugins/edit_paint/CMakeFiles/edit_paint_autogen.dir/build: edit_paint_autogen
.PHONY : meshlabplugins/edit_paint/CMakeFiles/edit_paint_autogen.dir/build

meshlabplugins/edit_paint/CMakeFiles/edit_paint_autogen.dir/clean:
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_paint && $(CMAKE_COMMAND) -P CMakeFiles/edit_paint_autogen.dir/cmake_clean.cmake
.PHONY : meshlabplugins/edit_paint/CMakeFiles/edit_paint_autogen.dir/clean

meshlabplugins/edit_paint/CMakeFiles/edit_paint_autogen.dir/depend:
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/edit_paint /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_paint /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_paint/CMakeFiles/edit_paint_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : meshlabplugins/edit_paint/CMakeFiles/edit_paint_autogen.dir/depend
