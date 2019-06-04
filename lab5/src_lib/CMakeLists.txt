
# Include sub-projects.

add_library(lab5_lib STATIC "")
target_include_directories(lab5_lib PUBLIC "../includes")
target_sources(lab5_lib PRIVATE "strlen.c" "find.c" "delete.c" "strcpy.c" "strcat.c" "insert.c")
