#include "User.h"

User::User(int _userType, string _id, string _password) {
	userType = _userType;
    id = _id;
    password = _password;
}

string User::getUserId() { return this->id; }
string User::getUserPw() { return this->password; }
int User::getUserType() { return this->userType; }