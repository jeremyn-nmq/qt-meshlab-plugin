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
include meshlabplugins/io_bre/CMakeFiles/io_bre.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include meshlabplugins/io_bre/CMakeFiles/io_bre.dir/compiler_depend.make

# Include the progress variables for this target.
include meshlabplugins/io_bre/CMakeFiles/io_bre.dir/progress.make

# Include the compile flags for this target's objects.
include meshlabplugins/io_bre/CMakeFiles/io_bre.dir/flags.make

meshlabplugins/io_bre/io_bre_autogen/timestamp: /usr/local/Cellar/qt@5/5.15.13/bin/moc
meshlabplugins/io_bre/io_bre_autogen/timestamp: /usr/local/Cellar/qt@5/5.15.13/bin/uic
meshlabplugins/io_bre/io_bre_autogen/timestamp: meshlabplugins/io_bre/CMakeFiles/io_bre.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target io_bre"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre && /usr/local/Cellar/cmake/3.29.1/bin/cmake -E cmake_autogen /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre/CMakeFiles/io_bre_autogen.dir/AutogenInfo.json ""
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre && /usr/local/Cellar/cmake/3.29.1/bin/cmake -E touch /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre/io_bre_autogen/timestamp

meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.o: meshlabplugins/io_bre/CMakeFiles/io_bre.dir/flags.make
meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.o: meshlabplugins/io_bre/io_bre_autogen/mocs_compilation.cpp
meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.o: meshlabplugins/io_bre/CMakeFiles/io_bre.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.o -MF CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre/io_bre_autogen/mocs_compilation.cpp

meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre/io_bre_autogen/mocs_compilation.cpp > CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.i

meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre/io_bre_autogen/mocs_compilation.cpp -o CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.s

meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre.cpp.o: meshlabplugins/io_bre/CMakeFiles/io_bre.dir/flags.make
meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/io_bre/io_bre.cpp
meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre.cpp.o: meshlabplugins/io_bre/CMakeFiles/io_bre.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre.cpp.o -MF CMakeFiles/io_bre.dir/io_bre.cpp.o.d -o CMakeFiles/io_bre.dir/io_bre.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/io_bre/io_bre.cpp

meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/io_bre.dir/io_bre.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/io_bre/io_bre.cpp > CMakeFiles/io_bre.dir/io_bre.cpp.i

meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/io_bre.dir/io_bre.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/io_bre/io_bre.cpp -o CMakeFiles/io_bre.dir/io_bre.cpp.s

# Object files for target io_bre
io_bre_OBJECTS = \
"CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/io_bre.dir/io_bre.cpp.o"

# External object files for target io_bre
io_bre_EXTERNAL_OBJECTS =

distrib/plugins/libio_bre.so: meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre_autogen/mocs_compilation.cpp.o
distrib/plugins/libio_bre.so: meshlabplugins/io_bre/CMakeFiles/io_bre.dir/io_bre.cpp.o
distrib/plugins/libio_bre.so: meshlabplugins/io_bre/CMakeFiles/io_bre.dir/build.make
distrib/plugins/libio_bre.so: distrib/libmeshlab-common.dylib
distrib/plugins/libio_bre.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtOpenGL.framework/QtOpenGL
distrib/plugins/libio_bre.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtWidgets.framework/QtWidgets
distrib/plugins/libio_bre.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtGui.framework/QtGui
distrib/plugins/libio_bre.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtXml.framework/QtXml
distrib/plugins/libio_bre.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtNetwork.framework/QtNetwork
distrib/plugins/libio_bre.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtCore.framework/QtCore
distrib/plugins/libio_bre.so: libexternal-glew.a
distrib/plugins/libio_bre.so: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX14.4.sdk/System/Library/Frameworks/OpenGL.framework
distrib/plugins/libio_bre.so: meshlabplugins/io_bre/CMakeFiles/io_bre.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared module ../../distrib/plugins/libio_bre.so"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/io_bre.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
meshlabplugins/io_bre/CMakeFiles/io_bre.dir/build: distrib/plugins/libio_bre.so
.PHONY : meshlabplugins/io_bre/CMakeFiles/io_bre.dir/build

meshlabplugins/io_bre/CMakeFiles/io_bre.dir/clean:
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre && $(CMAKE_COMMAND) -P CMakeFiles/io_bre.dir/cmake_clean.cmake
.PHONY : meshlabplugins/io_bre/CMakeFiles/io_bre.dir/clean

meshlabplugins/io_bre/CMakeFiles/io_bre.dir/depend: meshlabplugins/io_bre/io_bre_autogen/timestamp
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/io_bre /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre/CMakeFiles/io_bre.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : meshlabplugins/io_bre/CMakeFiles/io_bre.dir/depend

