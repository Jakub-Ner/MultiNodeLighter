cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME "Main")
set(PROJECTS "Commons" "ServerNode")

project(${PROJECT_NAME})

include(CMakePrintHelpers)
include(${CMAKE_CURRENT_LIST_DIR}/CMakeHelpers.txt)

cmake_print_variables(PROJECT_NAME)
cmake_print_variables(${EXECUTABLE_OUTPUT_PATH})

if (DEFINED ENV{PROJECT})
    list(FIND PROJECTS $ENV{PROJECT} INDEX)
    assert_not(${INDEX} -1 "Invalid PROJECT, should be one of ${PROJECTS}")

    list(GET PROJECTS ${INDEX} SELECTED_PROJECT)
    cmake_print_variables(SELECTED_PROJECT)
    add_subdirectory(${SELECTED_PROJECT})
else()
    foreach(PROJECT IN LISTS PROJECTS)
        add_subdirectory(${PROJECT})
    endforeach()
endif()



