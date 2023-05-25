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
    string applicantId = "";

public:
    void setJob(string job);
    void setPeopleNum(int n);
    void setDueDate(string d);
    void setCompanyNumber(string cn);
    void setCompanyName(string cname);
    void setApplicantId(string id);

    string getJob();
    int getPeopleNum();
    string getDueDate();
    string getCompanyNumber();
    string getCompanyName();
    string getApplicantId();
};

#endif // HOMEWORK3_2_RECRUIT_H