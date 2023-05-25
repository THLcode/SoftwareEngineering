//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_SELECTAPPLYSTATISTICS_H
#define HOMEWORK3_2_SELECTAPPLYSTATISTICS_H
#include <iostream>
#include <string>
#include <vector>
#include "SelectApplyStatisticsUI.h"
#include "../UserCollection.h"
using namespace std;

class SelectApplyStaticsUI;

class SelectApplyStatics
{
private:
    SelectApplyStaticsUI* selectApplyStaticsUI;

public:
    SelectApplyStatics();
    void showApplyStatics(); // return type change
    SelectApplyStaticsUI* showSelectApplyStaticsUI();
};
#endif //HOMEWORK3_2_SELECTAPPLYSTATISTICS_H
