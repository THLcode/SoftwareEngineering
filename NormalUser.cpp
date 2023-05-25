//
// Created by ÀÌÅÂÈÖ on 2023/05/24.
//
#include "NormalUser.h"

NormalUser::NormalUser(int userType, string name, string number, string id, string password)
    : User(userType, id, password) {
    normalName = name;
    securityNumber = number;
}