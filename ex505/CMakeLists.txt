file(GLOB EX505_SOURCES "my_compute_square_root.c")

add_library(ex505_lib STATIC ${EX505_SOURCES})

target_link_libraries(ex505_lib PRIVATE ex403_lib)

install(FILES my_compute_square_root.h DESTINATION include/ex505)

target_include_directories(ex505_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex403)
