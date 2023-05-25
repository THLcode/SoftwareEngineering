#ifndef HOMEWORK3_2_SIGNUP_H
#define HOMEWORK3_2_SIGNUP_H
#include <iostream>

#include "SignUpUI.h"
#include "../UserCollection.h"
using namespace std;
//class SignUpUI;

class SignUp {
   public:
    SignUp();  // 생성자
    void signUpUser(UserCollection&, int, string, string, string, string);
};

#endif
