cmake_minimum_required(VERSION 3.14)
project(my_project)

add_compile_options(-Wall -Wextra -pedantic -Werror)

FILE(GLOB TEST_SRCS src/*.cpp)
FILE(GLOB TEST_HDRS src/*.h)

add_executable(
    test
    ${TEST_SRCS}
    ${TEST_HDRS}
)