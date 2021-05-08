cmake_minimum_required(VERSION 3.15)
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
set(SAMPLES_DIR ${LIB_DIR}/Samples)
set(INTER_DIR ${LIB_DIR}/Samples/Inter)
set(FILTER_DIR ${LIB_DIR}/Samples/Filter)
set(EDGE_DIR ${LIB_DIR}/Samples/Edge)
set(TRIANGULATION_DIR ${LIB_DIR}/Samples/Triangulation)
set(CLAZZ_DIR ${LIB_DIR}/Samples/clazz)

IF(WIN32)

ELSE()
set(OpenCV_DIR /usr/local/Cellar/opencv@2/2.4.13.7_11/share/OpenCV)
ENDIF()

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${THIRD_DIR})
include_directories(${LIB_DIR})

file(GLOB_RECURSE STB "${THIRD_DIR}/stb/*.c" "${THIRD_DIR}/stb/*.h")
file(GLOB_RECURSE Samples "${SAMPLES_DIR}/*.cpp")
file(GLOB_RECURSE Core
        "${LIB_DIR}/Time.hpp"
        "${LIB_DIR}/Time.inl"
        "${LIB_DIR}/Delta.hpp")

file(GLOB_RECURSE Algorithm ${LIB_DIR}/Samples/Algorithm/*.hpp ${LIB_DIR}/Samples/Algorithm/*.cpp)


add_executable(OpenCV_Sample ${STB} ${Core} main.cpp Samples/Algorithm/middle/array/addToArrayForm.hpp)
add_executable(OpenCV_Sample_Linear ${STB} ${Core} ${INTER_DIR}/Linear/Linear.cpp)
add_executable(OpenCV_Sample_Blur ${STB} ${Core} ${FILTER_DIR}/Blur/Blur.cpp)
add_executable(OpenCV_Sample_Median ${STB} ${Core} ${FILTER_DIR}/Median/Median.cpp)
add_executable(OpenCV_Sample_Canny ${STB} ${Core} ${EDGE_DIR}/Canny/Canny.cpp)
add_executable(OpenCV_Sample_Triangulation ${STB} ${Core} ${TRIANGULATION_DIR}/Delaunay/Delaunay.cpp)
add_executable(OpenCV_Sample_Clazz ${STB} ${Core} ${CLAZZ_DIR}/Clazz.cpp ${CLAZZ_DIR}/NormalClass.hpp Samples/Clazz/KeyWordClass.hpp Samples/Clazz/ConstClass.hpp)
add_executable(Sample_Clazz_Union ${STB} ${Core} ${CLAZZ_DIR}/union/UnionTest.cpp)
add_executable(OpenCV_Sample_Algorithm ${Core} ${Algorithm})

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBRARIES})
target_link_libraries(OpenCV_Sample_Linear ${OpenCV_LIBRARIES})
target_link_libraries(OpenCV_Sample_Blur ${OpenCV_LIBRARIES})
target_link_libraries(OpenCV_Sample_Median ${OpenCV_LIBRARIES})
target_link_libraries(OpenCV_Sample_Canny ${OpenCV_LIBRARIES})
target_link_libraries(OpenCV_Sample_Triangulation ${OpenCV_LIBRARIES})