file(GLOB EX007_SOURCES "my_put_nbr.c")

add_library(ex007_lib STATIC ${EX007_SOURCES})

target_link_libraries(ex007_lib PRIVATE ex000_lib)

install(FILES my_put_nbr.h DESTINATION include/ex007)

target_include_directories(ex007_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex000)
