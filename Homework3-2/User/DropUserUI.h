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
    void startInterface(DropUser*);
    void selectDropUser(DropUser*,string);
};

#endif
