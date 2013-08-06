
add_executable(testEntity testEntity.cxx)
target_link_libraries(testEntity prov)
add_test(testEntity testEntity)
