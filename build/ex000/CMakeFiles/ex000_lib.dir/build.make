# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /app

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /app/build

# Include any dependencies generated for this target.
include ex000/CMakeFiles/ex000_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include ex000/CMakeFiles/ex000_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include ex000/CMakeFiles/ex000_lib.dir/progress.make

# Include the compile flags for this target's objects.
include ex000/CMakeFiles/ex000_lib.dir/flags.make

ex000/CMakeFiles/ex000_lib.dir/my_putchar.c.o: ex000/CMakeFiles/ex000_lib.dir/flags.make
ex000/CMakeFiles/ex000_lib.dir/my_putchar.c.o: /app/ex000/my_putchar.c
ex000/CMakeFiles/ex000_lib.dir/my_putchar.c.o: ex000/CMakeFiles/ex000_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/app/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object ex000/CMakeFiles/ex000_lib.dir/my_putchar.c.o"
	cd /app/build/ex000 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT ex000/CMakeFiles/ex000_lib.dir/my_putchar.c.o -MF CMakeFiles/ex000_lib.dir/my_putchar.c.o.d -o CMakeFiles/ex000_lib.dir/my_putchar.c.o -c /app/ex000/my_putchar.c

ex000/CMakeFiles/ex000_lib.dir/my_putchar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex000_lib.dir/my_putchar.c.i"
	cd /app/build/ex000 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /app/ex000/my_putchar.c > CMakeFiles/ex000_lib.dir/my_putchar.c.i

ex000/CMakeFiles/ex000_lib.dir/my_putchar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex000_lib.dir/my_putchar.c.s"
	cd /app/build/ex000 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /app/ex000/my_putchar.c -o CMakeFiles/ex000_lib.dir/my_putchar.c.s

# Object files for target ex000_lib
ex000_lib_OBJECTS = \
"CMakeFiles/ex000_lib.dir/my_putchar.c.o"

# External object files for target ex000_lib
ex000_lib_EXTERNAL_OBJECTS =

ex000/libex000_lib.a: ex000/CMakeFiles/ex000_lib.dir/my_putchar.c.o
ex000/libex000_lib.a: ex000/CMakeFiles/ex000_lib.dir/build.make
ex000/libex000_lib.a: ex000/CMakeFiles/ex000_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/app/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libex000_lib.a"
	cd /app/build/ex000 && $(CMAKE_COMMAND) -P CMakeFiles/ex000_lib.dir/cmake_clean_target.cmake
	cd /app/build/ex000 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex000_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ex000/CMakeFiles/ex000_lib.dir/build: ex000/libex000_lib.a
.PHONY : ex000/CMakeFiles/ex000_lib.dir/build

ex000/CMakeFiles/ex000_lib.dir/clean:
	cd /app/build/ex000 && $(CMAKE_COMMAND) -P CMakeFiles/ex000_lib.dir/cmake_clean.cmake
.PHONY : ex000/CMakeFiles/ex000_lib.dir/clean

ex000/CMakeFiles/ex000_lib.dir/depend:
	cd /app/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /app /app/ex000 /app/build /app/build/ex000 /app/build/ex000/CMakeFiles/ex000_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ex000/CMakeFiles/ex000_lib.dir/depend

