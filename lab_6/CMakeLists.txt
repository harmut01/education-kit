cmake_minimum_required(VERSION 3.17)
project(lab_6)

set(CMAKE_CXX_STANDARD 14)

include_directories(mbed-os/)
include_directories(BSP_B-L475E-IOT01/Drivers/BSP/B-L475E-IOT01/)
include_directories(mbed-os/targets/TARGET_STM/TARGET_STM32L4/TARGET_STM32L475xG/TARGET_DISCO_L475VG_IOT01A/)

add_executable(lab_6
        main.cpp)
