//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_USERCOLLECTION_H
#define HOMEWORK3_2_USERCOLLECTION_H

#include <iostream>
#define MAX_COUNT 100
#include "User.h"
using namespace std;
class UserCollection
{
private:
    User *userList[MAX_COUNT];
    int clientNumber;

public:
    UserCollection() : clientNumber(0){};
    void signUpNormalUser(int, string, string, string, string);
    void signUpCompanyUser(int, string, string, string, string);
    bool validUser(string, string);
    int getClientNumber();
    int getUserTypeById(string);
    void deleteUsers(string id);
    CompanyUser *getUser(string id);
};
#endif // HOMEWORK3_2_USERCOLLECTION_H
