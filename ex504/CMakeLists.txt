file(GLOB EX504_SOURCES "my_compute_power_rec.c")

add_library(ex504_lib STATIC ${EX504_SOURCES})

target_link_libraries(ex504_lib PRIVATE ex403_lib)

install(FILES my_compute_power_rec.h DESTINATION include/ex504)

target_include_directories(ex504_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex403)
