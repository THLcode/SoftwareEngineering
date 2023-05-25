//
// Created by 이태휘 on 2023/05/24.
//

#ifndef HOMEWORK3_2_DROPUSERUI_H
#define HOMEWORK3_2_DROPUSERUI_H
#include "DropUser.h"
#include "iostream"
#include "string"

using namespace std;

class DropUser;

class DropUserUI{
private:
    DropUser* DropUserControlRef;
public:
    DropUserUI();
    void startInterface(DropUser*);
    void selectDropUser(DropUser*,string);
    // DropUser* DropUserControl();
};

#endif //HOMEWORK3_2_DROPUSERUI_H
