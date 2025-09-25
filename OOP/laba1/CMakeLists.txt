cmake_minimum_required(VERSION 3.14)

# Установим политику CMP0091 для управления MSVC runtime library
if(POLICY CMP0091)
  cmake_policy(SET CMP0091 NEW)
endif()

# Установим переменную для статической линковки runtime library
if(MSVC)
  set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

project(palindrome_checker)

# Автоматическая загрузка GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

# Основная программа
add_executable(palindrome_checker main.cpp is_palindrom.cpp)

# Тесты
add_executable(test_palindrom tests/test_palindrom.cpp is_palindrom.cpp)
target_link_libraries(test_palindrom gtest_main)

enable_testing()

add_test(NAME PalindromTest COMMAND test_palindrom)
