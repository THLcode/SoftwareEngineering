cmake_minimum_required(VERSION 3.25)
project(implementation)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(implementation
        ApplyInfoCollection.cpp
        CompanyUser.cpp
        control.cpp
        header.h
        main.cpp
        NormalUser.cpp
        Recruit.cpp
        RecruitInfoCollection.cpp
        User.cpp
        UserCollection.cpp)
