#include <iostream>
#include "recruit.h"
#include <vector>
using namespace std;

class RecruitInfoCollection{
    private :
        vector<Recruit> recruitInfo;
    public :
        vector<Recruit> getRecruitList();
        void addRecruit(Recruit);
}