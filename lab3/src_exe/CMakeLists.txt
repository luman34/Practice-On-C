# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)


# Include sub-projects.
add_executable (lab3_for "")

target_sources (lab3_for PRIVATE "main.c")

target_link_libraries(lab3_for lab3_lib_for)


add_executable (lab3_while "")

target_sources (lab3_while PRIVATE "main.c")

target_link_libraries(lab3_while lab3_lib_while)


add_executable (lab3_dowhile "")

target_sources (lab3_dowhile PRIVATE "main.c")

target_link_libraries(lab3_dowhile lab3_lib_dowhile)