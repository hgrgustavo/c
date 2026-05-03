cmake_minimum_required(VERSION 3.5)
project(oddAndEven LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

find_package(unity REQUIRED CONFIG)

add_executable(main src/main.c)
add_executable(unit_test test/test_main.c)

target_link_libraries(unit_test PRIVATE unity::unity)
