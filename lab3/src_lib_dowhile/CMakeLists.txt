
# Include sub-projects.

add_library(lab3_lib_while STATIC "")

target_include_directories(lab3_lib_while PUBLIC "../include")

target_sources(lab3_lib_while PRIVATE "task1.c" "task2.c" "task3.c" "task4.c" "task5.c" "func.c")
