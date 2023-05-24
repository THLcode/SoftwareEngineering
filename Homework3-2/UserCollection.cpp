#include "UserCollection.h"

#include "CompanyUser.h"
#include "NormalUser.h"

void UserCollection::signUpNormalUser(int userType, string name, string number, string id,
                                      string password) {
    User* pUser = NULL;
    pUser = new NormalUser(userType, name, number, id, password);
    // 일반 회원을 userList에 저장
    userList[clientNumber++] = pUser;
}
void UserCollection::signUpCompanyUser(int userType, string name, string number, string id,
                                       string password) {
    User* pUser = NULL;
    pUser = new CompanyUser(userType, name, number, id, password);
    // 회사 회원을 userList에 저장
    userList[clientNumber++] = pUser;
}

bool UserCollection::validUser(string id, string password) {
    for (int i = 0; i < clientNumber; i++) {
        if (userList[i]->getUserId() == id &&
            userList[i]->getUserPw() == password) {
            return true;
        }
    }
    return false;
}
int UserCollection::getClientNumber() { return clientNumber; }

int UserCollection::getUserTypeById(string currentUser){
    for (int i = 0; i < clientNumber; i++) {
        if (userList[i]->getUserId() == currentUser) {
            return userList[i]->getUserType();
        }
    }
    return 0;
}