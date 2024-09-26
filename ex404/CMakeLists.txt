file(GLOB EX404_SOURCES "my_evil_str.c")

add_library(ex404_lib STATIC ${EX404_SOURCES})

target_link_libraries(ex404_lib PRIVATE ex403_lib)

install(FILES my_evil_str.h DESTINATION include/ex404)

target_include_directories(ex404_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex403)
