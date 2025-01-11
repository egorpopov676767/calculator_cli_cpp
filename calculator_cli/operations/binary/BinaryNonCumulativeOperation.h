#pragma once
#include "../Operation.h"

class BinaryNonCumulativeOperation:public Operation{
public:
    virtual double calculate(double a, double b) = 0;
};



