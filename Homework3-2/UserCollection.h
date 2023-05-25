#ifndef HOMEWORK3_2_USERCOLLECTION_H
#define HOMEWORK3_2_USERCOLLECTION_H

#include <iostream>
#define MAX_COUNT 100
#include "User.h"
#include "CompanyUser.h"
#include "NormalUser.h"
using namespace std;
class UserCollection
{
private:
    static User* userList[MAX_COUNT];
    static int clientNumber;

public:
    UserCollection();
    void signUpNormalUser(int, string, string, string, string);
    void signUpCompanyUser(int, string, string, string, string);
    bool validUser(string, string);
    int getClientNumber();
    int getUserTypeById(string);
    void deleteUsers(string id);
    CompanyUser* getUser(string id);
    NormalUser* getNormalUser(string id);
};
#endif