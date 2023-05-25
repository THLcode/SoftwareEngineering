//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_SELECTAPPLYSTATISTICSUI_H
#define HOMEWORK3_2_SELECTAPPLYSTATISTICSUI_H
#include <iostream>
#include <string>
#include "SelectApplyStatistics.h"
using namespace std;

class SelectApplyStatics;

class SelectApplyStaticsUI
{
private:
    SelectApplyStatics *selectApplyStaticsControl;

public:
    SelectApplyStaticsUI();
    void startInterface(SelectApplyStatics *selectApplyStaticsControl);
    void selectApplyStatics();
};
#endif //HOMEWORK3_2_SELECTAPPLYSTATISTICSUI_H
