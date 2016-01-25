cmake_minimum_required(VERSION 2.8.11)

project(chapter1-basics)

cmake_policy(SET CMP0028 NEW)


# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
#find_package(Qt5GUI PATHS C:/Qt/Qt5.5.1/5.5/msvc2013_64/lib/cmake)
find_package(Qt5Qml PATHS ${CMAKE_PREFIX_PATH})
find_package(Qt5Quick PATHS ${CMAKE_PREFIX_PATH})


message("QtGUI_location,${QtGUI_location}")
# Tell CMake to create the helloworld executable
add_executable(chapter1-basics WIN32 piechart.cpp main.cpp)




SET (SUBPATH ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<$<CONFIG:Debug>:Debug>/qml)



#if($<CONFIG:Release>)
#   SET (SUBPATH ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<$<CONFIG:Release>:Release>/qml)
#endif($<CONFIG:Release>)


message("SUBPATH:${SUBPATH}")


#set_target_properties(chapter1-basics PROPERTIES CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<$<CONFIG:Debug>:Debug>/qml)
#set_target_properties(chapter1-basics PROPERTIES CMAKE_RUNTIME_OUTPUT_DIRECTORY_<CONFIG> QML)

# Use the Widgets module from Qt 5.qml quick
target_link_libraries(chapter1-basics Qt5::Qml Qt5::Quick)