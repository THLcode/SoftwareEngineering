#include "ApplyRecruit.h"
#include "../UserCollection.h"
#include "../RecruitInfoCollection.h"
#include "../ApplyInfoCollection.h"
#include "../Recruit/SearchRecruitInfo.h"
#include "../RecruitInfoCollection.h"
ApplyRecruit::ApplyRecruit()
{
    ApplyRecruitUI applyRecruitUI;

    applyRecruitUI.startInterface(this);
}

Recruit ApplyRecruit::addApplication(string companyNumber, string currentUser)
{
    extern RecruitInfoCollection rc;
    ApplyInfoCollection ac;
    SearchRecruitInfo searchRecruitInfo;
    vector<Recruit> recruitList = searchRecruitInfo.showRecruitInfoList(companyNumber);
    //vector<Recruit> recruitList = rc.getRecruitListByCompany(companyName)

    Recruit applied = ac.addApplyInfo(recruitList[0], currentUser);
    return applied;
}

ApplyRecruitUI* ApplyRecruit::showApplyRecruitUI()
{
}
