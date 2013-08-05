set(CTEST_SOURCE_DIRECTORY "..")
set(CTEST_BINARY_DIRECTORY ".")
include(${CTEST_SOURCE_DIRECTORY}/CMake/travis_common.cmake)

ctest_start("Continuous")
ctest_configure()
ctest_build()
ctest_test()
