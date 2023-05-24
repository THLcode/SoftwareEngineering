#include "AddRecruit.h"
#include "../RecruitInfoCollection.h"
#include "../Recruit.h"

AddRecruit::AddRecruit(AddRecruit *addRecruit, CompanyUser *companyUser)
{
    AddRecruitUI addRecruitUI;
    addRecruitUI.startInterface(addRecruit, companyUser);
}

void AddRecruit::addRecruit(string job, int peopleNum, string dueDate, string companyNumber)
{
    Recruit *re = new Recruit();
    re->setJob(job);
    re->setPeopleNum(peopleNum);
    re->setDueDate(dueDate);
    re->setCompanyNumber(companyNumber);

    RecruitInfoCollection rc;
    rc.pushRecruit(re);
}

// AddRecruitUI *AddRecruit::showAddRecruitUI()
// {
// }

// control -> Recruit -> RecruitCollection