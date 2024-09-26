file(GLOB EX005_SOURCES "my_print_comb.c")

add_library(ex005_lib STATIC ${EX005_SOURCES})

target_link_libraries(ex005_lib PRIVATE ex000_lib)

install(FILES my_print_comb.h DESTINATION include/ex005)

target_include_directories(ex005_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex000)
