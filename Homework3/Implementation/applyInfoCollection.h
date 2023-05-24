#include <iostream>
#include "recruit.h"
#include <vector>
using namespace std;

class ApplyInfoCollection {
    private :
        vector<Recruit> applyInfo;
    public :
        string cancelApplyInfo(Recruit);
        void addApplyInfo(Recruit);
        vector<Recruit> getApplyInfoList();
}