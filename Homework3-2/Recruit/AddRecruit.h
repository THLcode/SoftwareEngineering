#ifndef HOMEWORK3_2_ADDRECRUIT_H
#define HOMEWORK3_2_ADDRECRUIT_H
#include "AddRecruitUI.h"
#include "../CompanyUser.h"
#include <string>
using namespace std;
class AddRecruitUI;

class AddRecruit
{
private:
    AddRecruitUI *addRecruitUI;

public:
    AddRecruit();
    void addRecruit(); // 매개변수 채워야합니다
    AddRecruitUI *showAddRecruitUI();
};

#endif //HOMEWORK3_2_ADDRECRUIT_H