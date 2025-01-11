#include "CommandExecutor.h"
#include <string>
#include "../operations/OperationsList.h"
#include "../operations/unary/UnaryOperation.h"
#include "../operations/binary/BinaryCumulativeOperation.h"
#include "../operations/binary/BinaryNonCumulativeOperation.h"

using std::stoi;
using std::stod;

double CommandExecutor::tryExecute(const int argc, const char **command) {
    return tryExecute(Command(argc, command));
}

double CommandExecutor::tryExecute(const Command &command) {
    if (auto uop = dynamic_cast<UnaryOperation *>(command.operation); uop != nullptr) {
        return uop->calculate(command.values[0]);
    }
    if (auto bop = dynamic_cast<BinaryCumulativeOperation *>(command.operation); bop != nullptr) {
        double res = command.values[0];
        for (int i = 1; i < command.values.size(); i++) {
            res = bop->calculate(res, command.values[i]);
        }
        return res;
    }
    if (auto bnop = dynamic_cast<BinaryNonCumulativeOperation *>(command.operation); bnop != nullptr) {
        return bnop->calculate(command.values[0], command.values[1]);
    }
    return 0;
}
