cmake_minimum_required(VERSION 3.22.1)
project(testsome)
add_executable(testsome main.cpp)
target_link_directories(testsome PRIVATE ${CMAKE_SOURCE_DIR}/../../SomeLibDemo/cpp/build/)
target_link_libraries(testsome mearlymath)


