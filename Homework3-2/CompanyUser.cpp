#include "CompanyUser.h"

CompanyUser::CompanyUser(int userType, string name, string number, string id, string password)
    : User(userType, id, password)
{
    companyName = name;
    companyNumber = number;
}
