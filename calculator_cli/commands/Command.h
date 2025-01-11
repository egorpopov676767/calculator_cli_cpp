#pragma once
#include <vector>

#include "../operations/Operation.h"

class Command {
public:
    Operation *operation;

    std::vector<double> values;

    explicit Command(const char *command);

    explicit Command(int argc, const char **args);
};
