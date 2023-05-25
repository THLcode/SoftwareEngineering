#include "UserCollection.h"

#include "CompanyUser.h"
#include "NormalUser.h"

UserCollection::UserCollection(){}

// 회원가입 2.1.1 signUpUser() 
void UserCollection::signUpUser(int userType, string name, string number, string id,
    string password)
{
    if (userType == 1) {
        User* pUser = NULL;
        pUser = new CompanyUser(userType, name, number, id, password);
        // 회사 회원을 userList에 저장
        userList[clientNumber++] = pUser;
    }
    else if (userType == 2) {
        User* pUser = NULL;
        pUser = new NormalUser(userType, name, number, id, password);
        // 일반 회원을 userList에 저장
        userList[clientNumber++] = pUser;
    }
}

// 회원탈퇴 2.1.1 deleteUsers()
void UserCollection::deleteUsers(string id)
{
    for (int i = 0; i < clientNumber; i++)
    {
        if (userList[i]->getUserId() == id)
        {
            delete userList[i]; // 메모리 해제
            // 삭제된 회원 다음의 회원들을 앞으로 한 칸씩 이동
            for (int j = i; j < clientNumber - 1; j++)
            {
                userList[j] = userList[j + 1];
            }
            clientNumber--; // 클라이언트 수 감소
            break;          // 회원을 찾았으므로 반복문 종료
        }
    }
}

// 로그인 2.1.1 validUser()
bool UserCollection::validUser(string id, string password)
{
    for (int i = 0; i < clientNumber; i++)
    {
        if (userList[i]->getUserId() == id &&
            userList[i]->getUserPw() == password)
        {
            return true;
        }
    }
    return false;
}


int UserCollection::getClientNumber() { return clientNumber; }

int UserCollection::getUserTypeById(string currentUser)
{
    for (int i = 0; i < clientNumber; i++)
    {
        if (userList[i]->getUserId() == currentUser)
        {
            return userList[i]->getUserType();
        }
    }
    return 0;
}

CompanyUser* UserCollection::getUser(string id)
{
    for (int i = 0; i < clientNumber; i++)
    {
        if (userList[i]->getUserId() == id)
        {
            return static_cast<CompanyUser*>(userList[i]);
        }
    }
    return nullptr;
}

NormalUser* UserCollection::getNormalUser(string id)
{
    for (int i = 0; i < clientNumber; i++)
    {

        if (userList[i]->getUserId() == id)
        {
            return static_cast<NormalUser*>(userList[i]);
        }
    }
    return nullptr;
}