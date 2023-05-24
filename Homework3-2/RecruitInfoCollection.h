//
// Created by 이태휘 on 2023/05/24.
//

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
    vector<Recruit*> recruitInfo;
public:
    void addRecruit(Recruit* recruit);
    Recruit* getRecruitList();
    tuple<string, int, string, int, string> getRecruitDetails();
};
#endif //HOMEWORK3_2_RECRUITINFOCOLLECTION_H
