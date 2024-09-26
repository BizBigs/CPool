file(GLOB EX405_SOURCES "my_getnbr.c")

add_library(ex405_lib STATIC ${EX405_SOURCES})

target_link_libraries(ex405_lib PRIVATE ex403_lib)

install(FILES my_getnbr.h DESTINATION include/ex405)

target_include_directories(ex405_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex403)
