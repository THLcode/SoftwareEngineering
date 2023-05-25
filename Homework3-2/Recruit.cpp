#include "Recruit.h"
void Recruit::setJob(string job) { this->job = job; }
void Recruit::setPeopleNum(int n) { this->peopleNum = n; }
void Recruit::setDueDate(string d) { this->dueDate = d; }
void Recruit::setCompanyNumber(string cn) { this->companyNumber = cn; }
void Recruit::setCompanyName(string cname) { this->companyName = cname; }
void Recruit::setApplicantId(string id) { this->applicantId = id; }
void Recruit::setCompanyId(string id) { this->companyId = id; }
// 채용정보 검색 2.1.1.1 getCompanyNumber()
// 회사 회원 지원 정보 통계 2.2.1 getJob()
// 일반 회원 지원 정보 통계 2.2.1 getJob()
string Recruit::getJob() { return this->job; }
int Recruit::getPeopleNum() { return this->peopleNum; }
string Recruit::getDueDate() { return this->dueDate; }
string Recruit::getCompanyNumber() { return this->companyNumber; }
string Recruit::getCompanyName() { return this->companyName; }
string Recruit::getApplicantId() { return this->applicantId; }
string Recruit::getCompanyId() { return this->companyId; }
