#pragma once
#include "../BinaryCumulativeOperation.h"

class DivOperation final : public BinaryCumulativeOperation {
public:
    const char *getName() override {
        return "div";
    }

    double calculate(const double a, const double b) override {
        return a / b;
    }
};





