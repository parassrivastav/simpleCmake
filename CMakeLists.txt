cmake_minimum_required(VERSION "3.0")

include_directories("${CMAKE_SOURCE_DIR}/include")

set (APP_SOURCE_FILES ${CMAKE_SOURCE_DIR}/main.cpp 
${CMAKE_SOURCE_DIR}/src/funcs.cpp ${CMAKE_SOURCE_DIR}/src/horse.cpp
${CMAKE_SOURCE_DIR}/src/mule.cpp)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(helloworld)

add_executable(helloworld ${APP_SOURCE_FILES})
