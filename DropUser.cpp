#include "DropUser.h"
#include "DropUserUI.h"
#include "UserCollection.h"
DropUser::DropUser() {
    DropUserUI dropUserUI;

    dropUserUI.startInterface(this);
}

void DropUser::deleteUser(UserCollection& userList, string id) {
    userList.deleteUsers(id);
}
// DropUserUI* DropUser::DropUserUI(){
//     return this->dropUserUiRef;
// }