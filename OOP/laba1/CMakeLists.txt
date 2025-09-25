cmake_minimum_required(VERSION 3.14)

if(POLICY CMP0091)
  cmake_policy(SET CMP0091 NEW)
endif()

if(MSVC)
  set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

project(palindrome_checker)


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(palindrome_checker main.cpp is_palindrom.cpp)

add_executable(test_palindrom tests/test_palindrom.cpp is_palindrom.cpp)
target_link_libraries(test_palindrom gtest_main)

enable_testing()

add_test(NAME PalindromTest COMMAND test_palindrom)

