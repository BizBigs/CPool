file(GLOB EX501_SOURCES "my_compute_factorial_it.c")

add_library(ex501_lib STATIC ${EX501_SOURCES})

target_link_libraries(ex501_lib PRIVATE ex403_lib)

install(FILES my_compute_factorial_it.h DESTINATION include/ex501)

target_include_directories(ex501_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex403)
