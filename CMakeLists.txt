cmake_minimum_required(VERSION 3.10)

project(cpicker)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Widgets)

SET (
      SOURCE_FILES 
      color_picker.cpp
      color_view.cpp
      main.cpp   
)

add_executable(cpicker ${SOURCE_FILES})
target_link_libraries(cpicker Qt5::Widgets)
