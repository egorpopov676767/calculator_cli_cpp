#pragma once
#include <cmath>
#include "../BinaryNonCumulativeOperation.h"

class PowOperation final : public BinaryNonCumulativeOperation {
public:
    const char *getName() override {
        return "pow";
    }

    double calculate(const double a, const double b) override {
        return std::pow(a, b);
    }
};
