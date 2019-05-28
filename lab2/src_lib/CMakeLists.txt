

# Include sub-projects.

add_library(lab2_Lib STATIC "")
target_include_directories (lab2_Lib PUBLIC "../include")
target_sources(lab2_Lib PRIVATE "task1.c" "task2.c")
