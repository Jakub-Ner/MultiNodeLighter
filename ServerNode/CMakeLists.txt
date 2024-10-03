
cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME "ServerNode")
project(${PROJECT_NAME})

include(CMakePrintHelpers)
cmake_print_variables(PROJECT_NAME)
cmake_print_variables(${EXECUTABLE_OUTPUT_PATH})


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/bin")

# add_subdirectory("/lib/commons")

add_executable(${PROJECT_NAME} 
    main.cpp

    src/Rest.cpp
)

find_package(Crow)
target_link_libraries(${PROJECT_NAME} PUBLIC Crow::Crow)

target_link_libraries(${PROJECT_NAME} PUBLIC Commons)

