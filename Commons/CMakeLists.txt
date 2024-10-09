cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME "Commons")
project(${PROJECT_NAME})

include(CMakePrintHelpers)
cmake_print_variables(PROJECT_NAME)
cmake_print_variables(${EXECUTABLE_OUTPUT_PATH})


set(LIBRARY_OUTPUT_PATH  "${CMAKE_BINARY_DIR}/lib")
cmake_print_variables(LIBRARY_OUTPUT_PATH)

add_library(${PROJECT_NAME} SHARED
    LogPublisher.cpp
)
#target_include_directories(Commons PUBLIC
#    ${CMAKE_CURRENT_SOURCE_DIR} 
#)

cmake_print_variables("")
