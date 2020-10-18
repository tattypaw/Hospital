cmake_minimum_required(VERSION 3.17)
project(hospital)

set(CMAKE_CXX_STANDARD 14)

add_executable(hospital main.cpp Hospital.h Doctor.h Department.h)