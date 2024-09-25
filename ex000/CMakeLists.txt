# ex000/CMakeLists.txt
# Create a static library for ex000
file(GLOB EX000_SOURCES "my_putchar.c")
add_library(ex000_lib STATIC ${EX000_SOURCES})

# Install headers for ex000
install(FILES my_putchar.h DESTINATION include/ex000)
