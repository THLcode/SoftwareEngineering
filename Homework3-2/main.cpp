#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>

#include "User.h"
#include "User/Login.h"
#include "User/LoginUI.h"
#include "User/Logout.h"
#include "User/LogoutUI.h"
#include "User/SignUp.h"
#include "User/SignUpUI.h"
#include "User/DropUser.h"
#include "User/DropUserUI.h"
#include "UserCollection.h"
#include "Recruit/CancelApply.h"
#include "Recruit/CancelApplyUI.h"
#include "Recruit/AddRecruitUI.h"
#include "Recruit/AddRecruit.h"
#include "Recruit/ShowRecruitUI.h"
#include "Recruit/ShowRecruit.h"
#include "Recruit/ShowApplyUI.h"
#include "Recruit/ShowApply.h"
#include "CompanyUser.h"
#include "Recruit/SearchRecruitInfoUI.h"
#include "Recruit/SearchRecruitInfo.h"
#include "Recruit/ApplyRecruit.h"
#include "ApplyInfoCollection.h"
#include "Recruit/SelectRecruitStatistics.h"
#include "Recruit/SelectApplyStatistics.h"
#include "RecruitInfoCollection.h"

using namespace std;

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void program_exit();

FILE *in_fp, *out_fp;
string currentLoginClient = "None";
User *UserCollection::userList[MAX_COUNT] = {nullptr};
int UserCollection::clientNumber = 0;
UserCollection userList;
RecruitInfoCollection rc;
ApplyInfoCollection ac;
int currentUserType = 0;

/*****************************
  1.1. 회원가입 Boundary Class
*****************************/

// 회원가입 1. startInterface()
void SignUpUI::startInterface(SignUp *signup)
{
    int memType = 0;
    char name[MAX_STRING], number[MAX_STRING], id[MAX_STRING],
        password[MAX_STRING];

    fscanf(in_fp, "%d %s %s %s %s", &memType, name, number, id, password);
    submitInfo(signup, memType, name, number, id, password);
    if (memType == 1)
    {
        fprintf(out_fp, "1.1. 회원가입\n");
        fprintf(out_fp, "> 1 %s %s %s %s\n\n", name, number, id, password);
    }
    else if (memType == 2)
    {
        fprintf(out_fp, "1.1. 회원가입\n");
        fprintf(out_fp, "> 2 %s %s %s %s\n\n", name, number, id, password);
    }
}

// 회원가입 2. submitInfo()
void SignUpUI::submitInfo(SignUp *signup, int memType, string name,
                          string number, string id, string password)
{
    signup->signUpUser(userList, memType, name, number, id, password);
}

/*****************************
1.2. 회원탈퇴 UI Boundary Class
*****************************/

// 회원탈퇴 1. startInterface()
void DropUserUI::startInterface(DropUser *dropUser)
{
    selectDropUser(dropUser, currentLoginClient);
    fprintf(out_fp, "1.2. 회원탈퇴\n");
    fprintf(out_fp, "> %s\n\n", &currentLoginClient);
    currentLoginClient = "None";
}

// 회원탈퇴 2. selectDropUser()
void DropUserUI::selectDropUser(DropUser *dropUser, string id)
{
    dropUser->deleteUser(userList, id);
}

/*****************************
 2.1. 로그인 Boundary Class
*****************************/

// 로그인 1. startInterface()
void LoginUI::startInterface(Login *login)
{
    loginUser(login);
}

// 로그인 2. loginUser()
void LoginUI::loginUser(Login *login)
{
    char id[MAX_STRING], password[MAX_STRING];
    fscanf(in_fp, "%s %s", id, password);

    currentLoginClient = std::string(id);
    if (login->validUser(userList, id, password))
    { // true
        fprintf(out_fp, "2.1. 로그인\n");
        fprintf(out_fp, "> %s %s\n\n", id, password);
    }
}
/*****************************
 2.2. 로그아웃 UI Boundary Class
*****************************/

// 로그아웃 1. startInterface()
void LogoutUI::startInterface(Logout *logout)
{
    logoutSelect(logout);
}

// 로그아웃 2. logoutSelect()
void LogoutUI::logoutSelect(Logout *logout)
{
    if (logout->logoutUser())
    {
        fprintf(out_fp, "2.2. 로그아웃\n");
        fprintf(out_fp, "> %s\n\n", currentLoginClient.c_str());
        currentLoginClient = "None";
    }
}

/*************************************
    3.1.채용 정보 등록 UI Boundary Class
**************************************/
// 채용 정보 등록 1. startInterface()
void AddRecruitUI::startInterface(AddRecruit *addRecruit)
{
    char job[MAX_STRING];
    int peopleNum = 0;
    char dueDate[MAX_STRING];
    int test1 = 0, test2 = 0;
    fscanf(in_fp, "%s %d %s", job, &peopleNum, dueDate);

    createRecruit(addRecruit, job, peopleNum, dueDate);
}

// 채용 정보 등록 2. createRecruit()
void AddRecruitUI::createRecruit(AddRecruit *addRecruit, string job, int peopleNum, string dueDate)
{
    Recruit re;
    re = addRecruit->addRecruit(job, peopleNum, dueDate, currentLoginClient);
    // control �Լ� ȣ��
    fprintf(out_fp, "3.1. 채용 정보 등록\n");
    fprintf(out_fp, "> %s %d %s \n\n", re.getJob().c_str(), re.getPeopleNum(), re.getDueDate().c_str());
}

/*****************************************
    3.2. 등록된 채용 정보 조회 UI Boundary Class
******************************************/
// 등록 채용 정보 조회 2. startInterace()
void ShowRecruitUI::startInterface(ShowRecruit *showRecruit)
{
    getRecruitList(showRecruit);
}
// 등록 채용 정보 조회 3. getRecruitList()
void ShowRecruitUI::getRecruitList(ShowRecruit *showRecruit)
{
    vector<Recruit> reList = showRecruit->showRecruitList(currentLoginClient);
    fprintf(out_fp, "3.2. 등록된 채용 정보 조회\n");
    for (int i = 0; i < reList.size(); i++)
    {
        fprintf(out_fp, "> %s %d %s \n", reList[i].getJob().c_str(), reList[i].getPeopleNum(), reList[i].getDueDate().c_str());
    }
    fprintf(out_fp, "\n");
}

/*************************************
   4.1. 채용 정보 검색 Boundary Class
*************************************/
void SearchRecruitInfoUI::startInterface(SearchRecruitInfo *searchRecruitInfoControl)
{
    char companyName[MAX_STRING];
    fscanf(in_fp, "%s", companyName);
    enterCompanyName(searchRecruitInfoControl, companyName);
}

void SearchRecruitInfoUI::enterCompanyName(SearchRecruitInfo *searchRecruitInfoControl, string companyName)
{
    vector<Recruit> reList = searchRecruitInfoControl->showRecruitInfoList(companyName);
    printOutput(reList);
}

bool SearchRecruitInfoUI::compareByCompanyName(Recruit recruit1, Recruit recruit2)
{
    return recruit1.getCompanyName() < recruit2.getCompanyName();
}

void SearchRecruitInfoUI::printOutput(vector<Recruit> reList)
{

    sort(reList.begin(), reList.end(), SearchRecruitInfoUI::compareByCompanyName);

    fprintf(out_fp, "4.1. 채용 정보 검색\n");
    for (int i = 0; i < reList.size(); i++)
    {
        fprintf(out_fp, "> %s %s %s %d %s \n", reList[i].getCompanyName().c_str(), reList[i].getCompanyNumber().c_str(), reList[i].getJob().c_str(), reList[i].getPeopleNum(), reList[i].getDueDate().c_str());
    }
    fprintf(out_fp, "\n");
}

/*************************************
     4.2. 채용 지원 Boundary Class
*************************************/
// 채용 지원 1. startInterface()
void ApplyRecruitUI::startInterface(ApplyRecruit *applyRecruit)
{
    char companyNumber[MAX_STRING];
    fscanf(in_fp, "%s", companyNumber);
    Recruit applied = applyRecruit->addApplication(companyNumber, currentLoginClient);
    printOutput(applied);
}

void ApplyRecruitUI::printOutput(Recruit applied)
{
    fprintf(out_fp, "4.2. 채용 지원\n");
    fprintf(out_fp, "> %s %s %s \n\n", applied.getCompanyName().c_str(), applied.getCompanyNumber().c_str(), applied.getJob().c_str());
}

/*************************************
    4.3. 지원 정보 조회 UI Boundary Class
**************************************/
// 지원 정보 조회 2.startInterface()
void ShowApplyUI::startInterface(ShowApply *showApply)
{
    selectApplyList(showApply);
}

bool ShowApplyUI::compareByCompanyName(Recruit recruit1, Recruit recruit2)
{
    return recruit1.getCompanyName() < recruit2.getCompanyName();
}

// 지원 정보 조회 3 selectApplyList()
void ShowApplyUI::selectApplyList(ShowApply *showApply)
{
    vector<Recruit> AList = showApply->showApplyList(currentLoginClient);
    sort(AList.begin(), AList.end(), ShowApplyUI::compareByCompanyName);
    fprintf(out_fp, "4.3. 지원 정보 조회\n");
    for (int i = 0; i < AList.size(); i++)
    {
        fprintf(out_fp, "> %s %s %s %d %s \n", AList[i].getCompanyName().c_str(), AList[i].getCompanyNumber().c_str(), AList[i].getJob().c_str(), AList[i].getPeopleNum(), AList[i].getDueDate().c_str());
    };
    fprintf(out_fp, "\n");
}
/*************************************
  4.4. 지원 취소 Boundary Class
*************************************/

// 지원 취소 1. startInterface()
void CancelApplyUI::startInterface(CancelApply *cancelApp)
{
    cancelApply(cancelApp);
}

// 지원 취소 2. cancelApply()
void CancelApplyUI::cancelApply(CancelApply *cancelApply)
{
    char companyNumber[MAX_STRING];
    fscanf(in_fp, "%s", companyNumber);
    tuple<string, string, string> canceled = cancelApply->cancelApply(currentLoginClient, companyNumber);
    printOutput(canceled);
}
void CancelApplyUI::printOutput(tuple<string, string, string> canceled)
{
    string companyName = get<0>(canceled);
    string companyNumber = get<1>(canceled);
    string job = get<2>(canceled);
    fprintf(out_fp, "4.4. 지원 취소\n");
    fprintf(out_fp, "> %s %s %s \n\n", companyName.c_str(), companyNumber.c_str(), job.c_str());
}

/*************************************
   5.1. 회사 회원 지원 정보 통계 Boundary Class
*************************************/

// 회사 회원 지원 정보 통계 1. startInterface()
void SelectRecruitStatisticsUI::startInterface(SelectRecruitStatistics *selectRecruitStatisticsControl)
{
    selectRecruitStatistics(selectRecruitStatisticsControl, currentLoginClient);
}

// 회사 회원 지원 정보 통계 2. selectRecruitStatistics()
void SelectRecruitStatisticsUI::selectRecruitStatistics(SelectRecruitStatistics *selectRecruitStatisticsControl, string currentLoginClient)
{
    vector<Recruit> rList = selectRecruitStatisticsControl->showRecruitStatistics(currentLoginClient);
    map<string, int> jobCount = selectRecruitStatisticsControl->getRecruitNumByJob(rList);
    printOutput(jobCount);
}

void SelectRecruitStatisticsUI::printOutput(map<string, int> jobCount)
{
    for (const auto &pair : jobCount)
    {
        string job = pair.first;
        int count = pair.second;
        fprintf(out_fp, "> %s %d \n", job.c_str(), count);
    }
    fprintf(out_fp, "\n");
}
/******************************************
   5.1. 일반 회원 지원 정보 통계 Boundary Class
******************************************/
void SelectApplyStatisticsUI::startInterface(SelectApplyStatistics *selectApplyStatisticsControl)
{
    selectApplyStatistics(selectApplyStatisticsControl, currentLoginClient);
}

void SelectApplyStatisticsUI::selectApplyStatistics(SelectApplyStatistics *, string currentLoginClient)
{
    vector<Recruit> rList = selectApplyStatisticsControl->showApplyStatistics(currentLoginClient);
    map<string, int> jobCount = selectApplyStatisticsControl->getApplyNumByJob(rList);
    printOutput(jobCount);
}

void SelectApplyStatisticsUI::printOutput(map<string, int> jobCount)
{
    for (const auto &pair : jobCount)
    {
        string job = pair.first;
        int count = pair.second;
        fprintf(out_fp, "> %s %d \n", job.c_str(), count);
    }
    fprintf(out_fp, "\n");
}

int main()
{
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    if (in_fp == nullptr)
    {
        cout << "Failed to open the input file." << endl;
        return 1;
    }
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");
    doTask();

    return 0;
}

void doTask()
{
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);

        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                // 회원가입
                cout << "1.1 회원가입" << endl;
                SignUp signUp;
                break;
            }
            case 2:
            {
                // 회원탈퇴
                cout << "1.2. 회원탈퇴" << endl;
                DropUser dropUser;
                break;
            }
            }
            break;
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                // 로그인
                cout << "2.1. 로그인" << endl;
                Login login;
                break;
            }
            case 2:
            {
                // 로그아웃
                cout << "2.2. 로그아웃" << endl;
                Logout logout;
                break;
            }
            }
            break;
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                // 채용 정보 등록
                cout << "3.1. 채용 정보 등록" << endl;
                AddRecruit addRecruit;
                break;
            }
            case 2:
            {
                // 등록된 채용 정보 조회
                cout << "3.2. 등록된 채용 정보 조회" << endl;
                ShowRecruit showRecruit;
                break;
            }
            }
            break;
        }
        case 4:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                // 채용정보 검색
                cout << "4.1. 채용 정보 검색" << endl;
                SearchRecruitInfo searchRecruitInfo;
                break;
            }
            case 2:
            {
                // 채용 지원
                cout << "4.2. 채용 지원" << endl;
                ApplyRecruit applyRecruit;
                break;
            }
            case 3:
            {
                // 지원 정보 조회
                cout << "4.3. 지원 정보 조회" << endl;
                ShowApply showApply;
                break;
            }
            case 4:
            {
                // 지원 취소
                cout << "현재 로그인된 고객 : " << currentLoginClient << endl;
                cout << "4.4. 지원 취소" << endl;
                CancelApply cancelApply;
                break;
            }
            }
            break;
        }
        case 5:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                // 지원 정보 통계
                fprintf(out_fp, "5.1. 지원 정보 통계\n");
                cout << "5.1. 지원 정보 통계" << endl;
                int currentUserType = userList.getUserTypeById(currentLoginClient);
                if (currentUserType == 1)
                {
                    cout << "5.1. 회사 회원 지원 정보 통계" << endl;
                    SelectRecruitStatistics selectRecruitStatistics;
                }
                else if (currentUserType == 2)
                {
                    cout << "5.1. 일반 회원 지원 정보 통계" << endl;
                    SelectApplyStatistics selectApplyStatistics;
                }
                else
                {
                    break;
                }
                break;
            }
            }
            break;
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                program_exit();
                fprintf(out_fp, "6.1. 종료");
                is_program_exit = 1;
                break;
            }
            }
            break;
        }
            return;
        }
    }
}

void program_exit() { cout << "6.1. 종료"; }