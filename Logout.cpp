#include "Logout.h"

Logout::Logout() {
    LogoutUI logoutUI;

    logoutUI.startInterface(this);
}

bool Logout::logoutUser() {
    return true;
}

// void Logout::userLogout(){

// } // UI�� �̿��ϴ� Control�� �α׾ƿ� �Լ�

// LogoutUI* Logout::logoutUI(){
//     return this->logOutUIRef;
// }