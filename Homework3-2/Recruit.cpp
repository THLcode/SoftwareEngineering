#include "Recruit.h"

Recruit::Recruit(string job, int peopleNum, string dueDate, string companyNumber)
{
	this->job = job;
	this->peopleNum = peopleNum;
	this->dueDate = dueDate;
	this->companyNumber = companyNumber;
}

tuple<string, int, string, int, string> Recruit::getRecruitDetails()
{
	int companyNumber;
	string companyName;
	tie(companyName, companyNumber) = this->companyUser->getCompanyUserDetails(); // 바꿔야될것같음....

	return
	{
		companyName,
			companyNumber,
			this->job,
			this->peopleNum,
			this->dueDate;
	};
}