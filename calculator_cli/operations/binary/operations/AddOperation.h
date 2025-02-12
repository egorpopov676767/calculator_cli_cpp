#pragma once
#include "../BinaryCumulativeOperation.h"

class AddOperation final : public BinaryCumulativeOperation {
public:
    const char *getName() override {
        return "add";
    }

    double calculate(const double a, const double b) override {
        return a + b;
    }
};

