cmake_minimum_required(VERSION 3.30)

#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../../lib) # compiling library add to path

project(contacts_lib)

set(SOURCE_LIB ${PROJECT_NAME}.cpp)

add_library(${PROJECT_NAME} STATIC ${SOURCE_LIB})