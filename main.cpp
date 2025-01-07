#include <iostream>
#include <vector>

#include "commands/CommandExecutor.h"

using std::cout;
using std::endl;

int main(const int argc, char **argv) {
    if (argc > 1) {
        const auto result = CommandExecutor::tryExecute(argc-1, &argv[1]);
        cout << result << endl;
    }
    return 0;
}
