file(GLOB EX406_SOURCES "my_sort_int_array.c")

add_library(ex406_lib STATIC ${EX406_SOURCES})

target_link_libraries(ex406_lib PRIVATE ex403_lib)

install(FILES my_sort_int_array.h DESTINATION include/ex406)

target_include_directories(ex406_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex403)
