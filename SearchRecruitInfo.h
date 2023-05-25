#ifndef HOMEWORK3_2_SEARCHRECRUITINFO_H
#define HOMEWORK3_2_SEARCHRECRUITINFO_H
#include <iostream>
#include <vector>
#include "SearchRecruitInfoUI.h"
#include "Recruit.h"
using namespace std;
class SearchRecruitInfoUI;

class SearchRecruitInfo
{
private:
    SearchRecruitInfoUI* searchRecruitInfoUI;

public:
    SearchRecruitInfo();
    vector<Recruit*> showRecruitInfoList(string); // ���� Ÿ��, �Ķ���� Ÿ�� ���� ���
    SearchRecruitInfoUI* showSearchRecruitInfoUI();
};

#endif //HOMEWORK3_2_SEARCHRECRUITINFO_H