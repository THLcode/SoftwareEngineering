#include "UserCollection.h"

#include "CompanyUser.h"
#include "NormalUser.h"

void UserCollection::signUpNormalUser(int userType, string name, string number, string id,
    string password) {
    User* pUser = NULL;
    pUser = new NormalUser(userType, name, number, id, password);
    // �Ϲ� ȸ���� userList�� ����
    userList[clientNumber++] = pUser;
}
void UserCollection::signUpCompanyUser(int userType, string name, string number, string id,
    string password) {
    User* pUser = NULL;
    pUser = new CompanyUser(userType, name, number, id, password);
    // ȸ�� ȸ���� userList�� ����
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
            delete userList[i];  // �޸� ����
            // ������ ȸ�� ������ ȸ������ ������ �� ĭ�� �̵�
            for (int j = i; j < clientNumber - 1; j++) {
                userList[j] = userList[j + 1];
            }
            clientNumber--;  // Ŭ���̾�Ʈ �� ����
            break;  // ȸ���� ã�����Ƿ� �ݺ��� ����
        }
    }
}
int UserCollection::getClientNumber() { return clientNumber; }

int UserCollection::getUserTypeById(string currentUser) {
    for (int i = 0; i < clientNumber; i++) {
        if (userList[i]->getUserId() == currentUser) {
            return userList[i]->getUserType();
        }
    }
    return 0;
}