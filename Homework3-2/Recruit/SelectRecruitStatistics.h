#include <iostream>
#include <string>
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
    void showRecruitStatistics(); // 리턴 타입 변경
    SelectRecruitStatisticsUI *showSelectRecruitStatisticsUI();
};