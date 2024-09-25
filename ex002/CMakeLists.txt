file(GLOB EX002_SOURCES "my_print_revalpha.c")

add_library(ex002_lib STATIC ${EX002_SOURCES})

target_link_libraries(ex002_lib PRIVATE ex000_lib)

install(FILES my_print_revalpha.h DESTINATION include/ex001)

target_include_directories(ex002_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex000)
