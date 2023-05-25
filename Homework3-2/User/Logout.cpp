#include "Logout.h"

Logout::Logout() {
    LogoutUI logoutUI;

    logoutUI.startInterface(this);
}

// 로그아웃 2.1 logoutUser
bool Logout::logoutUser() {
    return true;
}