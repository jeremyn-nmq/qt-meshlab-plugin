# Install script for directory: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/external/u3d

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks" TYPE SHARED_LIBRARY FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external/u3d/libIFXCore.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks/libIFXCore.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks/libIFXCore.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "$ORIGIN/../Frameworks"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks/libIFXCore.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks/libIFXCore.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external/u3d/CMakeFiles/IFXCore.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks" TYPE SHARED_LIBRARY FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external/u3d/libIFXExporting.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks/libIFXExporting.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks/libIFXExporting.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "$ORIGIN/../Frameworks"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks/libIFXExporting.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks/libIFXExporting.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external/u3d/CMakeFiles/IFXExporting.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks" TYPE SHARED_LIBRARY FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external/u3d/libIFXScheduling.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks/libIFXScheduling.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks/libIFXScheduling.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "$ORIGIN/../Frameworks"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks/libIFXScheduling.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/Frameworks/libIFXScheduling.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external/u3d/CMakeFiles/IFXScheduling.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

