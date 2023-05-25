#ifndef HOMEWORK3_2_RECRUIT_H
#define HOMEWORK3_2_RECRUIT_H
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "CompanyUser.h"
using namespace std;

class CompanyUser;

class Recruit
{
private:
    string job;
    int peopleNum;
    string dueDate;
    string companyNumber;
    string companyName;

public:
    void setJob(string job) { this->job = job; };
    void setPeopleNum(int n) { this->peopleNum = n; };
    void setDueDate(string d) { this->dueDate = d; };
    void setCompanyNumber(string cn) { this->companyNumber = cn; };
    void setCompanyName(string cname) { this->companyName = cname; };

    string getJob() { return this->job; };
    int getPeopleNum() { return this->peopleNum; };
    string getDueDate() { return this->dueDate; };
    string getCompanyNumber() { return this->companyNumber; };
    string getCompanyName() { return this->companyName; };
};

#endif // HOMEWORK3_2_RECRUIT_H
