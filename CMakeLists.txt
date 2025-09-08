cmake_minimum_required(VERSION 3.10)
project(CppHelloWorld)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES "src/*.cpp")

add_executable(CppHelloWorld ${SOURCES})

find_package(raylib REQUIRED)
target_link_libraries(CppHelloWorld raylib)
