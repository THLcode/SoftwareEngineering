#ifndef HOMEWORK3_2_CANCELAPPLY_H
#define HOMEWORK3_2_CANCELAPPLY_H
#include <iostream>
#include <string>
#include "CancelApplyUI.h"
#include "../UserCollection.h"
using namespace std;

class CancelApplyUI;

class CancelApply
{
public:
    CancelApply();
    tuple<string, string, string> cancelApply(string, string);
};

#endif