#include <iostream>
#include <string>
#include "CancelApply.h"
using namespace std;

class CancelApply;

class CancelApplyUI
{
private:
    CancelApply *cancelApplyControl;

public:
    CancelApplyUI(CancelApply *cancelApplyControl);
    void cancelApply();
    cancelApply *showCancelApplyUI();
};