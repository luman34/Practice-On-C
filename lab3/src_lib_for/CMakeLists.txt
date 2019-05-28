
# Include sub-projects.

add_library(lab3_lib_for STATIC "")

target_include_directories(lab3_lib_for PUBLIC "../include")

target_sources(lab3_lib_for PRIVATE "task1.c" "task2.c" "task3.c" "task4.c" "task5.c" "func.c")
