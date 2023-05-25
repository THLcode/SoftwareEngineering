#include "Recruit.h"
void Recruit::setJob(string job) { this->job = job; }
void Recruit::setPeopleNum(int n) { this->peopleNum = n; }
void Recruit::setDueDate(string d) { this->dueDate = d; }
void Recruit::setCompanyNumber(string cn) { this->companyNumber = cn; }
void Recruit::setCompanyName(string cname) { this->companyName = cname; }
void Recruit::setApplicantId(string id) { this->applicantId = id; }
void Recruit::setCompanyId(string id) { this->companyId = id; }

// ȸ�� ȸ�� ���� ���� ��� 2.2.1 getJob()
// �Ϲ� ȸ�� ���� ���� ��� 2.2.1 getJob()
string Recruit::getJob() { return this->job; }
int Recruit::getPeopleNum() { return this->peopleNum; }
string Recruit::getDueDate() { return this->dueDate; }
// 채용 지원 2.1.1.1 getCompanyNumber()
string Recruit::getCompanyNumber() { return this->companyNumber; }
string Recruit::getCompanyName() { return this->companyName; }
string Recruit::getApplicantId() { return this->applicantId; }
string Recruit::getCompanyId() { return this->companyId; }