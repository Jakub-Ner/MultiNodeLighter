
cmake_minimum_required(VERSION 3.15)
set(PROJECT_NAME "Main")
project(${PROJECT_NAME})

include(CMakePrintHelpers)
cmake_print_variables(PROJECT_NAME)
cmake_print_variables(${EXECUTABLE_OUTPUT_PATH})

# Shared libraries first
add_subdirectory(Commons)

# Microservices
add_subdirectory(ServerNode)

