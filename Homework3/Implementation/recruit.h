#include <iostream>
#include "companyUser.h"
#include <tuple>
using namespace std;

class Recruit {
    private :
        string job;
        int peopleNum;
        string dueDate;
        CompanyUser* companyUser; 
    public : 
        tuple<string,int,string,int,string> getRecruitDetails();
};