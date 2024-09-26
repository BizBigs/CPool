file(GLOB EX303_SOURCES "my_print_digits.c")

add_library(ex303_lib STATIC ${EX303_SOURCES})

target_link_libraries(ex303_lib PRIVATE ex300_lib)

install(FILES my_print_digits.h DESTINATION include/ex303)

target_include_directories(ex303_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex300)
