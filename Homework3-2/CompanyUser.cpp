#include "CompanyUser.h"
#include "Recruit.h"

CompanyUser::CompanyUser(int userType, string name, string number, string id, string password)
    : User(userType, id, password)
{
    companyName = name;
    companyNumber = number;
}

string CompanyUser::getCompanyNumber() {
    return this->companyNumber;
}

string CompanyUser::getCompanyName() {
    return this->companyName;
}


