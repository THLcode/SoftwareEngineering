//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_SEARCHRECRUITINFOUI_H
#define HOMEWORK3_2_SEARCHRECRUITINFOUI_H
#include <iostream>
#include <string>
#include "SearchRecruitInfo.h"
#include "../Recruit.h"
using namespace std;

class SearchRecruitInfo;

class SearchRecruitInfoUI
{
private:
    SearchRecruitInfo* searchRecruitInfoControl;

public:
    void enterCompanyName(SearchRecruitInfo* searchRecruitInfoControl, string companyName);
    void startInterface(SearchRecruitInfo* searchRecruitInfoControl);
    void printOutput(vector<Recruit> reList);
    static bool compareByCompanyName(Recruit, Recruit);
};
#endif //HOMEWORK3_2_SEARCHRECRUITINFOUI_H
