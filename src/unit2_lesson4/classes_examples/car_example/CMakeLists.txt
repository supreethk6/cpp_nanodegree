cmake_minimum_required(VERSION 3.5.1)
set(CMAKE_CXX_STANDARD 17)

project(car_class_example)
# add_executable(pgm_output car.cpp car_main.cpp)
add_executable(pgm_output car.cpp main.cpp)   # change main.cpp to car_main.cpp incase 
                                              # you want to run that example.