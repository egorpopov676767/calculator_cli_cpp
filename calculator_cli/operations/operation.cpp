#include "operation.h"
#include <cstring>

bool Operation::checkNamesMatch(char *arg) {
    auto name = getName();
    return strcmp(name, arg) == 0 || arg[0] == '-' && strcmp(name, &arg[1]) == 0;
}
