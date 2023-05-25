//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_CANCELAPPLY_H
#define HOMEWORK3_2_CANCELAPPLY_H
#include <iostream>
#include <string>
#include "CancelApplyUI.h"
#include "../UserCollection.h"
using namespace std;

class CancelApplyUI;

class CancelApply
{
private:
    //    CancelApplyUI *cancelApplyUI;

public:
    CancelApply();
    void cancelApplyDetails(); // 리턴 타입, 매개 변수 타입 변경 요망
    CancelApplyUI* showCancelApplyUI();
};

#endif //HOMEWORK3_2_CANCELAPPLY_H
