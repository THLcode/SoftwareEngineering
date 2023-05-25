#ifndef HOMEWORK3_2_CANCELAPPLYUI_H
#define HOMEWORK3_2_CANCELAPPLYUI_H
#include <iostream>
#include <string>
#include "CancelApply.h"
using namespace std;

class CancelApply;

class CancelApplyUI
{
private:
    CancelApply* cancelApplyControl;

public:
    void startInterface(CancelApply*);
    void printOutput(tuple<string, string, string>);
    void cancelApply(CancelApply*);
};
#endif