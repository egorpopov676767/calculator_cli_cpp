#include "CommandExecutor.h"
#include <string>
#include "../operations/OperationsList.h"

using std::stoi;
using std::stod;

double CommandExecutor::tryExecute(int argc, char **command) {
    if (command[0] == "add") {
        double sum = 0;
        for (int i = 1; i < argc; i++) {
            sum += stod(command[i]);
        }
        return sum;
    }
    return 0;
}
