#ifndef HOMEWORK3_2_LOGIN_H
#define HOMEWORK3_2_LOGIN_H
#include <iostream>
#include <vector>

#include "UserCollection.h"
#include "LoginUI.h"
//class LoginUI;

class Login {
private:
    // LoginUI* logInUIRef; // UI Class�� ������ ����
public:
    Login();  // ������
    bool validUser(UserCollection, string, string);
    // LoginUI* loginUI();  // getter
};
#endif  // HOMEWORK3_2_LOGIN_H