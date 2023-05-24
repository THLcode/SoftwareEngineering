
//test
#include <iostream>
#include <vector>

using namespace std;

/*********************지원 취소************************/

class CancelApply {
public:
    CancelApply();
    void cancelApplyDetails();
};

class CancelApplyUI {
public:
    void cancelApply();
    void printOutput();
};

/*********************일반회원 지원 정보 통계************************/

class SelectApplyStatistics {
public:
    SelectApplyStatistics();
    void showApplyStatistics();
};

class SelectApplyStatisticsUI {
public:
    void selectApplyStatistics();
    void printOutput();
};

/*********************회사회원 지원 정보 통계************************/

class SelectRecruitStatistics {
public:
    SelectRecruitStatistics();
    void showRecruitStatistics();
};

class SelectRecruitStatisticsUI {
public:
    void selectRecruitStatistics();
    void printOutput();
};

class User{
public:
    string id;
    string password;
private:
    string getUserType();
};

class UserCollection{
public:
    vector<User*> userList;
private:
    int signUpNormalUser(string name, int securityNumber, string id, string password);
    int signUpCompanyUser();
    void dropUser(string id);
    bool validUser(string id, string password);
    void logoutUser();
    User getUserByCompayNumber();
};

class Recruit{
public:
    string job;
    int peopleNum;
    string dueDate;
    CompanyUser* companyUser;
private:
    tuple<string, int, string, int, string> getRecruitDetails();
};

class ApplyInfoCollection{
public:
    Recruit* applyInfo;
private:
    string cancelApplyInfo(Recruit*);
    void addApplyInfo(Recruit*);
    Recruit* getApplyInfoList();
};

class NormalUser : public User{
public:
    string normalName;
    int securityNumber;
    ApplyInfoCollection* applyInfoCollection;
private:
    ApplyInfoCollection* getApplyInfoCollection();
};

class RecruitInfoCollection{
public:
    vector<Recruit> recruitInfo;
private:
    Recruit* getRecruitList();
    void addRecruit(Recruit);
};

class CompanyUser : public User{
public:
    string companyName;
    int companyNumber;
    RecruitInfoCollection* recruitInfoCollection;
private:
    RecruitInfoCollection* getRecruitInfoCollection();
    pair<string, int> getCompanyUserDetails();
};

