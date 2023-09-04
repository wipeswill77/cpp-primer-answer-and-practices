//
// Created by 31053 on 2023/8/30.
//

#ifndef CLION1_PERSON_H
#define CLION1_PERSON_H

#include "headers.h"

class Person {
public:
    const string& getName() { return name; }
    const string& getAddress() { return address; }
    void setName(string& n){name=n;}
    void setAddress(string &a);
private:
    string name;
    string address;
};


#endif //CLION1_PERSON_H
