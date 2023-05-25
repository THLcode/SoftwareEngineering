#include "CancelApply.h"
#include "../ApplyInfoCollection.h"

CancelApply::CancelApply()
{
    CancelApplyUI cancelApplyUI;

    cancelApplyUI.startInterface(this);
}

// 지원 취소 2.1 cancelApply()
tuple<string, string, string> CancelApply::cancelApply(string currentLoginClient, string companyNumber)
{
    ApplyInfoCollection ac;
    vector<Recruit> applyList = ac.getApplyListById(currentLoginClient);
    string companyName = "";
    string job = "";
    for (auto it = applyList.begin(); it != applyList.end();) {
        if (it->getCompanyNumber() == companyNumber) {
            ac.cancelApplyInfo(currentLoginClient, companyNumber);
            companyName = it->getCompanyName();
            job = it->getJob();
            it = applyList.erase(it);
        }
        else {
            ++it;
        }
    }
    return make_tuple(companyName, companyNumber, job);
}