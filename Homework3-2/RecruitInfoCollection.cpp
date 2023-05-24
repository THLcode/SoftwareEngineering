#include "RecruitInfoCollection.h"

void RecruitInfoCollection::pushRecruit(Recruit *recruit)
{
    recruitInfo.push_back(recruit);
}

vector<Recruit *> RecruitInfoCollection::getRecruitList(string companyNumber)
{
    vector<Recruit *> recruitList;
    for (int i = 0; i < recruitInfo.size(); i++)
    {
        if (recruitInfo[i]->getCompanyNumber() == companyNumber)
        {
            recruitList.push_back(recruitInfo[i]);
        }
    }

    return recruitList;
}

tuple<string, int, string, int, string> RecruitInfoCollection::getRecruitDetails()
{
}