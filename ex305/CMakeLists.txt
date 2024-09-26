file(GLOB EX305_SOURCES "my_print_comb.c")

add_library(ex305_lib STATIC ${EX305_SOURCES})

target_link_libraries(ex305_lib PRIVATE ex300_lib)

install(FILES my_print_comb.h DESTINATION include/ex305)

target_include_directories(ex305_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex300)
