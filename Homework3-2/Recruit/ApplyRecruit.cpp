#include "ApplyRecruit.h"
#include "../UserCollection.h"
#include "../RecruitInfoCollection.h"
#include "../ApplyInfoCollection.h"
#include "../Recruit/SearchRecruitInfo.h"

ApplyRecruit::ApplyRecruit()
{
    ApplyRecruitUI applyRecruitUI;

    applyRecruitUI.startInterface(this);
}

Recruit* ApplyRecruit::addApplication(string companyNumber, string currentUser)
{
    ApplyInfoCollection ac;
    RecruitInfoCollection rc;
    vector<Recruit*> recruitList = rc.getRecruitListByCompanyNumber(companyNumber);

    Recruit* applied = ac.addApplyInfo(recruitList[0], currentUser);
    return applied;
}

ApplyRecruitUI *ApplyRecruit::showApplyRecruitUI()
{
}
