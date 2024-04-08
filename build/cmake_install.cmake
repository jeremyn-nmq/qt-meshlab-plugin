# Install script for directory: /Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/Cook-Torrance.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/Cook-Torrance.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/Cook-Torrance.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/Hatch.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/Hatch.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/Hatch.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/Oren-Nayar.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/Oren-Nayar.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/Oren-Nayar.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/SEM.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/SEM.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/ambient_occlusion.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/ambient_occlusion4.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/ambient_occlusion8.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/sm" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/sm/depth.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/sm" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/sm/depth.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/sm" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/sm/object.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/sm" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/sm/object.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/ssao" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/ssao/blur.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/ssao" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/ssao/blur.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/ssao" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/ssao/normalMap.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/ssao" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/ssao/normalMap.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/ssao" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/ssao/ssao.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/ssao" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/ssao/ssao.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/vsm" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/vsm/depthVSM.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/vsm" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/vsm/depthVSM.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/vsm" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/vsm/objectVSM.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/vsm" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/vsm/objectVSM.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/vsmb" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/vsmb/blurVSM.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/vsmb" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/vsmb/blurVSM.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/vsmb" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/vsmb/depthVSM.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/vsmb" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/vsmb/depthVSM.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/vsmb" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/vsmb/objectVSM.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/decorate_shadow/vsmb" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/decorate_shadow/vsmb/objectVSM.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/depthmap.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/depthmap.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/depthmap.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/dimple.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/dimple.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/dimple.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/electronic microscope.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/envmap.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/envmap.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/envmap.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/glass.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/glass.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/glass.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/gooch.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/gooch.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/gooch.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/lattice.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/lattice.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/lattice.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/minnaert.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/minnaert.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/minnaert.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/normalmap.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/normalmap.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/normalmap.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/phong.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/phong.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/phong.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/polkadot3d.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/polkadot3d.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/polkadot3d.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/reflexion_lines.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/reflexion_lines.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/reflexion_lines.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/slicingplane.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/slicingplane.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/slicingplane.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_analysis.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_analysis.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_analysis_color.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_analysis_color.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_copy.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_copy.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_copy_color.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_copy_color.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_phong.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_phong.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_phong_color.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_phong_color.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_point_projection.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_point_projection.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_point_projection_color.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_point_projection_color.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_synthesis.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_synthesis.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_synthesis_color.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders/splatpyramid" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/splatpyramid/shader_synthesis_color.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/stripes2.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/stripes2.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/stripes2.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/toon.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/toon.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/toon.vert")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/xray.frag")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/xray.gdp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/meshlab.app/Contents/shaders" TYPE FILE FILES "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/../distrib/shaders/xray.vert")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/vcglib/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/external/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/common/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlab/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_3ds/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_base/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_bre/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_collada/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_ctm/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_expe/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_json/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_pdb/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_tri/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_txt/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_u3d/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/io_x3d/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_sample/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_sample_dyn/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_createiso/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_geodesic/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_sample_gpu/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_ao/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_camera/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_clean/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_color_projection/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_colorproc/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_create/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_csg/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_dirt/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_fractal/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_func/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_img_patch_param/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_isoparametrization/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_layer/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_measure/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_meshing/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mls/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualglobal/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_mutualinfo/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_plymc/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_qhull/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_quality/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_sampling/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_screened_poisson/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_sdfgpu/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_select/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_sketchfab/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_ssynth/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_texture/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_trioptimize/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_unsharp/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/filter_voronoi/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/render_gdp/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/render_radiance_scaling/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/decorate_base/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/decorate_background/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/decorate_raster_proj/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/decorate_shadow/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_sample/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_align/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_manipulators/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_measure/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_mutualcorrs/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_paint/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_pickpoints/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_point/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_referencing/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_quality/cmake_install.cmake")
  include("/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/meshlabplugins/edit_select/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/jeremyn/jeremyn-coding/MITIU/advanced-computer-graphics/meshlab/src/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
