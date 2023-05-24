#include <iostream>
#include <string>
#include "ShowRecruitUI.h"
#include "..//RecruitInfoCollection.h"
using namespace std;

class ShowRecruitUI;

class ShowRecruit
{
private:
    ShowRecruitUI *showRecruitUI;

public:
    ShowRecruit();
    void showRecruit(); // return type 변경 요망
    ShowRecruitUI *showShowRecruitUI();
};
