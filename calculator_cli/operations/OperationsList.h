#pragma once
#include <vector>
#include "Operation.h"

class OperationsList {
public:
    static const std::vector<Operation *> operations;

    OperationsList() = delete;
};
