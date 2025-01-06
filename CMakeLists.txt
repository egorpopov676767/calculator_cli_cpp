cmake_minimum_required(VERSION 3.28)
project(calculator_cli_cpp)

set(CMAKE_CXX_STANDARD 23)

add_executable(calculator_cli_cpp main.cpp
        commands/CommandExecutor.h
        commands/CommandExecutor.cpp
)
