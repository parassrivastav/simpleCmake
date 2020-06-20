cmake_minimum_required(VERSION "3.0")

#find_package(OpenCV REQUIRED )

include_directories("${CMAKE_SOURCE_DIR}/include")

SET (OSG_LIB_DIR ${CMAKE_SOURCE_DIR}/lib)

set (APP_SOURCE_FILES ${CMAKE_SOURCE_DIR}/main.cpp
                      ${CMAKE_SOURCE_DIR}/src/animals/funcs.cpp
                      ${CMAKE_SOURCE_DIR}/src/animals/horse.cpp
                      ${CMAKE_SOURCE_DIR}/src/animals/mule.cpp)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(animalSim)

add_executable(animalSim ${APP_SOURCE_FILES})

TARGET_LINK_LIBRARIES (animalSim ${CMAKE_SOURCE_DIR}/libreactphysics3d.a  ${OSG_LIB_DIR}/libosg.so ${OSG_LIB_DIR}/libosgViewer.so.3.6.4 ${OSG_LIB_DIR}/libosgUtil.so.3.6.4 ${OSG_LIB_DIR}/libosgDB.so.3.6.4 ${OSG_LIB_DIR}/libosgGA.so ${OPENTHREADS_LIBRARIES})
