cmake_minimum_required(VERSION 3.2)

project(D616)

set(CMAKE_CXX_STANDARD 20)

include(CMakeRC.cmake)

find_package(SFML 2.5.1 COMPONENTS system graphics audio network REQUIRED)

set(HEADERS_DIR "${CMAKE_SOURCE_DIR}/headers")
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")

include_directories(${HEADERS_DIR})
include_directories(${SOURCE_DIR})

file(GLOB CPPS "${SOURCE_DIR}/*.cpp")
file(GLOB HEADERS "${HEADERS_DIR}/*.h")
file(GLOB CPPHEADERS "${HEADERS_DIR}/*.hpp")

cmrc_add_resource_library(resources 
ALIAS resources::rc 
WHENCE resources 
NAMESPACE resources 

resources/structures/wall.png
resources/player/player.png)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(${PROJECT_NAME} ${CPPS} ${HEADERS} ${CPPHEADERS}) 

# target_include_directories(${PROJECT_NAME} PRIVATE ${HEADERS_DIR})
# target_include_directories(${PROJECT_NAME} PRIVATE ${SOURCE_DIR})

target_link_libraries(${PROJECT_NAME} PRIVATE sfml-audio sfml-graphics sfml-network sfml-system resources::rc)
