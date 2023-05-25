#ifndef HOMEWORK3_2_SHOWRECRUIT_H
#define HOMEWORK3_2_SHOWRECRUIT_H
#include <iostream>
#include <string>
#include "ShowRecruitUI.h"
#include "..//RecruitInfoCollection.h"
using namespace std;

class ShowRecruitUI;

class ShowRecruit
{
private:
    ShowRecruitUI* showRecruitUI;

public:
    ShowRecruit();
    vector<Recruit> showRecruitList(string);
};

#endif