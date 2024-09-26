file(GLOB EX402_SOURCES "my_putstr.c")

add_library(ex402_lib STATIC ${EX402_SOURCES})

target_link_libraries(ex402_lib PRIVATE ex300_lib)

install(FILES my_putstr.h DESTINATION include/ex402)

target_include_directories(ex402_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex300)
