#pragma once
//
// Created by ������ on 2023/05/24.
//

#ifndef HOMEWORK3_2_ADDRECRUITUI_H
#define HOMEWORK3_2_ADDRECRUITUI_H
#include <iostream>
#include <string>
#include "AddRecruit.h"
#include "CompanyUser.h"

using namespace std;
class AddRecruit;
class CompanyUser;

class AddRecruitUI
{
public:
    void startInterface(AddRecruit* addRecruit, CompanyUser* companyUser);
    void createRecruit(AddRecruit*, string, int, string, CompanyUser*);
};

#endif // HOMEWORK3_2_ADDRECRUITUI_H

// �������� ��� Ŭ�� -> UI���ؼ� ���� �Է� �޾Ƽ� -> control -> Recruit -> RecruitCollec