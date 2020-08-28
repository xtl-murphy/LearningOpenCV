cmake_minimum_required(VERSION 3.16)
project(OpenCV_Sample)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_C_FLAGS_DEBUG "-D_DEBUG")
set(CMAKE_REQUIRED_FLAGS "-std=c++17 -std=c11")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(LIB_DIR ${CMAKE_SOURCE_DIR})
set(THIRD_DIR ${LIB_DIR}/ThirdParty)

include_directories(${THIRD_DIR})

file(GLOB_RECURSE STB "${THIRD_DIR}/stb/*.c" "${THIRD_DIR}/stb/*.h")

add_executable(OpenCV_Sample ${STB} main.cpp)