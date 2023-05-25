#include "SearchRecruitInfo.h"
#include "SearchRecruitInfoUI.h"
#include "../UserCollection.h"
#include "../RecruitInfoCollection.h"


SearchRecruitInfo::SearchRecruitInfo()
{
    SearchRecruitInfoUI searchRecruitInfoUI;

    searchRecruitInfoUI.startInterface(this);
}

vector<Recruit*> SearchRecruitInfo::showRecruitInfoList(string companyName){
    RecruitInfoCollection rc;
    vector<Recruit *> Rlist = rc.getRecruitListByCompany(companyName);

    return Rlist;
}

SearchRecruitInfoUI *SearchRecruitInfo::showSearchRecruitInfoUI()
{
}