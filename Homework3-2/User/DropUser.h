//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_DROPUSER_H
#define HOMEWORK3_2_DROPUSER_H
#include "DropUserUI.h"
#include <iostream>

using namespace std;

class DropUserUI;

class DropUser{
private:
    DropUserUI* dropUserUiRef;
public:
    DropUser();
    void deleteUser(UserList&, string);
    // DropUserUI* DropUserUI();
};

#endif //HOMEWORK3_2_DROPUSER_H
