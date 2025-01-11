
#include "OperationsList.h"
#include "binary/operations/AddOperation.h"
#include "binary/operations/DivOperation.h"
#include "binary/operations/MulOperation.h"
#include "binary/operations/PowOperation.h"
#include "binary/operations/SubOperation.h"
#include "unary/operations/SqrtOperation.h"

const std::vector<Operation *> OperationsList::operations {
    new AddOperation(),
    new SubOperation(),
    new MulOperation(),
    new DivOperation(),
    new PowOperation(),
    new SqrtOperation(),
};
