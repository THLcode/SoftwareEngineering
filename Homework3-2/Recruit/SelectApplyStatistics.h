#include <iostream>
#include <string>
#include <vector>
#include "SelectApplyStaticsUI.h"
#include "../UserCollection.h"
using namespace std;

class SelectApplyStaticsUI;

class SelectApplyStatics
{
private:
    SelectApplyStaticsUI *selectApplyStaticsUI;

public:
    SelectApplyStatics();
    void showApplyStatics(); // return type change
    SelectApplyStaticsUI *showSelectApplyStaticsUI();
};