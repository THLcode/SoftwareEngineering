#ifndef HOMEWORK3_2_SIGNUP_H
#define HOMEWORK3_2_SIGNUP_H
#include <iostream>

#include "SignUpUI.h"
#include "UserCollection.h"
using namespace std;
//class SignUpUI;

class SignUp {
private:
    // UI Ŭ���� ������
    //  SignUpUI* signupUIRef;
public:
    SignUp();  // ������
    void signUpUser(UserCollection&, int, string, string, string, string);
    // SignUpUI * signUpUI();
};

#endif  // HOMEWORK3_2_SIGNUP_H