//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_SHOWAPPLY_H
#define HOMEWORK3_2_SHOWAPPLY_H
#include <iostream>
#include <string>
#include "ShowApplyUI.h"
#include "../UserCollection.h"
#include "../NormalUser.h"
using namespace std;

class ShowApplyUI;
class NormalUser;

class ShowApply
{
private:
    ShowApplyUI *showApplyUI;

public:
    ShowApply();
    void showApplyList(NormalUser *); // 리턴 타입
};

#endif // HOMEWORK3_2_SHOWAPPLY_H
