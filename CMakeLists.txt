cmake_minimum_required(VERSION 3.24)
project(lang_compiler)

set(CMAKE_CXX_STANDARD 20)

find_package(Catch2 3 REQUIRED)

add_executable(lang_compiler src/main.cpp)
add_executable(tests test/tests.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
