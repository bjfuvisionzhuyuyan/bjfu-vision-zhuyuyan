cmake_minimum_required(VERSION 3.10)
project(score)
include_directories(task2)
add_executable(score.cpp/tools.cpp)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(split_channels part_2/split_channels.cpp )
target_link_libraries(split_channels ${OpenCV_LIBS})
