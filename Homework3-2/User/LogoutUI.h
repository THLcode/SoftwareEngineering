//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_LOGOUTUI_H
#define HOMEWORK3_2_LOGOUTUI_H
#include "Logout.h"
#include <iostream>
#include <string>

using namespace std;
class Logout;

class LogoutUI {
private:
    Logout *logoutControlRef; // Control Class의 레퍼런스를 저장할 변수
public:
    LogoutUI(Logout* logoutControl);
    void logoutSelect();
    Logout* LogoutControl(); // getter
};
#endif //HOMEWORK3_2_LOGOUTUI_H