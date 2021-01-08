cmake_minimum_required(VERSION 3.7)

project(untitled6)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# Find the library
find_package(PkgConfig REQUIRED)
find_package(Qt5Widgets REQUIRED)

add_executable(${PROJECT_NAME} "main.cpp" "TransparentTextEdit.h" "TransparentTextEdit.cpp" "TextEditWidget.h" "TextEditWidget.cpp" resources.qrc)

target_include_directories(untitled6 PUBLIC  ${OBJECT_BINARY_DIR})
target_link_libraries(untitled6
    ${Qt5Widgets_LIBRARIES}
)
