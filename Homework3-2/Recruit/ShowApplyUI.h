//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_SHOWAPPLYUI_H
#define HOMEWORK3_2_SHOWAPPLYUI_H
#include <iostream>
#include <string>
#include "ShowApply.h"
#include "../NormalUser.h"

using namespace std;
class ShowApply;
class NormalUser;

class ShowApplyUI
{
public:
    void startInterface(ShowApply *showApply, NormalUser *normalUser);
    void selectApplyList(ShowApply *, NormalUser *);
};
#endif // HOMEWORK3_2_SHOWAPPLYUI_H
