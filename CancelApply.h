#include <iostream>
#include <string>
#include "CancelApplyUI.h"
#include "../UserCollection.h"
using namespace std;

class CancelApplyUI;

class CancelApply
{
private:
    CancelApplyUI *cancelApplyUI;

public:
    CancelApply();
    void cancelApplyDetails(); // 리턴 타입, 매개 변수 타입 변경 요망
    CancelApplyUI *showCancelApplyUI();
};
