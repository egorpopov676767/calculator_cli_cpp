#pragma once
#include "../operation.h"

class BinaryCumulativeOperation:public Operation {
public:
    virtual double calculate(double a, double b) = 0;
};




