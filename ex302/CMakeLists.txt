file(GLOB EX302_SOURCES "my_print_revalpha.c")

add_library(ex302_lib STATIC ${EX302_SOURCES})

target_link_libraries(ex302_lib PRIVATE ex300_lib)

install(FILES my_print_revalpha.h DESTINATION include/ex302)

target_include_directories(ex302_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex300)
