#include "ShowRecruit.h"
#include "../RecruitInfoCollection.h"
#include "../UserCollection.h"

ShowRecruit::ShowRecruit()
{
    ShowRecruitUI showRecruitUI;
    showRecruitUI.startInterface(this);
}

vector<Recruit> ShowRecruit::showRecruitList(string currentLoginClient)
{
    RecruitInfoCollection rc;
    extern UserCollection userList;
    CompanyUser* u = userList.getUser(currentLoginClient);

    vector<Recruit> Rlist = rc.getRecruitList(u->getCompanyNumber());

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