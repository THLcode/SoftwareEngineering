//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_COMPANYUSER_H
#define HOMEWORK3_2_COMPANYUSER_H
#include <iostream>

#include "User.h"
#include "RecruitInfoCollection.h"

using namespace std;
class CompanyUser : public User
{
private:
    string companyName;
    string companyNumber;
    // RecruitInfoCollection recruitInfoCollection;
public:
    CompanyUser(int, string, string, string, string);
    string getCompanyNumber();
    string getCompanyName();
    // Pair getCompanyUserDetails();
};
#endif // HOMEWORK3_2_COMPANYUSER_H
