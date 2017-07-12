cmake_minimum_required(VERSION 3.5.2)

include("gate/cmake/HunterGate.cmake")
HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.18.52.tar.gz"
    SHA1 "b16c19e28aefbb83b02aa90bacf8350fc45ef7d0")

project(selection_sort)

include("config.cmake")
include("hunter.cmake")
include(CTest)

add_executable(
    ${CMAKE_PROJECT_NAME}
    selection_sort.cpp
    selection_sort.hpp
    selection_sort_test.cpp)

target_link_libraries(
    ${CMAKE_PROJECT_NAME}
    ${CATCH})

add_test(NAME ${CMAKE_PROJECT_NAME} COMMAND
    ${CMAKE_PROJECT_NAME} ${CATCH_OPTIONS}) 
