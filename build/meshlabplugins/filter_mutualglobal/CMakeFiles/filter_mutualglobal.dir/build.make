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
include meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/compiler_depend.make

# Include the progress variables for this target.
include meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/progress.make

# Include the compile flags for this target's objects.
include meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/flags.make

meshlabplugins/filter_mutualglobal/filter_mutualglobal_autogen/timestamp: /usr/local/Cellar/qt@5/5.15.13/bin/moc
meshlabplugins/filter_mutualglobal/filter_mutualglobal_autogen/timestamp: /usr/local/Cellar/qt@5/5.15.13/bin/uic
meshlabplugins/filter_mutualglobal/filter_mutualglobal_autogen/timestamp: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target filter_mutualglobal"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /usr/local/Cellar/cmake/3.29.1/bin/cmake -E cmake_autogen /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal_autogen.dir/AutogenInfo.json ""
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /usr/local/Cellar/cmake/3.29.1/bin/cmake -E touch /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal/filter_mutualglobal_autogen/timestamp

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/flags.make
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.o: meshlabplugins/filter_mutualglobal/filter_mutualglobal_autogen/mocs_compilation.cpp
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.o -MF CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal/filter_mutualglobal_autogen/mocs_compilation.cpp

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal/filter_mutualglobal_autogen/mocs_compilation.cpp > CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.i

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal/filter_mutualglobal_autogen/mocs_compilation.cpp -o CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.s

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/alignset.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/flags.make
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/alignset.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/alignset.cpp
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/alignset.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/alignset.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/alignset.cpp.o -MF CMakeFiles/filter_mutualglobal.dir/alignset.cpp.o.d -o CMakeFiles/filter_mutualglobal.dir/alignset.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/alignset.cpp

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/alignset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/filter_mutualglobal.dir/alignset.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/alignset.cpp > CMakeFiles/filter_mutualglobal.dir/alignset.cpp.i

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/alignset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/filter_mutualglobal.dir/alignset.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/alignset.cpp -o CMakeFiles/filter_mutualglobal.dir/alignset.cpp.s

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/flags.make
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/filter_mutualglobal.cpp
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.o -MF CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.o.d -o CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/filter_mutualglobal.cpp

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/filter_mutualglobal.cpp > CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.i

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/filter_mutualglobal.cpp -o CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.s

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/flags.make
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/levmarmethods.cpp
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.o -MF CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.o.d -o CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/levmarmethods.cpp

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/levmarmethods.cpp > CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.i

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/levmarmethods.cpp -o CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.s

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/mutual.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/flags.make
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/mutual.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/mutual.cpp
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/mutual.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/mutual.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/mutual.cpp.o -MF CMakeFiles/filter_mutualglobal.dir/mutual.cpp.o.d -o CMakeFiles/filter_mutualglobal.dir/mutual.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/mutual.cpp

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/mutual.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/filter_mutualglobal.dir/mutual.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/mutual.cpp > CMakeFiles/filter_mutualglobal.dir/mutual.cpp.i

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/mutual.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/filter_mutualglobal.dir/mutual.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/mutual.cpp -o CMakeFiles/filter_mutualglobal.dir/mutual.cpp.s

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/parameters.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/flags.make
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/parameters.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/parameters.cpp
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/parameters.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/parameters.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/parameters.cpp.o -MF CMakeFiles/filter_mutualglobal.dir/parameters.cpp.o.d -o CMakeFiles/filter_mutualglobal.dir/parameters.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/parameters.cpp

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/parameters.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/filter_mutualglobal.dir/parameters.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/parameters.cpp > CMakeFiles/filter_mutualglobal.dir/parameters.cpp.i

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/parameters.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/filter_mutualglobal.dir/parameters.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/parameters.cpp -o CMakeFiles/filter_mutualglobal.dir/parameters.cpp.s

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/flags.make
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/pointCorrespondence.cpp
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.o -MF CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.o.d -o CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/pointCorrespondence.cpp

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/pointCorrespondence.cpp > CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.i

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/pointCorrespondence.cpp -o CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.s

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/solver.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/flags.make
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/solver.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/solver.cpp
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/solver.cpp.o: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/solver.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/solver.cpp.o -MF CMakeFiles/filter_mutualglobal.dir/solver.cpp.o.d -o CMakeFiles/filter_mutualglobal.dir/solver.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/solver.cpp

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/solver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/filter_mutualglobal.dir/solver.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/solver.cpp > CMakeFiles/filter_mutualglobal.dir/solver.cpp.i

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/solver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/filter_mutualglobal.dir/solver.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal/solver.cpp -o CMakeFiles/filter_mutualglobal.dir/solver.cpp.s

# Object files for target filter_mutualglobal
filter_mutualglobal_OBJECTS = \
"CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/filter_mutualglobal.dir/alignset.cpp.o" \
"CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.o" \
"CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.o" \
"CMakeFiles/filter_mutualglobal.dir/mutual.cpp.o" \
"CMakeFiles/filter_mutualglobal.dir/parameters.cpp.o" \
"CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.o" \
"CMakeFiles/filter_mutualglobal.dir/solver.cpp.o"

# External object files for target filter_mutualglobal
filter_mutualglobal_EXTERNAL_OBJECTS =

distrib/plugins/libfilter_mutualglobal.so: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal_autogen/mocs_compilation.cpp.o
distrib/plugins/libfilter_mutualglobal.so: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/alignset.cpp.o
distrib/plugins/libfilter_mutualglobal.so: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/filter_mutualglobal.cpp.o
distrib/plugins/libfilter_mutualglobal.so: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/levmarmethods.cpp.o
distrib/plugins/libfilter_mutualglobal.so: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/mutual.cpp.o
distrib/plugins/libfilter_mutualglobal.so: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/parameters.cpp.o
distrib/plugins/libfilter_mutualglobal.so: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/pointCorrespondence.cpp.o
distrib/plugins/libfilter_mutualglobal.so: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/solver.cpp.o
distrib/plugins/libfilter_mutualglobal.so: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/build.make
distrib/plugins/libfilter_mutualglobal.so: distrib/libmeshlab-common.dylib
distrib/plugins/libfilter_mutualglobal.so: external/libexternal-levmar.a
distrib/plugins/libfilter_mutualglobal.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtOpenGL.framework/QtOpenGL
distrib/plugins/libfilter_mutualglobal.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtWidgets.framework/QtWidgets
distrib/plugins/libfilter_mutualglobal.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtGui.framework/QtGui
distrib/plugins/libfilter_mutualglobal.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtXml.framework/QtXml
distrib/plugins/libfilter_mutualglobal.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtNetwork.framework/QtNetwork
distrib/plugins/libfilter_mutualglobal.so: /usr/local/Cellar/qt@5/5.15.13/lib/QtCore.framework/QtCore
distrib/plugins/libfilter_mutualglobal.so: libexternal-glew.a
distrib/plugins/libfilter_mutualglobal.so: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX14.4.sdk/System/Library/Frameworks/OpenGL.framework
distrib/plugins/libfilter_mutualglobal.so: meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX shared module ../../distrib/plugins/libfilter_mutualglobal.so"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/filter_mutualglobal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/build: distrib/plugins/libfilter_mutualglobal.so
.PHONY : meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/build

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/clean:
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal && $(CMAKE_COMMAND) -P CMakeFiles/filter_mutualglobal.dir/cmake_clean.cmake
.PHONY : meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/clean

meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/depend: meshlabplugins/filter_mutualglobal/filter_mutualglobal_autogen/timestamp
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlabplugins/filter_mutualglobal /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : meshlabplugins/filter_mutualglobal/CMakeFiles/filter_mutualglobal.dir/depend
