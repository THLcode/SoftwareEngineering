//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_LOGINUI_H
#define HOMEWORK3_2_LOGINUI_H
#include "Login.h"
#include <iostream>
#include <string>

using namespace std;
class Login;

class LoginUI {
private:
    Login *loginControlRef;
public:
    LoginUI(Login* loginControlRef);
    void startInterface();
    void login();
    Login* loginControl();
};
#endif //HOMEWORK3_2_LOGINUI_H
