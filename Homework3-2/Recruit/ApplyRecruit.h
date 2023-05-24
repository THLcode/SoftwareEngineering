#include <iostream>
#include "ApplyRecruitUI.h"
#include "../Recruit.h"
using namespace std;

class ApplyRecruitUI;

class ApplyRecruit
{
private:
    ApplyRecruitUI *applyRecruitUI;

public:
    ApplyForRecruitment();
    void addApplication(); // 리턴 타입 매개변수 타입 지정 요망
    ApplyRecruitUI *showApplyRecruitUI();
};
