//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_SELECTAPPLYDETAILSUI_H
#define HOMEWORK3_2_SELECTAPPLYDETAILSUI_H
#include <iostream>
#include <string>
#include "SelectApplyDetails.h"

using namespace std;
class SelectApplyDetails;

class SelectApplyDetailsUI
{
private:
    SelectApplyDetails *selectApplyDetailsControl;

public:
    SelectApplyDetailsUI(SelectApplyDetails *selectApplyDetailsControl);
    void selectApplyDetailsList();
};
#endif //HOMEWORK3_2_SELECTAPPLYDETAILSUI_H
