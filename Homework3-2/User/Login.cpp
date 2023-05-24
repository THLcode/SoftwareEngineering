//
// Created by 이태휘 on 2023/05/24.
//
#include "Login.h"

Login::Login(){

} // 생성자

void Login::validUser(){

}

//UI로 넘김
LoginUI* Login::loginUI(){
    return this->logInUIRef;
}