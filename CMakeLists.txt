cmake_minimum_required(VERSION 3.10)
project(CPool)

# Set the base directory for exercises
set(EX_DIR ${CMAKE_SOURCE_DIR})

# Get a list of all subdirectories in the exercises directory
file(GLOB EX_SUBDIRS "${EX_DIR}/ex*")

# Loop through each subdirectory and add it
foreach(EX_SUBDIR ${EX_SUBDIRS})
    if(IS_DIRECTORY ${EX_SUBDIR})
        add_subdirectory(${EX_SUBDIR})
        
        # Install headers from each subdirectory
        install(DIRECTORY ${EX_SUBDIR}/ DESTINATION include/${EX_SUBDIR} FILES_MATCHING PATTERN "*.h")
    endif()
endforeach()

# Create a combined library from all libraries found in subdirectories
set(COMBINED_LIBS "")
foreach(EX_SUBDIR ${EX_SUBDIRS})
    if(IS_DIRECTORY ${EX_SUBDIR})
        get_filename_component(EX_NAME ${EX_SUBDIR} NAME)
        list(APPEND COMBINED_LIBS "${EX_NAME}_lib")
    endif()
endforeach()

add_library(my_combined_lib INTERFACE)
target_link_libraries(my_combined_lib INTERFACE ${COMBINED_LIBS})

# Install the combined library
install(TARGETS my_combined_lib DESTINATION lib)

# Install libraries individually
foreach(EX_NAME ${COMBINED_LIBS})
    install(TARGETS ${EX_NAME} DESTINATION lib)
endforeach()

# Add main.c as a standalone executable
add_executable(main main.c)

# Link main executable with the combined library
target_link_libraries(main PRIVATE my_combined_lib)

# Ensure main can include headers from all subdirectories
include_directories(${EX_SUBDIRS})

# Optional: Install main executable
install(TARGETS main DESTINATION bin)
