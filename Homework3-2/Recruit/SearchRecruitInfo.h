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
    vector<Recruit> showRecruitInfoList(string);
    SearchRecruitInfoUI* showSearchRecruitInfoUI();
};

#endif
