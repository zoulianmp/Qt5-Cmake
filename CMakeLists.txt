cmake_minimum_required(VERSION 2.8.11)

cmake_policy(SET CMP0028 NEW)

project(QT5CmakeExa)

set(CMAKE_PREFIX_PATH C:/Qt/Qt5.5.1 CACHE PATH "The Qt5 Root Directory" )
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Output)

add_subdirectory(gui)
add_subdirectory(extending-qml)
 