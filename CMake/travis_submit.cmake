set(CTEST_SOURCE_DIRECTORY "..")
set(CTEST_BINARY_DIRECTORY ".")
include(${CTEST_SOURCE_DIRECTORY}/CMake/travis_common.cmake)
include(${CTEST_SOURCE_DIRECTORY}/CTestConfig.cmake)

ctest_start("Continuous")
ctest_submit()
