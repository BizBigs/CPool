file(GLOB EX507_SOURCES "my_find_prime_sup.c")

add_library(ex507_lib STATIC ${EX507_SOURCES})

target_link_libraries(ex507_lib PRIVATE ex506_lib)

install(FILES my_find_prime_sup.h DESTINATION include/ex507)

target_include_directories(ex507_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex506)
