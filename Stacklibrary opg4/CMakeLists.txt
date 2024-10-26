# CMake minimum required version
cmake_minimum_required(VERSION 3.10)

# Projektets navn
project(StackLibrary C)  # Dette angiver også standardsproget C

# Tilføj header-filer til projektet
include_directories(include)

# Opret en statisk biblioteksfil
add_library(stack STATIC src/stack.c)

# Tilføj et eksekverbart mål til testen (queue.c)
add_executable(test_queue test/queue.c)

# Link biblioteket til testen
target_link_libraries(test_queue stack)