#pragma once
#ifndef HOMEWORK3_2_ADDRECRUIT_H
#define HOMEWORK3_2_ADDRECRUIT_H
#include "AddRecruitUI.h"
#include "CompanyUser.h"
#include <string>
using namespace std;
class AddRecruitUI;

class AddRecruit
{
private:
    AddRecruitUI* addRecruitUI;

public:
    AddRecruit(AddRecruit*, CompanyUser*);
    void addRecruit(string, int, string, CompanyUser*); // �Ű����� ä�����մϴ�
    // AddRecruitUI *showAddRecruitUI();
};

#endif // HOMEWORK3_2_ADDRECRUIT_H