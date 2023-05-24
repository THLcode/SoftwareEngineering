
#ifndef HOMEWORK3_2_APPLYINFOCOLLECTION_H
#define HOMEWORK3_2_APPLYINFOCOLLECTION_H
#include <iostream>
#include <string>
#include <vector>
#include "Recruit.h"
using namespace std;
class Recruit;

class ApplyInfoCollection {
private:
    vector<Recruit*> applyInfoCollection;
public:
    void addApplyInfo(Recruit* recruit);
    vector<Recruit*> getApplyInfoList();
    string deleteApplyInfo(Recruit* recruit);
};
/*
class Recruit;

class ApplyInfoCollection {
private:
    vector<Recruit*> recruit;
public:
    void addApplyInfo(string job, int peopleNum, string dueDate);
    vector<Recruit*> getApplyInfoList();
};
*/

#endif //HOMEWORK3_2_APPLYINFOCOLLECTION_H
