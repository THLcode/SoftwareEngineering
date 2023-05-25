
#include "SignUp.h"

#include "UserCollection.h"
// SignUpUI *SignUp::signUpUI(){
//     return this->signupUIRef;
// }
SignUp::SignUp() {
    SignUpUI signUpUI;

    signUpUI.startInterface(this);
}

void SignUp::signUpUser(UserCollection& userList, int userType, string name,
    string number, string id, string password) {
    // ȸ��ȸ�� �߰�
    if (userType == 1) {
        userList.signUpCompanyUser(userType, name, number, id, password);
    }
    // �Ϲ�ȸ�� �߰�
    else if (userType == 2) {
        // NormalUser normalUser(name, number, id, password);
        // �Ϲ� ȸ���� UserList�� �����ϰ� ���� ���
        userList.signUpNormalUser(userType, name, number, id, password);
    }
}