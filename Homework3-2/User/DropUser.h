#ifndef HOMEWORK3_2_DROPUSER_H
#define HOMEWORK3_2_DROPUSER_H
#include "DropUserUI.h"
#include "../UserCollection.h"
#include <iostream>

using namespace std;

class DropUserUI;

class DropUser{
private:
    DropUserUI* dropUserUiRef;
public:
    DropUser();
    void deleteUser(UserCollection&, string);
};

#endif 
