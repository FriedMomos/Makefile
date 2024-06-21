cmake_minimum_required(VERSION 3.22.1)

project(mearlymath)
add_library(mearlymath adder.cpp)
set_target_properties(mearlymath PROPERTIES PUBLIC_HEADER adder.h)

install(TARGETS mearlymath DESTINATION lib
	PUBLIC_HEADER DESTINATION include
	)

