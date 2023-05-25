#ifndef HOMEWORK3_2_SHOWAPPLYUI_H
#define HOMEWORK3_2_SHOWAPPLYUI_H
#include <iostream>
#include <string>
#include "ShowApply.h"
#include "../NormalUser.h"
#include "../Recruit.h"

using namespace std;
class ShowApply;
class NormalUser;

class ShowApplyUI
{
public:
    void startInterface(ShowApply* showApply);
    void selectApplyList(ShowApply* showApply);
    static bool compareByCompanyName(Recruit, Recruit);
};
#endif 
