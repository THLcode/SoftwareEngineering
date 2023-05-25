//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_SELECTRECRUITSTATISTICS_H
#define HOMEWORK3_2_SELECTRECRUITSTATISTICS_H
#include <iostream>
#include <string>
#include <map>
#include "SelectRecruitStatisticsUI.h"
#include "../UserCollection.h"
using namespace std;

class SelectRecruitStatisticsUI;

class SelectRecruitStatistics
{
private:
    SelectRecruitStatisticsUI *selectRecruitStatisticsUI;

public:
    SelectRecruitStatistics();
    vector<Recruit *> showRecruitStatistics(string);
    map<string, int> getRecruitNumByJob(vector<Recruit *>);
};
#endif //HOMEWORK3_2_SELECTRECRUITSTATISTICS_H
