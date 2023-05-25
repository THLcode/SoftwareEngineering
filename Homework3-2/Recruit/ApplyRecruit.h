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
    ApplyRecruitUI* applyRecruitUI;

public:
    ApplyRecruit();
    Recruit addApplication(string, string);
    ApplyRecruitUI* showApplyRecruitUI();
};

#endif
