#include "RecruitInfoCollection.h"

void RecruitInfoCollection::pushRecruit(Recruit* recruit)
{
    //recruitInfo.push_back(recruit);
}
vector<Recruit*> RecruitInfoCollection::recruitInfo;

vector<Recruit*> RecruitInfoCollection::getRecruitList(string companyNumber)
{
    vector<Recruit *> recruitList;
    for (int i = 0; i < recruitInfo.size(); i++)
    {
        if (recruitInfo[i]->getCompanyNumber() == companyNumber)
        {
            //recruitList.push_back(recruitInfo[i]);
        }
    }

    return recruitList;
}

vector<Recruit*> RecruitInfoCollection::getRecruitListByCompany(string companyName)
{
    vector<Recruit*> resultList;

    for (Recruit* recruit : recruitInfo)
    {
        if (recruit->getCompanyName() == companyName)
        {
            resultList.push_back(recruit);
        }
    }

    return resultList;
}


tuple<string, int, string, int, string> RecruitInfoCollection::getRecruitDetails()
{
}