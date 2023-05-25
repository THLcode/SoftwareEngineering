//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_SELECTRECRUITSTATISTICSUI_H
#define HOMEWORK3_2_SELECTRECRUITSTATISTICSUI_H
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "SelectRecruitStatistics.h"

using namespace std;
class SelectRecruitStatistics;

class SelectRecruitStatisticsUI
{
private:
    SelectRecruitStatistics* selectRecruitStatisticsControl;

public:
    SelectRecruitStatisticsUI();
    void startInterface(SelectRecruitStatistics* selectRecruitStatisticsControl);
    void selectRecruitStatistics(SelectRecruitStatistics*, string);
};
#endif //HOMEWORK3_2_SELECTRECRUITSTATISTICSUI_H
