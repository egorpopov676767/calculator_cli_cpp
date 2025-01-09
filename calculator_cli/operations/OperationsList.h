#pragma once
#include "operation.h"
#include "binary/operations/AddOperation.h"

class OperationsList {
public:
    static Operation* operations={&AddOperation()};

};




