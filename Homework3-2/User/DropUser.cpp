//
// Created by 이태휘 on 2023/05/24.
//
#include "DropUser.h"

DropUser::DropUser() {
    DropUserUI dropUserUI;

    dropUserUI.startInterface(this);
}

void DropUser::deleteUser(UserList& userList, string id) {
    userList.deleteUsers(id);
}
// DropUserUI* DropUser::DropUserUI(){
//     return this->dropUserUiRef;
// }