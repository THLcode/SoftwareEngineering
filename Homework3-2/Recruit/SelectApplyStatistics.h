//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_SELECTAPPLYSTATISTICS_H
#define HOMEWORK3_2_SELECTAPPLYSTATISTICS_H
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "SelectApplyStatisticsUI.h"
#include "../UserCollection.h"
#include "../Recruit.h"
using namespace std;

class SelectApplyStatisticsUI;

class SelectApplyStatistics
{
private:
    SelectApplyStatisticsUI* selectApplyStatisticsUI;

public:
    SelectApplyStatistics();
    vector<Recruit> showApplyStatistics(string);
    map<string, int> getApplyNumByJob(vector<Recruit>);
};

#endif