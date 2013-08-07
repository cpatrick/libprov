set(CTEST_SOURCE_DIRECTORY "C:/Users/cpatrick/Projects/Dashboards/libprov")
set(CTEST_BINARY_DIRECTORY "C:/Users/cpatrick/Projects/Dashboards/libprov-build")

set(CTEST_UPDATE_COMMAND "git")

set(CTEST_SITE "Uriel")
set(CTEST_BUILD_NAME "Win7-VS9")
set(CTEST_CMAKE_GENERATOR "Visual Studio 9 2008")

ctest_start("Nightly")
ctest_update()
ctest_configure()
ctest_build()
ctest_test()
ctest_submit()
