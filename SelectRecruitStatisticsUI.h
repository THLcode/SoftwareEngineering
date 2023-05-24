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
    SelectRecruitStatistics *selectRecruitStatisticsControl;

public:
    SelectRecruitStatisticsUI(SelectRecruitStatistics *selectRecruitStatisticsControl);
    void selectRecruitStatistics();
};