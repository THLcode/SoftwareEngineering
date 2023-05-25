#include "ApplyInfoCollection.h"

vector<Recruit> ApplyInfoCollection::applyInfo;
Recruit ApplyInfoCollection::addApplyInfo(Recruit recruit, string currentUser) {

    Recruit re;

    re.setJob(recruit.getJob());
    re.setPeopleNum(recruit.getPeopleNum());
    re.setDueDate(recruit.getDueDate());
    re.setCompanyNumber(recruit.getCompanyNumber());
    re.setCompanyName(recruit.getCompanyName());
    re.setApplicantId(currentUser);

    ApplyInfoCollection ac;
    ac.pushApply(re);
    return re;
}

void ApplyInfoCollection::pushApply(Recruit recruit)
{
    applyInfo.push_back(recruit);
}

// 지원 취소 2.1.1 getApplyListById()
// 일반 회원 지원 정보 통계 2.1.1 showApplyStatistics()
vector<Recruit> ApplyInfoCollection::getApplyListById(string applicantId) {
    vector<Recruit> resultList;

    for (Recruit recruit : applyInfo)
    {
        if (recruit.getApplicantId() == applicantId)
        {
            resultList.push_back(recruit);
        }
    }

    return resultList;
}
vector<Recruit> ApplyInfoCollection::getApplyInfoList(string id)
{
    vector<Recruit> applyList;
    for (int i = 0; i < applyInfo.size(); i++)
    {
        if (applyInfo[i].getApplicantId() == id)
        {
            applyList.push_back(applyInfo[i]);
        }
    }

    return applyList;
}

// 지원 취소 2.1.2 cancelApplyInfo()
void ApplyInfoCollection::cancelApplyInfo(string id, string companyNumber) {
    for (auto it = applyInfo.begin(); it != applyInfo.end();) {
        if (it->getCompanyNumber() == companyNumber) {
            it = applyInfo.erase(it);  // erase() 함수로 요소 삭제 후 다음 유효한 요소로 이동
        }
        else {
            ++it;  // 다음 요소로 이동
        }
    }
}