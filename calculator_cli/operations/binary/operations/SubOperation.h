#pragma once
#include "../BinaryCumulativeOperation.h"

class SubOperation final : public BinaryCumulativeOperation {
public:
    const char *getName() override {
        return "sub";
    }

    double calculate(const double a, const double b) override {
        return a - b;
    }
};