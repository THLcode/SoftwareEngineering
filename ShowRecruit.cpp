#include "ShowRecruit.h"
#include "RecruitInfoCollection.h"

ShowRecruit::ShowRecruit(ShowRecruit* showRecruit, CompanyUser* companyUser)
{
    ShowRecruitUI showRecruitUI;
    showRecruitUI.startInterface(showRecruit, companyUser);
}

vector<Recruit*> ShowRecruit::showRecruitList(string companyNumber)
{
    RecruitInfoCollection rc;
    vector<Recruit*> Rlist = rc.getRecruitList(companyNumber);

    return Rlist;
}

/*  1. showRecruit �Ű����� �־ �����ڷ� ȣ��
    2. UI startInterface ����ǰ�
    3. boundary ����
    4. control ����
    5. RecruitCollection���� companyNumber�� ���� �ֵ� �� ��ȯ
    6. control���� �޾Ƽ� boundary�� ��ȯ
    7. boundary���� ��ȯ�� ���
*/