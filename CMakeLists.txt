cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(libc-version)

add_executable(libc-version libc-version.c)
include_directories(/home/pi/embed2/tlpi-dist/lib)
target_link_libraries(libc-version /home/pi/embed2/tlpi-dist/libtlpi.a)
