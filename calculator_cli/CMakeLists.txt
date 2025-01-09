cmake_minimum_required(VERSION 3.30)
project(calculator_cli)

set(CMAKE_CXX_STANDARD 23)

add_executable(calculator_cli main.cpp
        commands/CommandExecutor.h
        commands/CommandExecutor.cpp
        operations/operation.h
        operations/operation.cpp
)