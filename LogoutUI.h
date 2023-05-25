#ifndef HOMEWORK3_2_LOGOUTUI_H
#define HOMEWORK3_2_LOGOUTUI_H
#include "Logout.h"
#include <iostream>
#include <string>

using namespace std;
class Logout;

class LogoutUI {
private:
    Logout* logoutControlRef; // Control Class의 레퍼런스를 저장할 변수
public:
    LogoutUI();
    void startInterface(Logout*);
    void logoutSelect(Logout*);
    // Logout* LogoutControl(); // getter
};
#endif //HOMEWORK3_2_LOGOUTUI_H