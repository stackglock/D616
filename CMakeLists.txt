cmake_minimum_required(VERSION 3.2)

project(SFML)

find_package(SFML 2.5.1 COMPONENTS system graphics audio network REQUIRED)

file(GLOB CPPS "src/*.cpp")
file(GLOB HEADERS "headers/*.h")
file(GLOB CPPHEADERS "headers/*.hpp")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(${PROJECT_NAME} ${CPPS} ${HEADERS} ${CPPHEADERS}) 

target_link_libraries(${PROJECT_NAME} PRIVATE sfml-audio sfml-graphics sfml-network sfml-system)
