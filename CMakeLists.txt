project(libprov)
cmake_minimum_required(VERSION 2.8.7)

include_directories(include)

set(libprov_H_FILES
  include/prov.h
  include/provObject.h
)

set(libprov_CXX_FILES
  src/provObject.cxx
)

add_library(prov
  ${libprov_CXX_FILES}
  ${libprov_H_FILES}
)

include( CTest )
if( BUILD_TESTING )
  add_subdirectory( test )
endif()
