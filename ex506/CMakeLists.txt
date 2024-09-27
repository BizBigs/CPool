file(GLOB EX506_SOURCES "my_is_prime.c")

add_library(ex506_lib STATIC ${EX506_SOURCES})

target_link_libraries(ex506_lib PRIVATE ex403_lib)

install(FILES my_compute_square_root.h DESTINATION include/ex506)

target_include_directories(ex506_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex403)
