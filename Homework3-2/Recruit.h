#ifndef HOMEWORK3_2_RECRUIT_H
#define HOMEWORK3_2_RECRUIT_H
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "CompanyUser.h"
using namespace std;

class CompanyUser;

class Recruit {
private:
	string job;
	int peopleNum;
	string dueDate;
	CompanyUser* companyUser;
public:
	Recruit(string job, int peopleNum, string dueDate, CompanyUser* companyUser);
	tuple<string, int, string, int, string>getRecruitDetails();

};

#endif //HOMEWORK3_2_RECRUIT_H
