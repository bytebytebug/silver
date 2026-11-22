
cmake_minimum_required(VERSION 3.20)

project(Silver VERSION 1.0.0 LANGUAGES CXX)



set(CMAKE_BUILD_RPATH "$ORIGIN")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(argparser SHARED
    src/argparser/bag.cpp
)

target_include_directories(argparser PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)



add_executable(silver 
    src/main.cpp
)

target_link_libraries(silver 
    PRIVATE
    argparser
)

target_compile_options(argparser PRIVATE -Wall -Wextra -Wpedantic)
target_compile_options(silver PRIVATE -Wall -Wextra -Wpedantic)

