#include "CancelApply.h"
#include "ApplyInfoCollection.h"

CancelApply::CancelApply()
{
    CancelApplyUI cancelApplyUI;

    cancelApplyUI.startInterface(this);
}

tuple<string, string, string> CancelApply::cancelApply(string currentLoginClient, string companyNumber)
{
    ApplyInfoCollection ac;
    vector<Recruit*> applyList = ac.getApplyListById(currentLoginClient);
    string companyName = "";
    string job = "";
    for (auto it = applyList.begin(); it != applyList.end(); ++it) {
        if ((*it)->getCompanyNumber() == companyNumber ) {
            string companyName = (*it)->getCompanyName();
            string job = (*it)->getJob();
            delete *it;
            applyList.erase(it);
        }
    }
    return make_tuple(companyName, companyNumber, job);
}
