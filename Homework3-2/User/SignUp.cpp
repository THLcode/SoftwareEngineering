//
// Created by 이태휘 on 2023/05/24.
//
#include "SignUp.h"

#include "../UserCollection.h"
// SignUp::SignUp() {

// }
// void SignUp::signUpUser(){

// }

// SignUpUI *SignUp::signUpUI(){
//     return this->signupUIRef;
// }
SignUp::SignUp() {
    SignUpUI signUpUI;

    signUpUI.startInterface(this);
}

void SignUp::signUpUser(UserCollection& userList, int userType, string name,
                        string number, string id, string password) {
    // 회사회원 추가
    if (userType == 1) {
        userList.signUpCompanyUser(userType, name, number, id, password);
    }
    // 일반회원 추가
    else if (userType == 2) {
        // NormalUser normalUser(name, number, id, password);
        // 일반 회원을 UserList에 저장하고 싶은 경우
        userList.signUpNormalUser(userType, name, number, id, password);
    }
}