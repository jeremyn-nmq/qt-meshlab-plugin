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
include meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/compiler_depend.make

# Include the progress variables for this target.
include meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/progress.make

# Include the compile flags for this target's objects.
include meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/flags.make

meshlabplugins/filter_texture/filter_texture_autogen/timestamp: /usr/local/Cellar/qt@5/5.15.13/bin/moc
meshlabplugins/filter_texture/filter_texture_autogen/timestamp: /usr/local/Cellar/qt@5/5.15.13/bin/uic
meshlabplugins/filter_texture/filter_texture_autogen/timestamp: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target filter_texture"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && /usr/local/Cellar/cmake/3.29.1/bin/cmake -E cmake_autogen /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture/CMakeFiles/filter_texture_autogen.dir/AutogenInfo.json ""
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && /usr/local/Cellar/cmake/3.29.1/bin/cmake -E touch /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture/filter_texture_autogen/timestamp

meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.o: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/flags.make
meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.o: meshlabplugins/filter_texture/filter_texture_autogen/mocs_compilation.cpp
meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.o: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.o -MF CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture/filter_texture_autogen/mocs_compilation.cpp

meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture/filter_texture_autogen/mocs_compilation.cpp > CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.i

meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture/filter_texture_autogen/mocs_compilation.cpp -o CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.s

meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture.cpp.o: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/flags.make
meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_texture/filter_texture.cpp
meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture.cpp.o: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture.cpp.o -MF CMakeFiles/filter_texture.dir/filter_texture.cpp.o.d -o CMakeFiles/filter_texture.dir/filter_texture.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_texture/filter_texture.cpp

meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/filter_texture.dir/filter_texture.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_texture/filter_texture.cpp > CMakeFiles/filter_texture.dir/filter_texture.cpp.i

meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/filter_texture.dir/filter_texture.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_texture/filter_texture.cpp -o CMakeFiles/filter_texture.dir/filter_texture.cpp.s

meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.o: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/flags.make
meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/vcglib/wrap/ply/plylib.cpp
meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.o: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.o -MF CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.o.d -o CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/vcglib/wrap/ply/plylib.cpp

meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/vcglib/wrap/ply/plylib.cpp > CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.i

meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/vcglib/wrap/ply/plylib.cpp -o CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.s

meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.o: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/flags.make
meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/vcglib/wrap/qt/outline2_rasterizer.cpp
meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.o: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.o -MF CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.o.d -o CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/vcglib/wrap/qt/outline2_rasterizer.cpp

meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/vcglib/wrap/qt/outline2_rasterizer.cpp > CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.i

meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/vcglib/wrap/qt/outline2_rasterizer.cpp -o CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.s

# Object files for target filter_texture
filter_texture_OBJECTS = \
"CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/filter_texture.dir/filter_texture.cpp.o" \
"CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.o" \
"CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.o"

# External object files for target filter_texture
filter_texture_EXTERNAL_OBJECTS =

distrib/plugins/libfilter_texture.so: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture_autogen/mocs_compilation.cpp.o
distrib/plugins/libfilter_texture.so: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/filter_texture.cpp.o
distrib/plugins/libfilter_texture.so: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/ply/plylib.cpp.o
distrib/plugins/libfilter_texture.so: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/__/__/vcglib/wrap/qt/outline2_rasterizer.cpp.o
distrib/plugins/libfilter_texture.so: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/build.make
distrib/plugins/libfilter_texture.so: distrib/libmeshlab-common.dylib
distrib/plugins/libfilter_texture.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtOpenGL.framework/QtOpenGL
distrib/plugins/libfilter_texture.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtWidgets.framework/QtWidgets
distrib/plugins/libfilter_texture.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtGui.framework/QtGui
distrib/plugins/libfilter_texture.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtXml.framework/QtXml
distrib/plugins/libfilter_texture.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtNetwork.framework/QtNetwork
distrib/plugins/libfilter_texture.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtCore.framework/QtCore
distrib/plugins/libfilter_texture.so: libexternal-glew.a
distrib/plugins/libfilter_texture.so: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX14.4.sdk/System/Library/Frameworks/OpenGL.framework
distrib/plugins/libfilter_texture.so: meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared module ../../distrib/plugins/libfilter_texture.so"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/filter_texture.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/build: distrib/plugins/libfilter_texture.so
.PHONY : meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/build

meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/clean:
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture && $(CMAKE_COMMAND) -P CMakeFiles/filter_texture.dir/cmake_clean.cmake
.PHONY : meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/clean

meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/depend: meshlabplugins/filter_texture/filter_texture_autogen/timestamp
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_texture /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : meshlabplugins/filter_texture/CMakeFiles/filter_texture.dir/depend

