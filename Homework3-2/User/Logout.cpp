//
// Created by 이태휘 on 2023/05/24.
//
#include "Logout.h"

Logout::Logout() {
    LogoutUI logoutUI;

    logoutUI.startInterface(this);
}

bool Logout::logoutUser() {
    return true;
}