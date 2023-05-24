#ifndef HOMEWORK3_2_NORMALUSER_H
#define HOMEWORK3_2_NORMALUSER_H
#include <iostream>
#include <string>
#include "User.h"
#include "ApplyInfoCollection.h"

using namespace std;

class ApplyInfoCollection;

class NormalUser : public User {
private:
    int securityNumber;
    ApplyInfoCollection* applyInfoCollection;
public:
    GeneralUser(string name, int securityNumber, string id, string password);
    string getUserType() override; // 이것도 바꿔야되지 안을까?...
    int getSecurityNumber();
    void setSecurityNumber(int securityNumber);
    ApplyInfoCollection* getApplyInfoCollection();
};


#endif //HOMEWORK3_2_NORMALUSER_H
