#include "User.h"

User::User(string name, string id, string password) {
	this->name = name;
	this->password = password;
	this->id = id;
};

string User::getName() {
	return this->name;
};

string User::getID() {
	return this->id;
};

string User::getPassword() {
	return this->password;
};

void User::setName(string name) {
	this->name = name;
};

void User::setID(string id) {
	this->id = id;
};

void User::setPassword(string password) {
	this->password = password;
};