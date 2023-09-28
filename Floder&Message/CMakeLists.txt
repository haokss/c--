cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(folder LANGUAGES CXX)

add_library(message 
    STATIC
        Message.hpp
        Message.cpp
        Folder.hpp
        Folder.cpp
)
add_executable(main_cmake main.cpp)

target_link_libraries(main_cmake message)

# useage  mkdir build 
#         cd build  
#         cmake .. 
#         cmake --build .