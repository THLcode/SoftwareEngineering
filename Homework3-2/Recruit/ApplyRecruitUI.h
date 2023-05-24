#include <iostream>
#include <string>
#include "ApplyRecruit.h"
using namespace std;

class ApplyRecruit;

class ApplyRecruitUI
{
private:
    ApplyRecruit *applyRecruitControl;

public:
    ApplyRecruitUI(ApplyRecruit *applyRecruitControl);
    void applyRecruit(); // 매개 변수 타입 변경 요망
};