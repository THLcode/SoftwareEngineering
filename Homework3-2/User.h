#ifndef HOMEWORK3_2_USER_H
#define HOMEWORK3_2_USER_H
#pragma once
#include <iostream>
using namespace std;

class User {
   private:
	int userType;
    string id;
    string password;
   public:
    User(int, string, string);
    string getUserId();
    string getUserPw();
	int getUserType();
};
#endif