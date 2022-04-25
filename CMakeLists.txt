cmake_minimum_required(VERSION 3.15)
project(SoftRender)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH "/usr/local/Cellar/qt@5/5.15.2")

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Quick REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/include)

aux_source_directory(${CMAKE_SOURCE_DIR} root)
aux_source_directory(${CMAKE_SOURCE_DIR}/SoftRenderer softRenderer)
aux_source_directory(${CMAKE_SOURCE_DIR}/SoftRenderer/Math math)
aux_source_directory(${CMAKE_SOURCE_DIR}/include include)

add_executable(SoftRender ${include} ${math} ${root} ${softRenderer})
target_link_libraries(SoftRender Qt5::Widgets)