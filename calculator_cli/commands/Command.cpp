#include <iostream>
#include <stdexcept>
#include <string>
#include "Command.h"

#include <format>

#include "../operations/OperationsList.h"
#include "../operations/unary/UnaryOperation.h"
#include "../operations/binary/BinaryCumulativeOperation.h"
#include "../operations/binary/BinaryNonCumulativeOperation.h"


Command::Command(const int argc, const char **args) {
    operation = nullptr;
    for (const auto op: OperationsList::operations) {
        if (op->checkNamesMatch(args[0])) {
            operation = op;
        }
    }
    if (!operation) {
        throw std::invalid_argument(std::format("operation not found: {0}", args[0]));
    }

    const auto values_count = argc - 1;
    if (dynamic_cast<UnaryOperation *>(operation) != nullptr && values_count != 1) {
        throw std::invalid_argument("one argument needed");
    }
    if (dynamic_cast<BinaryCumulativeOperation *>(operation) != nullptr && values_count < 1) {
        throw std::invalid_argument("one or more arguments needed");
    }
    if (dynamic_cast<BinaryNonCumulativeOperation *>(operation) != nullptr && values_count != 2) {
        throw std::invalid_argument("two arguments needed");
    }

    values = std::vector<double>(values_count);
    for (int i = 0; i < values_count; i++) {
        try {
            values[i] = std::stod(args[i + 1]);
        } catch (std::invalid_argument &) {
            throw std::invalid_argument(std::format("invalid argument: {0}", args[i + 1]));
        }
    }
}
