# ex301/CMakeLists.txt
# Create a static library for ex301
file(GLOB EX301_SOURCES "my_print_alpha.c")
add_library(ex301_lib STATIC ${EX301_SOURCES})

# Link ex301_lib to ex300_lib if needed
target_link_libraries(ex301_lib PRIVATE ex300_lib)

# Install headers for ex301
install(FILES my_print_alpha.h DESTINATION include/ex301)

# Ensure that ex301_lib knows where to find headers from ex300
target_include_directories(ex301_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex300)
