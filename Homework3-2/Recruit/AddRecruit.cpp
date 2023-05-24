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

/*  1. addRecruit 매개변수 넣어서 생성자로 호출
    2. UI startInterface 실행되고
    3. boundary 실행
    4. control 실행
    5. Recruit 객체 만들어짐
    6. RecruitCollection vector에 삽입됨
*/