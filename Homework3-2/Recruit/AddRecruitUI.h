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
    void startInterface(AddRecruit *addRecruit);
    void createRecruit(AddRecruit *, string, int, string);
};

#endif