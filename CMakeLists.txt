project(libprov)
cmake_minimum_required(VERSION 2.8.11)

include_directories(include)

add_subdirectory(src)

include( CTest )
if( BUILD_TESTING )
  add_subdirectory( test )
endif()
