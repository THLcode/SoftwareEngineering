#include <iostream>
#include <string>
#include "SelectApplyStatics.h"
using namespace std;

class SelectApplyStatics;

class SelectApplyStaticsUI
{
private:
    SelectApplyStatics *selectApplyStaticsControl;

public:
    SelectApplyStaticsUI(SelectApplyStatics *selectApplyStaticsControl);
    void selectApplyStatics();
};