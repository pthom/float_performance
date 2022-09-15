cmake_minimum_required(VERSION 3.1)
project(FloatPerformances)

set(CMAKE_CXX_STANDARD 14)

add_executable(perf_f perf_f.cpp)
target_link_libraries(perf_f PRIVATE external)

add_executable(perf_n perf_n.cpp)
target_include_directories(perf_n PRIVATE external)
