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

void UserCollection::deleteUsers(string id) {
    for (int i = 0; i < clientNumber; i++) {
        if (userList[i]->getUserId() == id) {
            delete userList[i];  // 메모리 해제
            // 삭제된 회원 다음의 회원들을 앞으로 한 칸씩 이동
            for (int j = i; j < clientNumber - 1; j++) {
                userList[j] = userList[j + 1];
            }
            clientNumber--;  // 클라이언트 수 감소
            break;  // 회원을 찾았으므로 반복문 종료
        }
    }
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