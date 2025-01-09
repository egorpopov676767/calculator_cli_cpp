#pragma once

class Operation {

public:

    virtual char* getName()=0;
    virtual char* getDescription()=0;
    bool checkNamesMatch(char* arg);

    virtual ~Operation() = default;

};