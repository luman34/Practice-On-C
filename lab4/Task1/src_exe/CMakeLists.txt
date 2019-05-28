

# Include sub-projects.
add_executable (lab4_Task1 "main.c")

target_link_libraries (lab4_Task1 PRIVATE lab4_Task1_lib)