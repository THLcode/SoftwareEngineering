#ifndef HOMEWORK3_2_SELECTRECRUITSTATISTICS_H
#define HOMEWORK3_2_SELECTRECRUITSTATISTICS_H
#include <iostream>
#include <string>
#include <map>
#include "SelectRecruitStatisticsUI.h"
#include "../UserCollection.h"
#include "../Recruit.h"
#include <vector>
using namespace std;

class SelectRecruitStatistics
{
public:
    SelectRecruitStatistics();
    vector<Recruit> showRecruitStatistics(string);
    map<string, int> getRecruitNumByJob(vector<Recruit>);
};
#endif