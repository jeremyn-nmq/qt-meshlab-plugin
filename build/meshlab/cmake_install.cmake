# Install script for directory: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/meshlab

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "MeshLab" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE DIRECTORY FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/distrib/meshlab.app" USE_SOURCE_PERMISSIONS)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./meshlab.app/Contents/MacOS/meshlab" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./meshlab.app/Contents/MacOS/meshlab")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/distrib"
      -add_rpath "$ORIGIN/../Frameworks"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./meshlab.app/Contents/MacOS/meshlab")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "MeshLab" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlab/CMakeFiles/meshlab.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

