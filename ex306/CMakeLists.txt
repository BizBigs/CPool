file(GLOB EX306_SOURCES "my_print_comb2.c")

add_library(ex306_lib STATIC ${EX306_SOURCES})

target_link_libraries(ex306_lib PRIVATE ex300_lib)

install(FILES my_print_comb2.h DESTINATION include/ex306)

target_include_directories(ex306_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex300)
