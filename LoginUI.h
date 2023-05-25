#ifndef HOMEWORK3_2_LOGINUI_H
#define HOMEWORK3_2_LOGINUI_H
#include <iostream>
#include <string>

#include "Login.h"

class Login;

using namespace std;
class LoginUI {
private:
    // Login *loginControlRef;
public:
    void startInterface(Login* login);
    // void login(Login*, string, string);
    // Login* loginControl();
};
#endif  // HOMEWORK3_2_LOGINUI_H