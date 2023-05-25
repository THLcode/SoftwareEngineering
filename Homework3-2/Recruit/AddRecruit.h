#ifndef HOMEWORK3_2_ADDRECRUIT_H
#define HOMEWORK3_2_ADDRECRUIT_H
#include "AddRecruitUI.h"
#include "../CompanyUser.h"
#include "../UserCollection.h"
#include "../Recruit.h"
#include <string>
using namespace std;

class AddRecruit
{
private:

public:
    AddRecruit();
    Recruit addRecruit(string, int, string, string);
};

#endif 