

# Include sub-projects.
add_library (lab4_Task1_lib STATIC "")

target_include_directories (lab4_Task1_lib PUBLIC "../includes")

target_sources (lab4_Task1_lib PRIVATE "task1.c")