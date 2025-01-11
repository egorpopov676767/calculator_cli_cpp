#include <iostream>
#include <sstream>
#include "commands/CommandExecutor.h"

using std::cout;
using std::endl;

constexpr int MAX_LINE_SIZE = 1024;

int main(const int argc, const char **argv) {
    if (argc > 1) {
        try {
            const auto result = CommandExecutor::tryExecute(argc - 1, &argv[1]);
            cout << result << endl << endl;
        } catch (const std::exception &e) {
            cout << "error: " << e.what() << endl << endl;
        }
    } else {
        while (true) {
            char line[MAX_LINE_SIZE];
            std::cin.getline(line, MAX_LINE_SIZE);
            auto args = std::vector<char *>();
            for (auto i = 0; line[i] != '\0'; i++) {
                if (line[i] == ' ') {
                    line[i] = '\0';
                }
                if ((i == 0 || line[i - 1] == '\0') && line[i] != '\0') {
                    args.push_back(&line[i]);
                }
            }
            if (args.empty()) {
                continue;
            }
            if (args[0] == "quit" || args[0] == "exit") {
                return 0;
            }
            try {
                const auto result = CommandExecutor::tryExecute(
                    static_cast<int>(args.size()), const_cast<const char **>(args.data()));
                cout << result << endl << endl;
            } catch (const std::exception &e) {
                cout << "error: " << e.what() << endl << endl;
            }
        }
    }
    return 0;
}
