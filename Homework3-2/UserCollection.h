#ifndef HOMEWORK3_2_USERCOLLECTION_H
#define HOMEWORK3_2_USERCOLLECTION_H
#include <iostream>
#include <string>
#include <vector>
#include "NormalUser.h"
#include "CompanyUser.h"

class UserCollection {
private:
    vector<User*> userList;
public:
    int signUpNormalUser(string name, int securityNumber, string id, string password);
    int signUpCompanyUser(string name, int companyNumber, string id, string password);
    void dropUser(string id); 
    //void logOutUser();
    User* validUser(string id, string password);
//    void userStateChange(User* user); //이게머얌....
    User* getUserByName(string name);
    CompanyUser* getUserByCompanyNumber(int number);
    vector<User*> getUserList();

};

#endif //HOMEWORK3_2_USERCOLLECTION_H
