//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_APPLYRECRUIT_H
#define HOMEWORK3_2_APPLYRECRUIT_H
#include <iostream>
#include "ApplyRecruitUI.h"
#include "../Recruit.h"
using namespace std;

class ApplyRecruitUI;

class ApplyRecruit
{
private:
    ApplyRecruitUI *applyRecruitUI;

public:
    ApplyRecruit();
    Recruit* addApplication(string, string); // 리턴 타입 매개변수 타입 지정 요망
    ApplyRecruitUI *showApplyRecruitUI();
};

#endif //HOMEWORK3_2_APPLYRECRUIT_H
