//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_LOGOUT_H
#define HOMEWORK3_2_LOGOUT_H
#include "../UserCollection.h"
#include "LogoutUI.h"
#include <iostream>
#include <vector>

class LogoutUI;

class Logout{
private:
    LogoutUI* logOutUIRef; // UI Class를 저장할 변수
public:
    Logout(); // 생성자
    bool logoutUser();
    // void userLogout(); // UI가 이용하는 Control의 로그아웃 함수
    // LogoutUI* logoutUI();

};
#endif //HOMEWORK3_2_LOGOUT_H
