# ex001/CMakeLists.txt
# Create a static library for ex001
file(GLOB EX001_SOURCES "my_print_alpha.c")
add_library(ex001_lib STATIC ${EX001_SOURCES})

# Link ex001_lib to ex000_lib if needed
target_link_libraries(ex001_lib PRIVATE ex000_lib)

# Install headers for ex001
install(FILES my_print_alpha.h DESTINATION include/ex001)

# Ensure that ex001_lib knows where to find headers from ex000
target_include_directories(ex001_lib PRIVATE ${CMAKE_SOURCE_DIR}/ex000)
