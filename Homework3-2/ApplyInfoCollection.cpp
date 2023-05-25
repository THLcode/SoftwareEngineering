#include "ApplyInfoCollection.h"

//하는 사람이 채워넣어야함
Recruit* ApplyInfoCollection::addApplyInfo(Recruit* recruit, string currentUser) {

    Recruit *re = new Recruit();

    re->setJob(recruit->getJob());
    re->setPeopleNum(recruit->getPeopleNum());
    re->setDueDate(recruit->getDueDate());
    re->setCompanyNumber(recruit->getCompanyNumber());
    re->setCompanyName(recruit->getCompanyName());
    re->setApplicantId(currentUser);

    ApplyInfoCollection ac;
    ac.pushApply(re);
    return re;
}

void ApplyInfoCollection::pushApply(Recruit* recruit)
{
    applyInfo.push_back(recruit);
}

vector<Recruit*> ApplyInfoCollection::getApplyInfoList() {

}

string ApplyInfoCollection::cancelApplyInfo(Recruit* recruit) {

}