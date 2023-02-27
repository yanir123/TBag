cmake_minimum_required(VERSION 3.24)
project(TBag C)

set(CMAKE_C_STANDARD 11)

include_directories(Tbag/src)

add_executable(TBag
        Tbag/src/Tbag.c
        Tbag/src/Tbag.h Tbag/src/main.c)
