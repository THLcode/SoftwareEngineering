//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_ADDRECRUITUI_H
#define HOMEWORK3_2_ADDRECRUITUI_H
#include <iostream>
#include <string>
using namespace std;
class AddRecruit;

class AddRecruitUI
{
private:
    AddRecruit *addRecruitControl;

public:
    AddRecruitUI(AddRecruit *addRecruitControl);
    void addRecruit(/* params add plz */);
};

#endif //HOMEWORK3_2_ADDRECRUITUI_H
