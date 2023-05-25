#include "ApplyRecruit.h"
#include "../UserCollection.h"
#include "../RecruitInfoCollection.h"
#include "../ApplyInfoCollection.h"

ApplyRecruit::ApplyRecruit()
{
    ApplyRecruitUI applyRecruitUI;

    applyRecruitUI.startInterface(this);
}

void ApplyRecruit::addApplication(string companyNumber)
{
    ApplyInfoCollection ac;
    ac.addApplyInfo(companyNumber);
}

ApplyRecruitUI *ApplyRecruit::showApplyRecruitUI()
{
}
