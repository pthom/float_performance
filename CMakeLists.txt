cmake_minimum_required(VERSION 3.1)
project(FloatPerformances)

set(CMAKE_CXX_STANDARD 14)

# Arch option for linux
if (NOT APPLE AND CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU" AND DEFINED GCC_ARCH)
    if ("${GCC_ARCH}" MATCHES "Win32|x86|32")
        add_compile_options(-m32)
        add_link_options(-m32)
    elseif ("${GCC_ARCH}" MATCHES "Win64|x64|64")
        add_compile_options(-m64)
        add_link_options(-m64)
    endif ()
endif ()

# Arch option for Mac: arm64 for M1 or x86_64 for intel (32 bits build are deprecated on Mac)
if(APPLE AND DEFINED OSX_ARCH)
    if ("${OSX_ARCH}" MATCHES "x86_64")
        set(CMAKE_OSX_ARCHITECTURES "x86_64")
    elseif ("${OSX_ARCH}" MATCHES "arm64")
        set(CMAKE_OSX_ARCHITECTURES "arm64")
    else()
        message(FATAL_ERROR "Unhandled OSX_ARCH=${OSX_ARCH}")
    endif()
endif()

add_executable(perf_n perf_n.cpp)
