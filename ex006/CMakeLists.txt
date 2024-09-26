file(GLOB EX006_SOURCES "my_print_comb2.c")

add_library(ex006_lib STATIC ${EX006_SOURCES})

target_link_libraries(ex006_lib PRIVATE ex000_lib)

install(FILES my_print_comb2.h DESTINATION include/ex006)

target_include_directories(ex006_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex000)
