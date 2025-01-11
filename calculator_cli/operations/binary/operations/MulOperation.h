#pragma once
#include "../BinaryCumulativeOperation.h"

class MulOperation final : public BinaryCumulativeOperation {
public:
    const char *getName() override {
        return "mul";
    }

    double calculate(const double a, const double b) override {
        return a * b;
    }
};