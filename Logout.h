#ifndef HOMEWORK3_2_LOGOUT_H
#define HOMEWORK3_2_LOGOUT_H
#include "UserCollection.h"
#include "LogoutUI.h"
#include <iostream>
#include <vector>

class LogoutUI;

class Logout {
private:
    LogoutUI* logOutUIRef; // UI Class�� ������ ����
public:
    Logout(); // ������
    bool logoutUser();
    // void userLogout(); // UI�� �̿��ϴ� Control�� �α׾ƿ� �Լ�
    // LogoutUI* logoutUI();

};
#endif //HOMEWORK3_2_LOGOUT_H