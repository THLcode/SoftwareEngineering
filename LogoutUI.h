#ifndef HOMEWORK3_2_LOGOUTUI_H
#define HOMEWORK3_2_LOGOUTUI_H
#include "Logout.h"
#include <iostream>
#include <string>

using namespace std;
class Logout;

class LogoutUI {
private:
    Logout* logoutControlRef; // Control Class�� ���۷����� ������ ����
public:
    LogoutUI();
    void startInterface(Logout*);
    void logoutSelect(Logout*);
    // Logout* LogoutControl(); // getter
};
#endif //HOMEWORK3_2_LOGOUTUI_H