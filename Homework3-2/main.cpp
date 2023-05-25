//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable : 4996)
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

#include "User.h"
#include "User/Login.h"
#include "User/LoginUI.h"
#include "User/SignUp.h"
#include "User/SignUpUI.h"
#include "UserCollection.h"
#include "Recruit/CancelApply.h"
#include "Recruit/CancelApplyUI.h"
using namespace std;

#define MAX_STRING 32
#define INPUT_FILE_NAME "/Users/taehwi/Downloads/hw3/input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void program_exit();


FILE *in_fp, *out_fp;
string currentLoginClient = "None";
UserCollection userList;
int currentUserType = 0;


/*****************************
 CancelApply UI Boundary Class
*****************************/
void CancelApplyUI::startInterface(CancelApply* cancelApply) {
    int userType = 0;
    char name[MAX_STRING], number[MAX_STRING], id[MAX_STRING], password[MAX_STRING];
    fscanf(in_fp, "%d %s %s %s %s", &userType, name, number, id, password);  //
    // 가입 유형 읽어오기
    // 회원가입 2. submitInfo()
    submitInfo(signUp, userType, name, number, id, password);
}

/*****************************
      UI Boundary Class
*****************************/
// 회원가입 1. startInterface()
void SignUpUI::startInterface(SignUp* signUp) {
    int userType = 0;
    char name[MAX_STRING], number[MAX_STRING], id[MAX_STRING], password[MAX_STRING];
    fscanf(in_fp, "%d %s %s %s %s", &userType, name, number, id, password);  //
    // 가입 유형 읽어오기
    // 회원가입 2. submitInfo()
    submitInfo(signUp, userType, name, number, id, password);
}
void SignUpUI::submitInfo(SignUp* signUp, int userType, string name,
                          string number, string id, string password) {
    // 회원가입 2.1 signUpUser()
    signUp->signUpUser(userList, userType, name, number, id, password);
}

/*****************************
    ȸ��Ż�� UI Boundary Class
*****************************/
void LoginUI::startInterface(Login* login) {
    char id[MAX_STRING], password[MAX_STRING], test1[MAX_STRING],
        test2[MAX_STRING];
    fscanf(in_fp, "%s %s %s %s", test1, test2, id, password);
    // 정보 저장
    currentLoginClient = id;
    // 로그인 2.1 validUser()
    if (login->validUser(userList, id, password)) {  // true
        std::cout << "로그인성공" << endl;
    } else {
        std::cout << "로그인실패" << endl;
    }
};
/*****************************
    �α��� UI Boundary Class
*****************************/

/*****************************
    �α׾ƿ� UI Boundary Class
*****************************/

int main() {
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    if (in_fp == nullptr) {
        cout << "Failed to open the input file." << endl;
        return 1; // or handle the error in an appropriate way
    }
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");
    // Use the input and output file streams for further operations
    doTask();
    // Close the file streams when you're done

    return 0;
}

void doTask() {
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    // Read two integers from the file

    while (!is_program_exit) {
        fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);

        switch (menu_level_1) {
            case 1: {
                switch (menu_level_2) {
                    case 1: {
                        // 회원가입
                        // signup 생성자를 실행하면서 시작
                        SignUp signUp;
                        break;
                    }
                    case 2: {
                        //회원 탈퇴
                        break;
                    }
                }
            }
            case 2: {
                switch (menu_level_2) {
                    case 1: {
                        //로그인
                        Login login;
                    }
                    case 2 : {
                        //로그아웃
                    }
                }
            }
            case 3 : {
                switch (menu_level_2){
                    case 1 : {
                        //채용 정보 등록
                    }
                    case 2 : {
                        //등록된 채용 정보 조회
                    }
                }
            }
            case 4: {
                switch (menu_level_2) {
                    case 1: {
                        //채용 정보 검색
                    }
                    case 2 : {
                        // 채용 지원
                    }
                    case 3 : {
                        // 지원 정보 조회
                    }
                    case 4 : {
                        //지원 취소
                        cout << "현재 로그인 된 고객" << currentLoginClient << endl;
                    }
                }
            }
            case 5: {
                switch (menu_level_2) {
                    case 1: {
                        //지원 정보 통계
                        cout << "현재 user Type: " << userList.getUserTypeById(currentLoginClient) << endl;
                        //현재 유저의 타입
                        int currentUserType = userList.getUserTypeById(currentLoginClient);
                        if(currentUserType == 1){
                            //회사 회원 지원 정보 통계
                            cout << "회사 회원 지원 정보 통계" << endl;
                            CancelApply cancelApply;
                        }
                        else if (currentUserType == 2){
                            //일반 회원 지원 정보 통계
                        }
                        else{
                            break;
                        }
                    }
                }

            }
            case 6: {
                switch (menu_level_2) {
                    case 1: {
                        program_exit();
                        is_program_exit = 1;
                        break;;
                    }
                }
            }
        }
    }
}

void program_exit() { cout << "6.1. 종료"; }