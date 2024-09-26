file(GLOB EX004_SOURCES "my_isneg.c")

add_library(ex004_lib STATIC ${EX004_SOURCES})

target_link_libraries(ex004_lib PRIVATE ex000_lib)

install(FILES my_isneg.h DESTINATION include/ex004)

target_include_directories(ex004_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex000)
