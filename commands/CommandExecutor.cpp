
#include "CommandExecutor.h"

#include <string>

using std::stoi;

int CommandExecutor::tryExecute(char **command) {
    return stoi(command[1]);
}



