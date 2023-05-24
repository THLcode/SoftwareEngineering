#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

class Recruit
{
private:
    string job;
    int peopleNum;
    string dueDate;
    string companyNumber;

public:
    tuple<string, int, string, string> getRecruitDetails(string);
};

class RecruitInfoCollection
{
private:
    vector<Recruit> recruitInfo;

public:
    vector<Recruit> getRecruitList();
    void addRecruit(Recruit);
};

class ApplyInfoCollection
{
private:
    vector<Recruit> applyInfo;

public:
    string cancelApplyInfo(Recruit);
    void addApplyInfo(Recruit);
    vector<Recruit> getApplyInfoList();
};

class CompanyUser
{
private:
    string companyName;
    int companyNumber;
    RecruitInfoCollection *recruitInfoCollection;

public:
    RecruitInfoCollection *getRecruitInfoCollection();
    vector<pair<string, int>> getCompanyUserDetails();
};

class NormalUser
{
private:
    string normalName;
    int securityNumber;
    ApplyInfoCollection *applyInfoCollection;

public:
    ApplyInfoCollection *getApplyInfoCollection();
};