//
// Created by ������ on 2023/05/24.
//

#ifndef HOMEWORK3_2_APPLYRECRUITUI_H
#define HOMEWORK3_2_APPLYRECRUITUI_H
#include <iostream>
#include <string>
#include "ApplyRecruit.h"
using namespace std;

class ApplyRecruit;

class ApplyRecruitUI
{
private:
    ApplyRecruit* applyRecruitControl;

public:
    ApplyRecruitUI();
    //    ApplyRecruitUI(ApplyRecruit *applyRecruitControl);
    void startInterface(ApplyRecruit* applyRecruit);
    void applyRecruit(); // �Ű� ���� Ÿ�� ���� ���
//    void printOutput(Recruit* recruit);
};
#endif //HOMEWORK3_2_APPLYRECRUITUI_H