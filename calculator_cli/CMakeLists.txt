cmake_minimum_required(VERSION 3.30)
project(calculator_cli)

set(CMAKE_CXX_STANDARD 23)

add_executable(calculator_cli main.cpp
        commands/CommandExecutor.h
        commands/CommandExecutor.cpp
        operations/operation.h
        operations/operation.cpp
        operations/binary/BinaryCumulativeOperation.cpp
        operations/binary/BinaryCumulativeOperation.h
        operations/binary/operations/AddOperation.cpp
        operations/binary/operations/AddOperation.h
        operations/OperationsList.cpp
        operations/OperationsList.h
)