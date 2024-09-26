file(GLOB EX403_SOURCES "my_strlen.c")

add_library(ex403_lib STATIC ${EX403_SOURCES})

target_link_libraries(ex403_lib PRIVATE ex300_lib)

install(FILES my_strlen.h DESTINATION include/ex403)

target_include_directories(ex403_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex300)
