cmake_minimum_required(VERSION 4.0)
project(restoran)

set(CMAKE_CXX_STANDARD 20)

add_executable(restoran
        Dish.cpp
        Dish.h
        Order.cpp
        Order.h
        Customer.cpp
        Customer.h)
