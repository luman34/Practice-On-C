

# Include sub-projects.
add_library (lab4_Task2_lib STATIC "")

target_include_directories (lab4_Task2_lib PUBLIC "../includes")

target_sources (lab4_Task2_lib PRIVATE "writeArray.c" "readArray.c" "sort.c" "sortStackArray.c")