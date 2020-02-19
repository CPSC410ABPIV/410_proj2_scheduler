cmake_minimum_required(VERSION 3.15)
project(410_proj2_scheduler)

set(CMAKE_CXX_STANDARD 14)

include_directories(includes)

add_executable(410_proj2_scheduler
    CPU/CPU.cpp
    dispatcher/dispatcher.cpp
    file_io/file_io.cpp
    file_io/joblist.cpp
    includes/constants.h
    includes/CPU.h
    includes/dispatcher.h
    includes/file_io.h
    includes/joblist.h
    includes/PCB.h
    includes/scheduler.h
    includes/scheduler_FIFO.h
    includes/scheduler_RR.h
    includes/scheduler_SRTF.h
    includes/simulator.h
    includes/stats.h
    includes/tester.h
    OS_simulator/simulator.cpp
    scheduler/scheduler.cpp
    scheduler/scheduler_FIFO.cpp
    scheduler/scheduler_RR.cpp
    scheduler/scheduler_SRTF.cpp
    src/410_proj2_OS.cpp
    src/tester.cpp
    stats/stats.cpp)
