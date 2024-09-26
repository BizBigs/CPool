# ex300/CMakeLists.txt
# Create a static library for ex300
file(GLOB EX300_SOURCES "my_putchar.c")
add_library(ex300_lib STATIC ${EX300_SOURCES})

# Install headers for ex300
install(FILES my_putchar.h DESTINATION include/ex300)
