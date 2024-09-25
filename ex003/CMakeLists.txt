file(GLOB EX003_SOURCES "my_print_digits.c")

add_library(ex003_lib STATIC ${EX003_SOURCES})

target_link_libraries(ex003_lib PRIVATE ex000_lib)

install(FILES my_print_digits.h DESTINATION include/ex003)

target_include_directories(ex003_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex000)
