#ifndef HOMEWORK3_2_APPLYRECRUITUI_H
#define HOMEWORK3_2_APPLYRECRUITUI_H
#include <iostream>
#include <string>
#include "ApplyRecruit.h"
#include "../Recruit.h"
using namespace std;

class ApplyRecruit;

class ApplyRecruitUI
{
private:
    ApplyRecruit* applyRecruitControl;

public:
    void startInterface(ApplyRecruit* applyRecruit);
    void printOutput(Recruit);
};
#endif
