#include "ShowApply.h"
#include <vector>
#include "../Recruit.h"
#include "../ApplyInfoCollection.h"
#include "ShowApplyUI.h"
ShowApply::ShowApply() {
    ShowApplyUI showApplyUI;
    showApplyUI.startInterface(this);
}
vector<Recruit> ShowApply::showApplyList(string currentLoginClient)
{
    ApplyInfoCollection ac;
    UserCollection userList;
    NormalUser* u = userList.getNormalUser(currentLoginClient);

    vector<Recruit> AList = ac.getApplyInfoList(u->getUserId());

    return AList;
}