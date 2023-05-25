#include "ApplyRecruit.h"
#include "../UserCollection.h"
#include "../RecruitInfoCollection.h"
#include "../ApplyInfoCollection.h"
#include "../Recruit/SearchRecruitInfo.h"
#include "../RecruitInfoCollection.h"

// 채용 지원 2. applyRecruit()
ApplyRecruit::ApplyRecruit()
{
    ApplyRecruitUI applyRecruitUI;

    applyRecruitUI.startInterface(this);
}

// 채용 지원 2.1. addApplication()
Recruit ApplyRecruit::addApplication(string companyNumber, string currentUser)
{
    ApplyInfoCollection ac;
    RecruitInfoCollection rc;
    // 채용 지원 2.1.1. getRecruitListByCompanyNumber()
    vector<Recruit> recruitList = rc.getRecruitListByCompanyNumber(companyNumber);
    // 채용 지원 2.1.2. addApplyInfo()
    Recruit applied = ac.addApplyInfo(recruitList[0], currentUser);
    return applied;
}

ApplyRecruitUI *ApplyRecruit::showApplyRecruitUI()
{
}
