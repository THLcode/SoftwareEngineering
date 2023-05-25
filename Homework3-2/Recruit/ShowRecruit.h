//
// Created by 이태휘 on 2023/05/24.
//

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
    ShowRecruitUI *showRecruitUI;

public:
    ShowRecruit(ShowRecruit *showRecruit, CompanyUser *companyUser);
    vector<Recruit *> showRecruitList(string); // return type 변경 요망
};

#endif // HOMEWORK3_2_SHOWRECRUIT_H
