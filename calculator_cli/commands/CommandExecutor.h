#pragma once
#include "Command.h"

class CommandExecutor {
public:
    static double tryExecute(int argc, const char **command);

    static double tryExecute(const Command &command);

    CommandExecutor() = delete;
};
