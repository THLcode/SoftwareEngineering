#include "ApplyRecruit.h"
#include "UserCollection.h"
#include "RecruitInfoCollection.h"
#include "ApplyInfoCollection.h"
#include "SearchRecruitInfo.h"

ApplyRecruit::ApplyRecruit()
{
    ApplyRecruitUI applyRecruitUI;

    applyRecruitUI.startInterface(this);
}

Recruit* ApplyRecruit::addApplication(string companyNumber, string currentUser)
{
    ApplyInfoCollection ac;
    SearchRecruitInfo searchRecruitInfo;
    vector<Recruit*> recruitList = searchRecruitInfo.showRecruitInfoList(companyNumber);

    Recruit* applied = ac.addApplyInfo(recruitList[0], currentUser);
    return applied;
}
/*
ApplyRecruitUI* ApplyRecruit::showApplyRecruitUI()
{
}
*/