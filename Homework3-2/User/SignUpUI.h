//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_SINGUPUI_H
#define HOMEWORK3_2_SINGUPUI_H
#include <iostream>
#include "SignUp.h"

using namespace std;
class SignUp;

class SignUpUI{
private:
    //Control 클래스 포인터
    SignUp* signUpControlRef;
public:
    SignUpUI(SignUp* signupControlRef); // 생성자를 통해 Control Class와 레퍼런스 교환
    void startInterface(); // interface를 출력하는 함수
    void submitInfo();
    SignUp* signUpControl();
};
#endif //HOMEWORK3_2_SINGUPUI_H
