#ifndef HOMEWORK3_2_LOGIN_H
#define HOMEWORK3_2_LOGIN_H
#include <iostream>
#include <vector>

#include "../UserCollection.h"
#include "LoginUI.h"
//class LoginUI;

class Login {
   public:
    Login();  // 생성자
    bool validUser(UserCollection, string, string);
};
#endif 
