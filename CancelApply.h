
#ifndef HOMEWORK3_2_CANCELAPPLY_H
#define HOMEWORK3_2_CANCELAPPLY_H
#include <iostream>
#include <string>
#include "CancelApplyUI.h"
#include "UserCollection.h"
using namespace std;

class CancelApplyUI;

class CancelApply
{
private:
    //    CancelApplyUI *cancelApplyUI;

public:
    CancelApply();
    void cancelApplyDetails(); // ���� Ÿ��, �Ű� ���� Ÿ�� ���� ���
    CancelApplyUI* showCancelApplyUI();
};

#endif //HOMEWORK3_2_CANCELAPPLY_H