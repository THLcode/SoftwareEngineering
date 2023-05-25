//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_SELECTAPPLYSTATISTICSUI_H
#define HOMEWORK3_2_SELECTAPPLYSTATISTICSUI_H
#include <iostream>
#include <string>
#include "SelectApplyStatistics.h"
using namespace std;

class SelectApplyStatistics;

class SelectApplyStatisticsUI
{
private:
    SelectApplyStatistics *selectApplyStatisticsControl;

public:
    SelectApplyStatisticsUI();
    void startInterface(SelectApplyStatistics *selectApplyStatisticsControl);
    void selectApplyStatistics(SelectApplyStatistics *, string);
    void printOutput(map<string, int>);
};
#endif //HOMEWORK3_2_SELECTAPPLYSTATISTICSUI_H
