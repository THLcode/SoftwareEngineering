#include "AddRecruit.h"
#include "RecruitInfoCollection.h"
#include "Recruit.h"
#include "UserCollection.h"


AddRecruit::AddRecruit(AddRecruit* addRecruit, CompanyUser* companyUser)
{
    AddRecruitUI addRecruitUI;
    addRecruitUI.startInterface(addRecruit, companyUser);
}

void AddRecruit::addRecruit(string job, int peopleNum, string dueDate, CompanyUser* companyUser)
{
    Recruit* re = new Recruit();
    re->setJob(job);
    re->setPeopleNum(peopleNum);
    re->setDueDate(dueDate);
    re->setCompanyNumber(companyUser->getCompanyNumber());
    re->setCompanyName(companyUser->getCompanyName());

    RecruitInfoCollection rc;
    rc.pushRecruit(re);
}

// control -> Recruit -> RecruitCollection

/*  1. addRecruit �Ű����� �־ �����ڷ� ȣ��
    2. UI startInterface ����ǰ�
    3. boundary ����
    4. control ����
    5. Recruit ��ü �������
    6. RecruitCollection vector�� ���Ե�
*/