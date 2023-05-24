#include "UserCollection.h"

int UserCollection::signUpNormalUser(string name, int securityNumber, string id, string password){
    for (auto it = userList.begin(); it != userList.end(); ++it) {
        if ((*it)->getId() == id) {
            return -1;
        }
    }
    NormalUser* newUser = new NormalUser(name, securityNumber, id, password);
    userList.push_back(newUser);
    return 0;
}

int UserCollection::signUpCompanyUser(string name, int companyNumber, string id, string password) {
    for (auto it = userList.begin(); it != userList.end(); ++it) {
        if ((*it)->getId() == id) {
            return -1;
        }
    }
    CompanyUser* newUser = new CompanyUser(name, companyNumber, id, password);
    userList.push_back(newUser);
    return 0;
}

void UserCollection::dropUser(string id) { //바까야댈것가타염
    extern int isLogin;
    extern User* currentUser; // main 함수에 선언된 isLogin, currentLoginUser 사용
    for (auto it = userList.begin(); it != userList.end(); ++it) { // userList vector에 저장 된 모든 정보를 순회
        if ((*it)->getId() == id) { // 인자로 받은 지울 id와 같다면
            delete* it; // 메모리 확보
            userList.erase(it); // userLiddst에서 삭제
            isLogin = 0; // 회원이 탈퇴하였으므로 현재 로그인 상태를 0으로 설정
            currentUser = nullptr; // 회원이 탈퇴하였으므로 현재 유저 상태를 null로 설정
            return;
        }
    }
}

User* UserCollection::validUser(string id, string password) { //바꾸댜
    for (const auto& user : userList) {
        if (user->getId() == id && user->getPW() == pw) {
            return user;
        }
    }
    return nullptr;
}
//    void userStateChange(User* user); //이게머얌....
User* UserCollection::getUserByName(string name) {
    for (User* user : userList) {
        if (name == user->getName())
            return user;
    }
    return nullptr;
}
CompanyUser* UserCollection::getUserByCompanyNumber(int number) {
    for (User* user : userList) {
        CompanyUser* CUser = (CompanyUser*)user;
        if (number == CUser->getCompanyNumber())
            return CUser;
    }
    return nullptr;
}
