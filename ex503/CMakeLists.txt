file(GLOB EX503_SOURCES "my_compute_power_it.c")

add_library(ex503_lib STATIC ${EX503_SOURCES})

target_link_libraries(ex503_lib PRIVATE ex403_lib)

install(FILES my_compute_power_it.h DESTINATION include/ex503)

target_include_directories(ex503_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex403)
