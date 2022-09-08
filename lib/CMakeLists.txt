cmake_minimum_required(VERSION 3.21)
set(CMAKE_C_COMPILER "/usr/bin/gcc-12")
set(CMAKE_CXX_COMPILER "/usr/bin/g++-12")
project(corsac_lib)

add_library(corsac_lib STATIC
  src/misc.cpp src/obj/object.cpp src/obj/box.cpp src/obj/symbol.cpp src/mem/memory.cpp src/mem/package.cpp)

#set_target_properties(corsac_lib PROPERTIES VERSION ${PROJECT_VERSION})

set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER "include/prelude.hh")

target_compile_options(corsac_lib PRIVATE -std=c++20)

target_include_directories(${PROJECT_NAME} PRIVATE include)
target_include_directories(${PROJECT_NAME} PRIVATE src)

include(GNUInstallDirs)

install(TARGETS ${PROJECT_NAME}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
