cmake_minimum_required(VERSION 3.23)

project(QT_module36 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/Users/alexander/QT/6.6.1/macos")
set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

find_package(Qt6 REQUIRED COMPONENTS
        Core
        Gui
        Widgets
        )
qt_standard_project_setup()

qt_add_executable(QT_module36
        src/main.cpp
        src/mainWindow.cpp include/mainWindow.h)

target_link_libraries(QT_module36 PRIVATE
        Qt6::Core
        Qt6::Gui
        Qt::Widgets)

target_include_directories(QT_module36 PUBLIC ${MY_INCLUDE_DIR})

