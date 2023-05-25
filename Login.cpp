#include "Login.h"

#include "LoginUI.h"
#include "UserCollection.h"
Login::Login() {
    LoginUI loginUI;

    loginUI.startInterface(this);
}

bool Login::validUser(UserCollection userList, string id, string password) {
    return userList.validUser(id, password);
}

// UI·Î ³Ñ±è
//  LoginUI* Login::loginUI(){
//      return this->logInUIRef;
//  }