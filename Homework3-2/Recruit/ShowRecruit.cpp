#include "ShowRecruit.h"
#include "../RecruitInfoCollection.h"

ShowRecruit::ShowRecruit(ShowRecruit *showRecruit, CompanyUser *companyUser)
{
    ShowRecruitUI showRecruitUI;
    showRecruitUI.startInterface(showRecruit, companyUser);
}

vector<Recruit *> ShowRecruit::showRecruitList(string companyNumber)
{
    RecruitInfoCollection rc;
    vector<Recruit *> Rlist = rc.getRecruitList(companyNumber);

    return Rlist;
}
