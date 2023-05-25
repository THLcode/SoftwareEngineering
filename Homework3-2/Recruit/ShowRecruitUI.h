//
// Created by 이태휘 on 2023/05/24.
//
#ifndef HOMEWORK3_2_SHOWRECRUITUI_H
#define HOMEWORK3_2_SHOWRECRUITUI_H
#include "../Recruit.h"
using namespace std;
class ShowRecruit;

class ShowRecruitUI
{
public:
    void startInterface(ShowRecruit* showRecruit, CompanyUser* companyUser);
    void getRecruitList(ShowRecruit*, string);
};

#endif // HOMEWORK3_2_SHOWRECRUITUI_H
