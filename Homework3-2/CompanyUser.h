#ifndef HOMEWORK3_2_COMPANYUSER_H
#define HOMEWORK3_2_COMPANYUSER_H
#include <iostream>
#include <string>
#include "User.h"
#include "RecruitInfoCollection.h"
using namespace std;

class RecruitInfoCollection;

class CompanyUser : public User {
private:
    string companyNumber;
    RecruitInfoCollection* recruitInfoCollection;
public:
    CompanyUser(string name, int companyNumber, string id, string password);
    string getUserType() override;
    int getCompanyNumber();
    void setCompanyNumber(int companyNumber);
    RecruitInfoCollection* getRecruitInfoCollection();

    pair<string, int> getCompanyUserDetails(); //바꿔야될것같음...

};

#endif //HOMEWORK3_2_COMPANYUSER_H
