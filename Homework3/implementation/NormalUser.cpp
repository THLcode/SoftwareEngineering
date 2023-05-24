#include "NormalUser.h"

NormalUser::NormallUser(string name, int securityNumber, string id, string password) {
	this->securityNumber = securityNumber;
	this->applyInfoCollection = new ApplyInfoCollection();
}

string getUserType() {
	return "Normal";
}// 이것도 바꿔야되지 안을까?...
int NormalUser::getSecurityNumber() {
	return this->securityNumber;
}
void NormalUser::setSecurityNumber(int securityNumber) {
	this->securityNumber = securityNumber;
}
ApplyInfoCollection* NormalUser::getApplyInfoCollection() {
	return this->applyInfoCollection;
}