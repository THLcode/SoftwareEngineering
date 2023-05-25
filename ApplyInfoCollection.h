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
    static vector<Recruit*> applyInfo;
public:
    Recruit* addApplyInfo(Recruit*, string);
    void pushApply(Recruit* recruit);
    vector<Recruit*> getApplyInfoList();
    string cancelApplyInfo(Recruit* recruit);
};

#endif //HOMEWORK3_2_APPLYINFOCOLLECTION_H