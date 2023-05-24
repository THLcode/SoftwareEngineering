//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_LOGIN_H
#define HOMEWORK3_2_LOGIN_H
#include "../UserCollection.h"
#include <iostream>
#include <vector>
#include "LoginUI.h"

class LoginUI;

class Login{
private:
    LoginUI* logInUIRef; // UI Class를 저장할 변수
public:
    Login(); // 생성자
    void validUser();
    LoginUI* loginUI(); // getter
};
#endif //HOMEWORK3_2_LOGIN_H
