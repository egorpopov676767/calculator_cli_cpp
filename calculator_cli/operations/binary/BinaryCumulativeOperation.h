#pragma once
#include "../Operation.h"

class BinaryCumulativeOperation:public Operation {
public:
    virtual double calculate(double a, double b) = 0;
};




