#ifndef HOMEWORK3_2_SHOWRECRUITUI_H
#define HOMEWORK3_2_SHOWRECRUITUI_H
#include "../Recruit.h"
using namespace std;
class ShowRecruit;

class ShowRecruitUI
{
public:
    void startInterface(ShowRecruit* showRecruit);
    void getRecruitList(ShowRecruit*);
};

#endif