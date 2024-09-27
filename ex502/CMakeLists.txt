file(GLOB EX502_SOURCES "my_compute_factorial_rec.c")

add_library(ex502_lib STATIC ${EX502_SOURCES})

target_link_libraries(ex502_lib PRIVATE ex403_lib)

install(FILES my_compute_factorial_rec.h DESTINATION include/ex502)

target_include_directories(ex502_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex403)
