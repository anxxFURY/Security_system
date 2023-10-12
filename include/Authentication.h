//
// Created by Ani Hadagali on 12/10/23.
//

#ifndef SECURITY_SYSTEM_AUTHENTICATION_H
#define SECURITY_SYSTEM_AUTHENTICATION_H

#include "bits/stdc++.h"

using namespace std;

class Authentication {
private:
    string username;
    string password;

public:
    Authentication(const string &username, const string &password);
    bool Login(string username, string password);
    bool Register(string username, string password);
};


#endif //SECURITY_SYSTEM_AUTHENTICATION_H
