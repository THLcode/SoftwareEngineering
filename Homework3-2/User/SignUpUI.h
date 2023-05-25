#pragma once
//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_SINGUPUI_H
#define HOMEWORK3_2_SINGUPUI_H
#include <iostream>

#include "SignUp.h"
class SignUp;

using namespace std;

class SignUpUI {
private:
    // Control 클래스 포인터
    // SignUp* signUpControlRef;

public:
    // SignUpUI(SignUp* signupControlRef);  // 생성자를 통해 Control Class와
    // 레퍼런스 교환
    void startInterface(SignUp* signUp);
    void submitInfo(SignUp* signUp, int, string, string, string, string);
    // SignUp* signUpControl();
};
#endif  // HOMEWORK3_2_SINGUPUI_H