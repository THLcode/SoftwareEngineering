#ifndef HOMEWORK3_2_SINGUPUI_H
#define HOMEWORK3_2_SINGUPUI_H
#include <iostream>

#include "SignUp.h"
class SignUp;

using namespace std;

class SignUpUI {
private:
    // Control Ŭ���� ������
    // SignUp* signUpControlRef;

public:
    // SignUpUI(SignUp* signupControlRef);  // �����ڸ� ���� Control Class��
    // ���۷��� ��ȯ
    void startInterface(SignUp* signUp);
    void submitInfo(SignUp* signUp, int, string, string, string, string);
    // SignUp* signUpControl();
};
#endif  // HOMEWORK3_2_SINGUPUI_H