#include <iostream>
#include <string>
#include "SearchRecruitInfo.h"
using namespace std;

class SearchRecruitInfo;

class SearchRecruitInfoUI
{
private:
    SearchRecruitInfo *searchRecruitInfoControl;

public:
    SearchRecruitInfoUI(SearchRecruitInfo *SearchRecruitInfoControl);
    void enterCompanyName(string companyName);
};