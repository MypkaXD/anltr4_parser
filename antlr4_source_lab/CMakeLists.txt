cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(samples_antlr)

set(CMAKE_CXX_STANDARD 17)

set(TARGET parser)

set(ANTLR_INCLUDE "C:/dev/Labs_AADS/antlr4_LAB/anltr4_parser/antlr4_runtime_source/build/bin/include/antlr4-runtime")

file(GLOB TARGET_SRC "*.c*")
file(GLOB TARGET_HD "*.h*")

add_executable(${TARGET} ${TARGET_SRC} ${TARGET_HD})

target_include_directories(${TARGET} PUBLIC ${ANTLR_INCLUDE})
target_link_libraries(${TARGET} antlr4-runtime)