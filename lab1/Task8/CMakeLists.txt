
cmake_minimum_required (VERSION 3.8)

add_library(Task8Lib STATIC "")

target_sources(Task8Lib PRIVATE "task7_func.c")

target_include_directories (Task8Lib PRIVATE "includes")

add_executable (Task8 "")

target_sources (Task8 PRIVATE "task7_main.c")

target_link_libraries (Task8 Task8Lib)

target_include_directories (Task8 PRIVATE "includes")
