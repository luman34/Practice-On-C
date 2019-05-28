# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("lab3")

# Include sub-projects.
add_subdirectory ("src_lib_for")
add_subdirectory ("src_lib_while")
add_subdirectory ("src_lib_dowhile")
add_subdirectory ("src_exe")
