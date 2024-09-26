file(GLOB EX304_SOURCES "my_isneg.c")

add_library(ex304_lib STATIC ${EX304_SOURCES})

target_link_libraries(ex304_lib PRIVATE ex300_lib)

install(FILES my_isneg.h DESTINATION include/ex304)

target_include_directories(ex304_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex300)
