//
// Created by 이태휘 on 2023/05/24.
//

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
    //    CancelApplyUI(CancelApply *cancelApplyControl);
    void cancelApply();
    CancelApply* showCancelApplyUI();
    void startInterface(CancelApply*);
};
#endif //HOMEWORK3_2_CANCELAPPLYUI_H
