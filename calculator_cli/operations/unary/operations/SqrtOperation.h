#pragma once
#include <cmath>
#include "../UnaryOperation.h"

class SqrtOperation final : public UnaryOperation {
public:
    const char *getName() override {
        return "sqrt";
    }

    double calculate(const double a) override {
        return sqrt(a);
    }
};
