//
// Created by 이태휘 on 2023/05/24.
//
#include "Login.h"

#include "LoginUI.h"
#include "../UserCollection.h"
Login::Login() {
    LoginUI loginUI;

    loginUI.startInterface(this);
}

bool Login::validUser(UserCollection userList, string id, string password) {
    return userList.validUser(id, password);
}

// UI로 넘김
//  LoginUI* Login::loginUI(){
//      return this->logInUIRef;
//  }
