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
include external/CMakeFiles/external-muparser.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include external/CMakeFiles/external-muparser.dir/compiler_depend.make

# Include the progress variables for this target.
include external/CMakeFiles/external-muparser.dir/progress.make

# Include the compile flags for this target's objects.
include external/CMakeFiles/external-muparser.dir/flags.make

external/external-muparser_autogen/timestamp: /usr/local/Cellar/qt@5/5.15.13/bin/moc
external/external-muparser_autogen/timestamp: /usr/local/Cellar/qt@5/5.15.13/bin/uic
external/external-muparser_autogen/timestamp: external/CMakeFiles/external-muparser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target external-muparser"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /usr/local/Cellar/cmake/3.29.1/bin/cmake -E cmake_autogen /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external/CMakeFiles/external-muparser_autogen.dir/AutogenInfo.json ""
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /usr/local/Cellar/cmake/3.29.1/bin/cmake -E touch /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external/external-muparser_autogen/timestamp

external/CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.o: external/CMakeFiles/external-muparser.dir/flags.make
external/CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.o: external/external-muparser_autogen/mocs_compilation.cpp
external/CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.o: external/CMakeFiles/external-muparser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object external/CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.o -MF CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external/external-muparser_autogen/mocs_compilation.cpp

external/CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external/external-muparser_autogen/mocs_compilation.cpp > CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.i

external/CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external/external-muparser_autogen/mocs_compilation.cpp -o CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.s

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.o: external/CMakeFiles/external-muparser.dir/flags.make
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParser.cpp
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.o: external/CMakeFiles/external-muparser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.o -MF CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.o.d -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParser.cpp

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParser.cpp > CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.i

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParser.cpp -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.s

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.o: external/CMakeFiles/external-muparser.dir/flags.make
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserBase.cpp
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.o: external/CMakeFiles/external-muparser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.o -MF CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.o.d -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserBase.cpp

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserBase.cpp > CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.i

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserBase.cpp -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.s

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.o: external/CMakeFiles/external-muparser.dir/flags.make
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserBytecode.cpp
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.o: external/CMakeFiles/external-muparser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.o -MF CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.o.d -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserBytecode.cpp

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserBytecode.cpp > CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.i

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserBytecode.cpp -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.s

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.o: external/CMakeFiles/external-muparser.dir/flags.make
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserCallback.cpp
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.o: external/CMakeFiles/external-muparser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.o -MF CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.o.d -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserCallback.cpp

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserCallback.cpp > CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.i

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserCallback.cpp -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.s

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.o: external/CMakeFiles/external-muparser.dir/flags.make
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserDLL.cpp
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.o: external/CMakeFiles/external-muparser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.o -MF CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.o.d -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserDLL.cpp

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserDLL.cpp > CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.i

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserDLL.cpp -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.s

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.o: external/CMakeFiles/external-muparser.dir/flags.make
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserError.cpp
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.o: external/CMakeFiles/external-muparser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.o -MF CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.o.d -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserError.cpp

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserError.cpp > CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.i

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserError.cpp -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.s

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.o: external/CMakeFiles/external-muparser.dir/flags.make
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserInt.cpp
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.o: external/CMakeFiles/external-muparser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.o -MF CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.o.d -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserInt.cpp

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserInt.cpp > CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.i

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserInt.cpp -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.s

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.o: external/CMakeFiles/external-muparser.dir/flags.make
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserTest.cpp
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.o: external/CMakeFiles/external-muparser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.o -MF CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.o.d -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserTest.cpp

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserTest.cpp > CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.i

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserTest.cpp -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.s

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.o: external/CMakeFiles/external-muparser.dir/flags.make
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.o: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserTokenReader.cpp
external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.o: external/CMakeFiles/external-muparser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.o"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.o -MF CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.o.d -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.o -c /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserTokenReader.cpp

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.i"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserTokenReader.cpp > CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.i

external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.s"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/muparser_v225/src/muParserTokenReader.cpp -o CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.s

# Object files for target external-muparser
external__muparser_OBJECTS = \
"CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.o" \
"CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.o" \
"CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.o" \
"CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.o" \
"CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.o" \
"CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.o" \
"CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.o" \
"CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.o" \
"CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.o"

# External object files for target external-muparser
external__muparser_EXTERNAL_OBJECTS =

external/libexternal-muparser.a: external/CMakeFiles/external-muparser.dir/external-muparser_autogen/mocs_compilation.cpp.o
external/libexternal-muparser.a: external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParser.cpp.o
external/libexternal-muparser.a: external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBase.cpp.o
external/libexternal-muparser.a: external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserBytecode.cpp.o
external/libexternal-muparser.a: external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserCallback.cpp.o
external/libexternal-muparser.a: external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserDLL.cpp.o
external/libexternal-muparser.a: external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserError.cpp.o
external/libexternal-muparser.a: external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserInt.cpp.o
external/libexternal-muparser.a: external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTest.cpp.o
external/libexternal-muparser.a: external/CMakeFiles/external-muparser.dir/muparser_v225/src/muParserTokenReader.cpp.o
external/libexternal-muparser.a: external/CMakeFiles/external-muparser.dir/build.make
external/libexternal-muparser.a: external/CMakeFiles/external-muparser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX static library libexternal-muparser.a"
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && $(CMAKE_COMMAND) -P CMakeFiles/external-muparser.dir/cmake_clean_target.cmake
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/external-muparser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
external/CMakeFiles/external-muparser.dir/build: external/libexternal-muparser.a
.PHONY : external/CMakeFiles/external-muparser.dir/build

external/CMakeFiles/external-muparser.dir/clean:
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external && $(CMAKE_COMMAND) -P CMakeFiles/external-muparser.dir/cmake_clean.cmake
.PHONY : external/CMakeFiles/external-muparser.dir/clean

external/CMakeFiles/external-muparser.dir/depend: external/external-muparser_autogen/timestamp
	cd /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external/CMakeFiles/external-muparser.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : external/CMakeFiles/external-muparser.dir/depend

