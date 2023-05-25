#include "DropUser.h"
#include "DropUserUI.h"
#include "../UserCollection.h"
DropUser::DropUser() {
    DropUserUI dropUserUI;

    dropUserUI.startInterface(this);
}

// 회원탈퇴 2.1 deleteUser()
void DropUser::deleteUser(UserCollection& userList, string id) {
    userList.deleteUsers(id);
}