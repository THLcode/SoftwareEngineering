#include <iostream>
#include <string>

using namespace std;

class User {
private:
	string id;
	string password;
public:
	User(string name, string id, string password);
	virtual string getUserType() = 0;
	string getName();
	string getID();
	string getPassword();
	void setName(string name);
	void setID(string id);
	void setPassword(string password);
};