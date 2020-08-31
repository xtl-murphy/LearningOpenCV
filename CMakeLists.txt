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
set(SAMPLES_DIR ${LIB_DIR}/Samples)
set(INTER_DIR ${LIB_DIR}/Samples/Inter)
set(FILTER_DIR ${LIB_DIR}/Samples/Filter)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${THIRD_DIR})
<<<<<<< HEAD
add_subdirectory(ThirdParty/opencv-4.4.0)
=======
include_directories(${LIB_DIR})
>>>>>>> f8e428ba3b27f5497df574265368ba7791d27290

file(GLOB_RECURSE STB "${THIRD_DIR}/stb/*.c" "${THIRD_DIR}/stb/*.h")
file(GLOB_RECURSE Samples "${SAMPLES_DIR}/*.cpp")
file(GLOB_RECURSE Core
        "${LIB_DIR}/Time.hpp"
        "${LIB_DIR}/Time.inl"
        "${LIB_DIR}/Delta.hpp"
        )

<<<<<<< HEAD
add_executable(OpenCV_Sample ${STB} ${OpenCV} main.cpp)
=======

add_executable(OpenCV_Sample ${STB} ${Core} main.cpp)
add_executable(OpenCV_Sample_Linear ${STB} ${Core} ${INTER_DIR}/Linear/Linear.cpp)
add_executable(OpenCV_Sample_Blur ${STB} ${Core} ${FILTER_DIR}/Blur/Blur.cpp)
add_executable(OpenCV_Sample_Median ${STB} ${Core} ${FILTER_DIR}/Median/Median.cpp)
add_executable(OpenCV_Sample_Index ${STB} ${Core} ${SAMPLES_DIR}/Index/Index.cpp)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBRARIES})
target_link_libraries(OpenCV_Sample_Linear ${OpenCV_LIBRARIES})
target_link_libraries(OpenCV_Sample_Blur ${OpenCV_LIBRARIES})
target_link_libraries(OpenCV_Sample_Median ${OpenCV_LIBRARIES})
target_link_libraries(OpenCV_Sample_Index ${OpenCV_LIBRARIES})
>>>>>>> f8e428ba3b27f5497df574265368ba7791d27290
