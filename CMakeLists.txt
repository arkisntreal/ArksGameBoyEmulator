cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(GameBoyEmulator)

include_directories(headers)
include_directories(src)

set(CMAKE_EXPORT_COMPILE_COMMANDS True)

file(GLOB SOURCES src/*.cpp)
add_executable(${PROJECT_NAME} main.cpp ${SOURCES})

find_package(SFML COMPONENTS graphics system window audio REQUIRED)
target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-system sfml-window sfml-audio)
