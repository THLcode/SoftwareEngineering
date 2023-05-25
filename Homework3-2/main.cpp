#define _CRT_SECURE_NO_WARNINGS
// #pragma warning(disable : 4996)
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
#include "Recruit/SelectRecruitStatistics.h"

using namespace std;

#define MAX_STRING 32
#define INPUT_FILE_NAME "/Users/taehwi/Desktop/Hongik_Univ/Hongik_4-1/SWE/hw3/Homework3-2/input.txt"
#define OUTPUT_FILE_NAME "/Users/taehwi/Desktop/Hongik_Univ/Hongik_4-1/SWE/hw3/Homework3-2/output.txt"

void doTask();
void program_exit();

FILE *in_fp, *out_fp;
string currentLoginClient = "None";
UserCollection userList;
int currentUserType = 0;

/*****************************
  1.1. SignUpUI Boundary Class
*****************************/
// ȸ������ 1. startInterface()
void SignUpUI::startInterface(SignUp *signup)
{
    int memType = 0;
    char name[MAX_STRING], number[MAX_STRING], id[MAX_STRING],
        password[MAX_STRING];

    fscanf(in_fp, "%d %s %s %s %s", &memType, name, number, id, password); //
    // ���� ���� �о����
    // ȸ������ 2. submitInfo()
    submitInfo(signup, memType, name, number, id, password);
    if (memType == 1)
    {
        fprintf(out_fp, "1.1. ȸ������\n");
        fprintf(out_fp, "> 1 %s %s %s %s\n\n", name, number, id, password);
    }
    else if (memType == 2)
    {
        fprintf(out_fp, "1.1. ȸ������\n");
        fprintf(out_fp, "> 2 %s %s %s %s\n\n", name, number, id, password);
    }
}
void SignUpUI::submitInfo(SignUp *signup, int memType, string name,
                          string number, string id, string password)
{
    // ȸ������ 2.1 signUpUser()
    signup->signUpUser(userList, memType, name, number, id, password);
}

/*****************************
 2.1. LoginUI Boundary Class
*****************************/
void LoginUI::startInterface(Login *login)
{
    char id[MAX_STRING], password[MAX_STRING], test1[MAX_STRING],
        test2[MAX_STRING];
    fscanf(in_fp, "%s %s", id, password);
    // ���� ����
    currentLoginClient = std::string(id);
    // �α��� 2.1 validUser()
    if (login->validUser(userList, id, password))
    { // true
        fprintf(out_fp, "2.1. �α���\n");
        fprintf(out_fp, "> %s %s\n\n", id, password);
    }
};
/*****************************
    �α׾ƿ� UI Boundary Class
*****************************/
// �α׾ƿ� 1. startInterface
void LogoutUI::startInterface(Logout *logout)
{
    // �α׾ƿ� 2.1 logoutSelect()
    logoutSelect(logout);
};

void LogoutUI::logoutSelect(Logout *logout)
{
    // 2.1.1 �α׾ƿ�
    if (logout->logoutUser())
    { // �α׾ƿ�(������ ����)
        fprintf(out_fp, "2.2. �α׾ƿ�\n");
        fprintf(out_fp, "> %s\n\n", currentLoginClient.c_str());
        currentLoginClient = "None";
    }
}

/*****************************
    ȸ��Ż�� UI Boundary Class
*****************************/
void DropUserUI::startInterface(DropUser *dropUser)
{
    selectDropUser(dropUser, currentLoginClient);
    fprintf(out_fp, "1.2. ȸ��Ż��\n");
    cout << currentLoginClient << endl;
    fprintf(out_fp, "> %s\n\n", &currentLoginClient);
    currentLoginClient = "None";
}
void DropUserUI::selectDropUser(DropUser *dropUser, string id)
{
    dropUser->deleteUser(userList, id);
}
/*************************************
    3.1. ä�� ���� ��� UI Boundary Class
**************************************/
void AddRecruitUI::startInterface(AddRecruit *addRecruit)
{
    // companyNumber�� �ʿ��ؼ� Companyuser�� �Ű������� �Ѱܹ޽��ϴ�.
    char job[MAX_STRING];
    int peopleNum = 0;
    char dueDate[MAX_STRING];
    //    CompanyUser *companyUser;

    fscanf(in_fp, "%s %d %s", job, peopleNum, dueDate);
    // ���� ���� �� ���� ����

    createRecruit(addRecruit, job, peopleNum, dueDate);
    // control�� ���� ����
}

void AddRecruitUI::createRecruit(AddRecruit *addRecruit, string job, int peopleNum, string dueDate)
{
    addRecruit->addRecruit(job, peopleNum, dueDate, currentLoginClient);
    // control �Լ� ȣ��
}

/*****************************************
    3.2. ��� ä�� ���� ��ȸ UI Boundary Class
******************************************/
void ShowRecruitUI::startInterface(ShowRecruit *showRecruit, CompanyUser *companyUser)
{
    getRecruitList(showRecruit, companyUser->getCompanyNumber());
}

void ShowRecruitUI::getRecruitList(ShowRecruit *showRecruit, string companyNumber)
{
    vector<Recruit *> reList = showRecruit->showRecruitList(companyNumber);
    // control �Լ� ȣ��

    for (int i = 0; i < reList.size(); i++)
    {
        cout << "{ [" << reList[i]->getJob() << "] [" << reList[i]->getPeopleNum() << "] [" << reList[i]->getDueDate() << "] }\n";
    }
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
    cout << "채용 정보 검색하기: " << companyName << endl;
    vector<Recruit *> reList = searchRecruitInfoControl->showRecruitInfoList(companyName);
    printOutput(reList);
}

bool SearchRecruitInfoUI::compareByCompanyName(Recruit *recruit1, Recruit *recruit2)
{
    return recruit1->getCompanyName() < recruit2->getCompanyName();
}

void SearchRecruitInfoUI::printOutput(vector<Recruit *> reList)
{

    sort(reList.begin(), reList.end(), SearchRecruitInfoUI::compareByCompanyName);

    for (int i = 0; i < reList.size(); i++)
    {
        cout << "> " << reList[i]->getCompanyName() << " " << reList[i]->getCompanyNumber() << " " << reList[i]->getJob() << " " << reList[i]->getPeopleNum() << " " << reList[i]->getDueDate() << endl;
    }
}

/*************************************
     4.2. 채용 지원 Boundary Class
*************************************/
void ApplyRecruitUI::startInterface(ApplyRecruit *applyRecruit)
{
    char companyNumber[MAX_STRING];
    fscanf(in_fp, "%s", companyNumber);
    Recruit *applied = applyRecruit->addApplication(companyNumber, currentLoginClient);
    printOutput(applied);
}

void ApplyRecruitUI::printOutput(Recruit *applied)
{
    cout << "> " << applied->getCompanyName() << " " << applied->getCompanyNumber() << " " << applied->getJob() << endl;
}

/*************************************
    4.3. ���� ���� ��ȸ UI Boundary Class
**************************************/
void ShowApplyUI::startInterface(ShowApply *showApply, NormalUser *normalUser)
{
    selectApplyList(showApply, normalUser);
}

void ShowApplyUI::selectApplyList(ShowApply *showApply, NormalUser *normalUser)
{
    showApply->showApplyList(normalUser);
}

/*************************************
  4.4. CancelApplyUI Boundary Class
*************************************/
void CancelApplyUI::startInterface(CancelApply *cancelApply)
{
    int userType = 0;
    char name[MAX_STRING], number[MAX_STRING], id[MAX_STRING], password[MAX_STRING];
    fscanf(in_fp, "%d %s %s %s %s", &userType, name, number, id, password); //
    // ���� ���� �о����
    // ȸ������ 2. submitInfo()
    //    submitInfo(signUp, userType, name, number, id, password);
}

/*************************************
   5.1. 지원 정보 통계 Boundary Class
*************************************/
void SelectRecruitStatisticsUI::startInterface(SelectRecruitStatistics *selectRecruitStatisticsControl) {
    selectRecruitStatistics(selectRecruitStatisticsControl, currentLoginClient);
}

void SelectRecruitStatisticsUI::selectRecruitStatistics(SelectRecruitStatistics *selectRecruitStatisticsControl, string currentLoginClient) {
//    RecruitInfoCollection rc;
//    vector<Recruit *> Rlist = rc.getRecruitListByCompany(currentLoginClient);
//    selectRecruitStatisticsControl->get
}


int main()
{
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    if (in_fp == nullptr)
    {
        cout << "Failed to open the input file." << endl;
        return 1; // or handle the error in an appropriate way
    }
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");
    // Use the input and output file streams for further operations
    doTask();
    // Close the file streams when you're done

    return 0;
}

void doTask()
{
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    // Read two integers from the file

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
                // signup �����ڸ� �����ϸ鼭 ����
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
                // ä�� ����
                cout << "4.2. 채용 지원" << endl;
                ApplyRecruit applyRecruit;
                break;
            }
            case 3:
            {
                // ���� ���� ��ȸ
                cout << "4.3. 지원 정보 조회" << endl;
                break;
            }
            case 4:
            {
                // ���� ���
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
                // ���� ���� ���
                cout << "5.1. 지원 정보 통계" << endl;
                cout << "현재 user Type: " << userList.getUserTypeById(currentLoginClient) << endl;
                // ���� ������ Ÿ��
                int currentUserType = userList.getUserTypeById(currentLoginClient);
                if (currentUserType == 1)
                {
                    cout << "5.1. 회사 회원 지원 정보 통계" << endl;
                    SelectRecruitStatistics selectRecruitStatistics;

                }
                else if (currentUserType == 2)
                {
                    cout << "5.1. 일반 회원 지원 정보 통계" << endl;
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

void program_exit() { cout << "6.1. ����"; }