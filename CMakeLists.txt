cmake_minimum_required(VERSION 3.10)

# for dummies who can't understand code below-> https://cmake.org/cmake/help/latest/guide/tutorial/index.html

project(GraPla VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(src)

add_executable(GraPla main.cc)

target_link_libraries(GraPla
                      PUBLIC
                      src
                      )

target_include_directories(GraPla PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/src"
                          )
