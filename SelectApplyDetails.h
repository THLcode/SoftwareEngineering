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
    void showSelectApplyDetails(); // 리턴 타입
    SelectApplyDetailsUI *showSelectApplyDetailsUI();
};
