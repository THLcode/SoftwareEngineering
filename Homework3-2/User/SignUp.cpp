#include "SignUp.h"
#include "../UserCollection.h"

SignUp::SignUp() {
    SignUpUI signUpUI;

    signUpUI.startInterface(this);
}

// 회원가입 2.1 signUpUser()
void SignUp::signUpUser(UserCollection& userList, int userType, string name,
                        string number, string id, string password) {
    userList.signUpUser(userType, name, number, id, password);
}