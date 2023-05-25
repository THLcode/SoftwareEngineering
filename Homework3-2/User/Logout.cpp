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

// void Logout::userLogout(){

// } // UI가 이용하는 Control의 로그아웃 함수

// LogoutUI* Logout::logoutUI(){
//     return this->logOutUIRef;
// }