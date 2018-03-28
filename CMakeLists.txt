# cmake_minimum_required(VERSION <specify CMake version here>)
set(CMAKE_LEGACY_CYGWIN_WIN32 0) # Remove when CMake >= 2.8.4 is required
project(cprojects)

set(CMAKE_CXX_STANDARD 11)
add_executable(cprojects main.cpp stack/StackImpl.cpp stack/Stack.h)