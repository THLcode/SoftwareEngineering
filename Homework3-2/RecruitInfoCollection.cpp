#include "RecruitInfoCollection.h"

void RecruitInfoCollection::pushRecruit(Recruit *recruit)
{
    recruitInfo.push_back(recruit);
}

Recruit *RecruitInfoCollection::getRecruitList()
{
}

tuple<string, int, string, int, string> RecruitInfoCollection::getRecruitDetails()
{
}