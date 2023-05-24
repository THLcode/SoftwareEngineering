//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_SELECTAPPLYDETAILS_H
#define HOMEWORK3_2_SELECTAPPLYDETAILS_H
#include <iostream>
#include <string>
#include "SelectApplyDetailsUI.h"
#include "../UserCollection.h"
using namespace std;

class SelectApplyDetailsUI;

class SelectApplyDetails
{
private:
    SelectApplyDetailsUI *selectApplyDetailsUI;

public:
    SelectApplyDetails();
    void selectApplyDetailsList(); // 리턴 타입
    SelectApplyDetailsUI *showSelectApplyDetailsUI();
};

#endif //HOMEWORK3_2_SELECTAPPLYDETAILS_H
