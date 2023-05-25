#define _CRT_SECURE_NO_WARNINGS
// #pragma warning(disable : 4996)
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

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
using namespace std;

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void program_exit();

FILE* in_fp, * out_fp;
string currentLoginClient = "None";
UserCollection userList;
int currentUserType = 0;



/*****************************
  1.1. SignUpUI Boundary Class
*****************************/
// ȸ������ 1. startInterface()
void SignUpUI::startInterface(SignUp* signup) {
    int memType = 0;
    char name[MAX_STRING], number[MAX_STRING], id[MAX_STRING],
        password[MAX_STRING];

    fscanf(in_fp, "%d %s %s %s %s", &memType, name, number, id, password);  //
    // ���� ���� �о����
    // ȸ������ 2. submitInfo()
    submitInfo(signup, memType, name, number, id, password);
    if (memType == 1) {
        fprintf(out_fp, "1.1. ȸ������\n");
        fprintf(out_fp, "> 1 %s %s %s %s\n\n", name, number, id, password);
    }
    else if (memType == 2) {
        fprintf(out_fp, "1.1. ȸ������\n");
        fprintf(out_fp, "> 2 %s %s %s %s\n\n", name, number, id, password);
    }
}
void SignUpUI::submitInfo(SignUp* signup, int memType, string name,
    string number, string id, string password) {
    // ȸ������ 2.1 signUpUser()
    signup->signUpUser(userList, memType, name, number, id, password);

}

/*****************************
 2.1. LoginUI Boundary Class
*****************************/
void LoginUI::startInterface(Login* login) {
    char id[MAX_STRING], password[MAX_STRING], test1[MAX_STRING],
        test2[MAX_STRING];
    fscanf(in_fp, "%s %s", id, password);
    // ���� ����
    currentLoginClient = std::string(id);
    // �α��� 2.1 validUser()
    if (login->validUser(userList, id, password)) {  // true
        fprintf(out_fp, "2.1. �α���\n");
        fprintf(out_fp, "> %s %s\n\n", id, password);
    }
};
/*****************************
    �α׾ƿ� UI Boundary Class
*****************************/
//�α׾ƿ� 1. startInterface
void LogoutUI::startInterface(Logout* logout) {
    // �α׾ƿ� 2.1 logoutSelect()
    logoutSelect(logout);
};

void LogoutUI::logoutSelect(Logout* logout) {
    //2.1.1 �α׾ƿ�
    if (logout->logoutUser()) { //�α׾ƿ�(������ ����)
        fprintf(out_fp, "2.2. �α׾ƿ�\n");
        fprintf(out_fp, "> %s\n\n", currentLoginClient.c_str());
        currentLoginClient = "None";
    }
}

/*****************************
    ȸ��Ż�� UI Boundary Class
*****************************/
void DropUserUI::startInterface(DropUser* dropUser) {
    selectDropUser(dropUser, currentLoginClient);
    fprintf(out_fp, "1.2. ȸ��Ż��\n");
    cout << currentLoginClient << endl;
    fprintf(out_fp, "> %s\n\n", currentLoginClient);
    currentLoginClient = "None";
}
void DropUserUI::selectDropUser(DropUser* dropUser, string id) {
    dropUser->deleteUser(userList, id);
}
/*************************************
    3.1. ä�� ���� ��� UI Boundary Class
**************************************/
void AddRecruitUI::startInterface(AddRecruit* addRecruit, CompanyUser* companyUser)
{
    // companyNumber�� �ʿ��ؼ� Companyuser�� �Ű������� �Ѱܹ޽��ϴ�.
    char job[MAX_STRING];
    int peopleNum = 0;
    char dueDate[MAX_STRING];
    //    CompanyUser *companyUser;

    fscanf(in_fp, "%s %d %s", job, peopleNum, dueDate);
    // ���� ���� �� ���� ����

    createRecruit(addRecruit, job, peopleNum, dueDate, companyUser);
    // control�� ���� ����
}

void AddRecruitUI::createRecruit(AddRecruit* addRecruit, string job, int peopleNum, string dueDate, CompanyUser* companyUser)
{
    addRecruit->addRecruit(job, peopleNum, dueDate, companyUser);
    // control �Լ� ȣ��
}

/*****************************************
    3.2. ��� ä�� ���� ��ȸ UI Boundary Class
******************************************/
void ShowRecruitUI::startInterface(ShowRecruit* showRecruit, CompanyUser* companyUser)
{
    getRecruitList(showRecruit, companyUser->getCompanyNumber());
}

void ShowRecruitUI::getRecruitList(ShowRecruit* showRecruit, string companyNumber)
{
    vector<Recruit*> reList = showRecruit->showRecruitList(companyNumber);
    // control �Լ� ȣ��

    for (int i = 0; i < reList.size(); i++)
    {
        cout << "{ [" << reList[i]->getJob() << "] [" << reList[i]->getPeopleNum() << "] [" << reList[i]->getDueDate() << "] }\n";
    }
}

/*************************************
    4.3. ���� ���� ��ȸ UI Boundary Class
**************************************/
void ShowApplyUI::startInterface(ShowApply* showApply, NormalUser* normalUser)
{
    selectApplyList(showApply, normalUser);
}

void ShowApplyUI::selectApplyList(ShowApply* showApply, NormalUser* normalUser)
{
    showApply->showApplyList(normalUser);
}

/*************************************
  4.4. CancelApplyUI Boundary Class
*************************************/
void CancelApplyUI::startInterface(CancelApply* cancelApply) {
    int userType = 0;
    char name[MAX_STRING], number[MAX_STRING], id[MAX_STRING], password[MAX_STRING];
    fscanf(in_fp, "%d %s %s %s %s", &userType, name, number, id, password);  //
    // ���� ���� �о����
    // ȸ������ 2. submitInfo()
//    submitInfo(signUp, userType, name, number, id, password);
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

    while (!is_program_exit) {
        fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);

        switch (menu_level_1) {
        case 1: {
            switch (menu_level_2) {
            case 1: {
                // ȸ������
                // signup �����ڸ� �����ϸ鼭 ����
                cout << "1.1.ȸ������" << endl;
                SignUp signUp;
                break;
            }
            case 2: {
                // ȸ�� Ż��
                cout << "1.2. ȸ��Ż��" << endl;
                DropUser dropUser;
                break;
            }
            }
            break;
        }
        case 2: {
            switch (menu_level_2) {
            case 1: {
                // �α���
                cout << "2.1. �α���" << endl;
                Login login;
                break;
            }
            case 2: {
                // �α׾ƿ�
                cout << "2.2. �α׾ƿ�" << endl;
                Logout logout;
                break;
            }
            }
            break;
        }
        case 3: {
            switch (menu_level_2) {
            case 1: {
                // ä�� ���� ���
                cout << "3.1. ä�� ���� ���" << endl;
                break;
            }
            case 2: {
                // ��ϵ� ä�� ���� ��ȸ
                cout << "3.2. ��ϵ� ä�� ���� ��ȸ" << endl;
                break;
            }
            }
            break;
        }
        case 4: {
            switch (menu_level_2) {
            case 1: {
                // ä�� ���� �˻�
                cout << "4.1. ä�� ���� �˻�" << endl;
                break;
            }
            case 2: {
                // ä�� ����
                cout << "4.2. ä�� ����" << endl;
                break;
            }
            case 3: {
                // ���� ���� ��ȸ
                cout << "4.3. ���� ���� ��ȸ" << endl;
                break;
            }
            case 4: {
                // ���� ���
                cout << "���� �α��� �� ��" << currentLoginClient << endl;
                cout << "4.4. ���� ���" << endl;
                break;
            }
            }
            break;
        }
        case 5: {
            switch (menu_level_2) {
            case 1: {
                //���� ���� ���
                cout << "5.1. ���� ���� ���" << endl;
                cout << "���� user Type: " << userList.getUserTypeById(currentLoginClient) << endl;
                //���� ������ Ÿ��
                int currentUserType = userList.getUserTypeById(currentLoginClient);
                if (currentUserType == 1) {
                    //ȸ�� ȸ�� ���� ���� ���
                    cout << "ȸ�� ȸ�� ���� ���� ���" << endl;
                    CancelApply cancelApply;
                }
                else if (currentUserType == 2) {
                    //�Ϲ� ȸ�� ���� ���� ���
                }
                else {
                    break;
                }
                break;
            }
            }
            break;
        }
        case 6: {
            switch (menu_level_2) {
            case 1: {
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