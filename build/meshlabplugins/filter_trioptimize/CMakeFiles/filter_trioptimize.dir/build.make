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

# Include any dependencies generated for this target.
include meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/compiler_depend.make

# Include the progress variables for this target.
include meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/progress.make

# Include the compile flags for this target's objects.
include meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/flags.make

meshlabplugins/filter_trioptimize/filter_trioptimize_autogen/timestamp: /usr/local/Cellar/qt@5/5.15.13/bin/moc
meshlabplugins/filter_trioptimize/filter_trioptimize_autogen/timestamp: /usr/local/Cellar/qt@5/5.15.13/bin/uic
meshlabplugins/filter_trioptimize/filter_trioptimize_autogen/timestamp: meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target filter_trioptimize"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize && /usr/local/Cellar/cmake/3.29.1/bin/cmake -E cmake_autogen /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize_autogen.dir/AutogenInfo.json ""
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize && /usr/local/Cellar/cmake/3.29.1/bin/cmake -E touch /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize/filter_trioptimize_autogen/timestamp

meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.o: meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/flags.make
meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.o: meshlabplugins/filter_trioptimize/filter_trioptimize_autogen/mocs_compilation.cpp
meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.o: meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.o -MF CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize/filter_trioptimize_autogen/mocs_compilation.cpp

meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize/filter_trioptimize_autogen/mocs_compilation.cpp > CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.i

meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize/filter_trioptimize_autogen/mocs_compilation.cpp -o CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.s

meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.o: meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/flags.make
meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_trioptimize/filter_trioptimize.cpp
meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.o: meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.o -MF CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.o.d -o CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_trioptimize/filter_trioptimize.cpp

meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_trioptimize/filter_trioptimize.cpp > CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.i

meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_trioptimize/filter_trioptimize.cpp -o CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.s

# Object files for target filter_trioptimize
filter_trioptimize_OBJECTS = \
"CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.o"

# External object files for target filter_trioptimize
filter_trioptimize_EXTERNAL_OBJECTS =

distrib/plugins/libfilter_trioptimize.so: meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize_autogen/mocs_compilation.cpp.o
distrib/plugins/libfilter_trioptimize.so: meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/filter_trioptimize.cpp.o
distrib/plugins/libfilter_trioptimize.so: meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/build.make
distrib/plugins/libfilter_trioptimize.so: distrib/libmeshlab-common.dylib
distrib/plugins/libfilter_trioptimize.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtOpenGL.framework/QtOpenGL
distrib/plugins/libfilter_trioptimize.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtWidgets.framework/QtWidgets
distrib/plugins/libfilter_trioptimize.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtGui.framework/QtGui
distrib/plugins/libfilter_trioptimize.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtXml.framework/QtXml
distrib/plugins/libfilter_trioptimize.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtNetwork.framework/QtNetwork
distrib/plugins/libfilter_trioptimize.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtCore.framework/QtCore
distrib/plugins/libfilter_trioptimize.so: libexternal-glew.a
distrib/plugins/libfilter_trioptimize.so: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX14.4.sdk/System/Library/Frameworks/OpenGL.framework
distrib/plugins/libfilter_trioptimize.so: meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared module ../../distrib/plugins/libfilter_trioptimize.so"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/filter_trioptimize.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/build: distrib/plugins/libfilter_trioptimize.so
.PHONY : meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/build

meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/clean:
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize && $(CMAKE_COMMAND) -P CMakeFiles/filter_trioptimize.dir/cmake_clean.cmake
.PHONY : meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/clean

meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/depend: meshlabplugins/filter_trioptimize/filter_trioptimize_autogen/timestamp
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_trioptimize /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : meshlabplugins/filter_trioptimize/CMakeFiles/filter_trioptimize.dir/depend
