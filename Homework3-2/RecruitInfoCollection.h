#ifndef HOMEWORK3_2_RECRUITINFOCOLLECTION_H
#define HOMEWORK3_2_RECRUITINFOCOLLECTION_H
#include <iostream>
#include <string>
#include <vector>
#include "Recruit.h"
using namespace std;
class Recruit;

class RecruitInfoCollection {
private:
	vector<Recruit*> recruitInfoCollection;
public:
	void addRecruit(string job, int peopeNum, string dueDate);
	vector<Recruit*> getRecruitDetails();
};


#endif //HOMEWORK3_2_RECRUITINFOCOLLECTION_H
