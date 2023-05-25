#pragma once
//
#ifndef HOMEWORK3_2_SINGUPUI_H
#define HOMEWORK3_2_SINGUPUI_H
#include <iostream>

#include "SignUp.h"
class SignUp;

using namespace std;

class SignUpUI {
public:
    void startInterface(SignUp* signUp);
    void submitInfo(SignUp* signUp, int, string, string, string, string);
};
#endif