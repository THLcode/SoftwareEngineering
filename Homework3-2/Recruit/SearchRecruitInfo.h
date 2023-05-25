//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_SEARCHRECRUITINFO_H
#define HOMEWORK3_2_SEARCHRECRUITINFO_H
#include <iostream>
#include "SearchRecruitInfoUI.h"
#include "../Recruit.h"
using namespace std;
class SearchRecruitInfoUI;

class SearchRecruitInfo
{
private:
    SearchRecruitInfoUI* searchRecruitInfoUI;

public:
    SearchRecruitInfo();
    vector<Recruit> showRecruitInfoList(string); // 리턴 타입, 파라미터 타입 변경 요망
    SearchRecruitInfoUI* showSearchRecruitInfoUI();
};

#endif //HOMEWORK3_2_SEARCHRECRUITINFO_H
