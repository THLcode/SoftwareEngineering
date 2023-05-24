#include "RecruitInfoCollection.h"

void RecruitInfoCollection::addRecruit(string job, int peopeNum, string dueDate) {
	extern User* User;

	Recruit* newRecruit = new Recruit(job, peopleNum, dueDate, (CompanyUser*)User);
	this->recruit.push_back(newRecruit);
}

vector<Recruit*> RecruitInfoCollection::getRecruitDetails() {
	return this->recruit;
}