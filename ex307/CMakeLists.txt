file(GLOB EX307_SOURCES "my_put_nbr.c")

add_library(ex307_lib STATIC ${EX307_SOURCES})

target_link_libraries(ex307_lib PRIVATE ex300_lib)

install(FILES my_put_nbr.h DESTINATION include/ex307)

target_include_directories(ex307_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex300)
