#include "ShowRecruit.h"
#include "../RecruitInfoCollection.h"

ShowRecruit::ShowRecruit(ShowRecruit* showRecruit, CompanyUser* companyUser)
{
    ShowRecruitUI showRecruitUI;
    showRecruitUI.startInterface(showRecruit, companyUser);
}

vector<Recruit> ShowRecruit::showRecruitList(string companyNumber)
{
    RecruitInfoCollection rc;
    vector<Recruit> Rlist = rc.getRecruitList(companyNumber);

    return Rlist;
}

/*  1. showRecruit 매개변수 넣어서 생성자로 호출
    2. UI startInterface 실행되고
    3. boundary 실행
    4. control 실행
    5. RecruitCollection에서 companyNumber가 같은 애들 꺼 반환
    6. control에서 받아서 boundary로 반환
    7. boundary에서 반환값 출력
*/