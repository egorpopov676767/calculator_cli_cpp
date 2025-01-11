#include "Operation.h"
#include <cstring>

bool Operation::checkNamesMatch(const char *arg) {
    const auto name = getName();
    return strcmp(name, arg) == 0 || arg[0] == '-' && strcmp(name, &arg[1]) == 0;
}
