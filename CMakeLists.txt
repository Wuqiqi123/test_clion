cmake_minimum_required (VERSION 3.16)
project (test_clion)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)


file(GLOB_RECURSE SOURCE_TEST_CLION CONFIGURE_DEPENDS "src/*.cpp")
add_library(test_clion SHARED ${SOURCE_TEST_CLION})
target_include_directories(test_clion PUBLIC include)

add_executable(main main.cpp)

target_link_libraries(main PUBLIC test_clion)
