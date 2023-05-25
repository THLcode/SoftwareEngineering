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

// 채용 정보 등록 2.1 addRecruit()
Recruit AddRecruit::addRecruit(string job, int peopleNum, string dueDate, string currendId)
{
    Recruit re;
    // 채용 정보 등록 2.1.1 Recruit()
    UserCollection uc;
    CompanyUser *u = uc.getUser(currendId);

    re.setCompanyId(currendId);
    re.setJob(job);
    re.setPeopleNum(peopleNum);
    re.setDueDate(dueDate);
    re.setCompanyNumber(u->getCompanyNumber());
    re.setCompanyName(u->getCompanyName());

    RecruitInfoCollection rc;
    rc.pushRecruit(re);
    // 채용 정보 등록 2.1.2 pushRecruit()
    return re;
}
