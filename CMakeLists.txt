cmake_minimum_required(VERSION 3.15)
project(QTDemo)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH "/usr/local/Cellar/qt@5/5.15.2")

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Quick REQUIRED)

aux_source_directory(${CMAKE_SOURCE_DIR}/SoftRenderer/Math math)
aux_source_directory(${CMAKE_SOURCE_DIR} root)

add_executable(QTDemo main.cpp Window.cpp Window.h ${math} ${root})
target_link_libraries(QTDemo Qt5::Widgets)