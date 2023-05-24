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