cmake_minimum_required(VERSION 2.8.11)

project(rasterwindow)


SET(src 
     rasterwindow.cpp
	 main.cpp
     )





# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5GUI)

# Tell CMake to create the helloworld executable
add_executable(rasterwindow ${src})

# Use the Widgets module from Qt 5.
target_link_libraries(rasterwindow Qt5::Gui)