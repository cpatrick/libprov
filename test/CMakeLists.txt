
# Add the object test
add_executable(testObject testObject.cxx)
target_link_libraries(testObject prov)
add_test(testObject testObject)
