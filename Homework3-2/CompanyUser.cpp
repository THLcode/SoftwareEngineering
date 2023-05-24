#include "CompanyUser.h"

CompanyUser::CompanyUser(string name, int companyNumber, string id, string password) : User(name, id, password) {
    this->companyNumber = companyNumber;
    this->recruitInfoCollection = new recruitInfoCollection();
}

int CompanyUser::getCompanyNumber() {
    return this->companyNumber
}

void CompanyUser::setCompanyNumber(int companyNumber) {
    this->companyNumber = companyNumber;
}

string CompanyUser::getUserType() {
    return "Company"; // 왜? 이것도 바꿔야될것같음
}

RecruitmentList* CompanyUser::getRecruitInfoCollection() {
    return this->recruitInfoCollection;
}

pair<string, int> CompanyUser::getCompanyUserDetails() {
    return { this->getName(), this->companyNumber };
}