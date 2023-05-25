#pragma once
//
// Created by ภฬลยศึ on 2023/05/24.
//

#ifndef HOMEWORK3_2_NORMALUSER_H
#define HOMEWORK3_2_NORMALUSER_H
#pragma once
#include <iostream>

#include "User.h"
#define MAX_COUNT 100

class NormalUser : public User
{
private:
    string normalName;
    string securityNumber;
    // ApplyInfoCollection applyInfoCollection;
public:
    NormalUser(int, string, string, string, string);
    string getSecurityNumber() { return this->securityNumber; };
    // ApplyInfoCollection getApplyInfoCollection();
};
#endif // HOMEWORK3_2_NORMALUSER_H