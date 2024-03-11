cmake_minimum_required(VERSION 3.20)
project(Project_with_libraries VERSION 1.0 LANGUAGES C)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)
add_compile_options(-Wall -Wextra -pedantic -O0)
add_library(erste_statische_lib STATIC src/static.c)
add_library(erste_shared_lib SHARED src/shared.c)
target_include_directories(erste_statische_lib PUBLIC include)
target_include_directories(erste_shared_lib PUBLIC include)
add_executable(erstes_cmake_exec main.c)
target_include_directories(erstes_cmake_exec PUBLIC include)
target_link_libraries(erstes_cmake_exec PRIVATE 
    erste_statische_lib
    erste_shared_lib)