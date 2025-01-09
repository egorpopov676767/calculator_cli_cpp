#pragma once
#include "../BinaryCumulativeOperation.h"

class AddOperation:public BinaryCumulativeOperation {
public:
    char* getName() override{return "add";}
    char* getDescription() override{return "add";}

    double calculate(double a, double b) override {
        return a + b;
    }
};

