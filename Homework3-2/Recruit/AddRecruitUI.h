//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_ADDRECRUITUI_H
#define HOMEWORK3_2_ADDRECRUITUI_H
#include <iostream>
#include <string>
#include "AddRecruit.h"
#include "../CompanyUser.h"

using namespace std;
class AddRecruit;
class CompanyUser;

class AddRecruitUI
{
public:
    void startInterface(AddRecruit* addRecruit);
    void createRecruit(AddRecruit*, string, int, string);
};

#endif // HOMEWORK3_2_ADDRECRUITUI_H

// 지원정보 등록 클릭 -> UI통해서 정보 입력 받아서 -> control -> Recruit -> RecruitCollec