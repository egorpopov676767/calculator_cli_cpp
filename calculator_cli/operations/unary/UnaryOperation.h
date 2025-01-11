#pragma once
#include "../Operation.h"


class UnaryOperation : public Operation {
public:
    virtual double calculate(double a) = 0;
};
