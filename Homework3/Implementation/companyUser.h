#include <iostream>
#include <vector>
using namespace std;


class CompanyUser {
    private :
        string companyName;
        int companyNumber;
        RecruitinfoCollection* recruitinfoCollection;
    public :
        RecruitinfoCollection* getRecruitinfoCollection();
        vector<pair<string,int>> getCompanyUserDetails();

};