cmake_minimum_required(VERSION 2.8.11)

project(DPointer)

cmake_policy(SET CMP0028 NEW)


# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
#find_package(Qt5GUI PATHS C:/Qt/Qt5.5.1/5.5/msvc2013_64/lib/cmake)
find_package(Qt5Core PATHS ${CMAKE_PREFIX_PATH})

get_target_property(QtGUI_location Qt5::Gui LOCATION)

message("QtGUI_location,${QtGUI_location}")
# Tell CMake to create the helloworld executable
add_executable(DPointer WIN32 KFooDerived.h KFooDerived.cpp main.cpp)

# Use the Widgets module fFrom Qt 5.
target_link_libraries(DPointer Qt5::Core)