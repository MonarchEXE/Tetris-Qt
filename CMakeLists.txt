CMAKE_MINIMUM_REQUIRED(VERSION 3.30)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)
# set(CMAKE_BINARY_DIR "/home/monac/Projects/C++/Tetris/build") # TIL Binary dir = Build dir
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(Tetris VERSION 1.0)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

# add_subdirectory(...)
# below code located in CMakeLists.txt found in ... subdir
qt_add_executable(Tetris src/main.cpp src/gamewindow.h src/gamewindow.cpp src/mainwindow.h src/mainwindow.cpp)

target_link_libraries(Tetris PRIVATE Qt6::Widgets)
