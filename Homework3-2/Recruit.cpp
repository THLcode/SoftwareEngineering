#include "Recruit.h"
//지원하는 사람이 채워 넣어야 함

void Recruit::setJob(string job) { this->job = job; };
void Recruit::setPeopleNum(int n) { this->peopleNum = n; };
void Recruit::setDueDate(string d) { this->dueDate = d; };
void Recruit::setCompanyNumber(string cn) { this->companyNumber = cn; };
void Recruit::setCompanyName(string cname) { this->companyName = cname; };
void Recruit::setApplicantId(string id) { this->applicantId = id; }

string Recruit::getJob() { return this->job; };
int Recruit::getPeopleNum() { return this->peopleNum; };
string Recruit::getDueDate() { return this->dueDate; };
string Recruit::getCompanyNumber() { return this->companyNumber; };
string Recruit::getCompanyName() { return this->companyName; };
string Recruit::getApplicantId() { return this->applicantId; }