#include "Login.h"
#include "LoginUI.h"
#include "../UserCollection.h"
Login::Login() {
    LoginUI loginUI;

    loginUI.startInterface(this);
}

// 로그인 2.1 validUser()
bool Login::validUser(UserCollection userList, string id, string password) {
    return userList.validUser(id, password);
}
