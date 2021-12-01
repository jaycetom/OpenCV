cmake_minimum_required(VERSION 3.20)
project(demo06)
# 可以将下面的路径单独添加到环境变量OpenCV_DIR
set(OpenCV_DIR "E:\\C_Lib\\Opencv\\Opencv_4\\opencv\\mingw-build\\install")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)
set(CMAKE_CXX_STANDARD 14)

add_executable(demo06 main.cpp)

target_link_libraries(demo06 ${OpenCV_LIBS})
