#include "AddRecruit.h"
#include "../RecruitInfoCollection.h"
#include "../Recruit.h"
#include "../UserCollection.h"
using namespace std;
AddRecruit::AddRecruit()
{
    AddRecruitUI addRecruitUI;
    addRecruitUI.startInterface(this);
}

Recruit AddRecruit::addRecruit(string job, int peopleNum, string dueDate, string currendId)
{
    Recruit re;
    UserCollection uc;
    CompanyUser* u = uc.getUser(currendId);

    re.setCompanyId(currendId);
    re.setJob(job);
    re.setPeopleNum(peopleNum);
    re.setDueDate(dueDate);
    re.setCompanyNumber(u->getCompanyNumber());
    re.setCompanyName(u->getCompanyName());

    RecruitInfoCollection rc;
    rc.pushRecruit(re);
    return re;
}
