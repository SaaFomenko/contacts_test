cmake_minimum_required(VERSION 3.30)

project(contacts)

include_directories(${PROJECT_NAME}_library)

set(SOURCE_EXE main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_EXE})

add_subdirectory(${PROJECT_NAME}_library)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_lib)