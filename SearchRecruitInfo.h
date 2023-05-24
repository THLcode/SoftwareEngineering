#include <iostream>
#include "SearchRecruitInfoUI.h"
#include "../Recruit.h"
using namespace std;
class SearchRecruitInfoUI;

class SearchRecruitInfo
{
private:
    SearchRecruitInfoUI *searchRecruitInfoUI;

public:
    SearchRecruitInfo();
    void showRecruitment(); // 리턴 타입, 파라미터 타입 변경 요망
    SearchRecruitInfoUI *showSearchRecruitInfoUI();
};
