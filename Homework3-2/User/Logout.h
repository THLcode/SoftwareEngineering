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

};
#endif
