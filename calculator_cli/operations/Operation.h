#pragma once

class Operation {
public:
    virtual const char *getName() = 0;

    bool checkNamesMatch(const char *arg);

    virtual ~Operation() = default;
};
