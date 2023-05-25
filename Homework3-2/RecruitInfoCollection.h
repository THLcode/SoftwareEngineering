//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_RECRUITINFOCOLLECTION_H
#define HOMEWORK3_2_RECRUITINFOCOLLECTION_H
#include <iostream>
#include <string>
#include <vector>
#include "Recruit.h"
using namespace std;
class Recruit;

class RecruitInfoCollection
{
private:
    static vector<Recruit *> recruitInfo;
public:
    void pushRecruit(Recruit*);
    vector<Recruit *> getRecruitList(string);
    tuple<string, int, string, int, string> getRecruitDetails();
    vector<Recruit*> getRecruitListById(string companyId);
    vector<Recruit*> getRecruitListByCompany(string companyName);
    vector<Recruit*> getRecruitListByCompanyNumber(string);
};
#endif // HOMEWORK3_2_RECRUITINFOCOLLECTION_H
