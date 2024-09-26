file(GLOB EX401_SOURCES "my_swap.c")

add_library(ex401_lib STATIC ${EX401_SOURCES})

target_link_libraries(ex401_lib PRIVATE ex300_lib)

install(FILES my_swap.h DESTINATION include/ex401)

target_include_directories(ex401_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex300)
