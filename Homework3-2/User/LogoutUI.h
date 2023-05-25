#ifndef HOMEWORK3_2_LOGOUTUI_H
#define HOMEWORK3_2_LOGOUTUI_H
#include "Logout.h"
#include <iostream>
#include <string>

using namespace std;
class Logout;

class LogoutUI {
private:
    Logout *logoutControlRef;
public:
    void startInterface(Logout*);
    void logoutSelect(Logout*);
};
#endif
