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
        commands/Command.cpp
        commands/Command.h
        operations/binary/BinaryNonCumulativeOperation.cpp
        operations/binary/BinaryNonCumulativeOperation.h
        operations/unary/UnaryOperation.cpp
        operations/unary/UnaryOperation.h
        operations/unary/operations/SqrtOperation.cpp
        operations/unary/operations/SqrtOperation.h
        operations/binary/operations/DivOperation.cpp
        operations/binary/operations/DivOperation.h
        operations/binary/operations/SubOperation.cpp
        operations/binary/operations/SubOperation.h
        operations/binary/operations/MulOperation.cpp
        operations/binary/operations/MulOperation.h
        operations/binary/operations/PowOperation.cpp
        operations/binary/operations/PowOperation.h
)