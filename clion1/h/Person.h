//
// Created by 31053 on 2023/8/30.
//

#ifndef CLION1_PERSON_H
#define CLION1_PERSON_H

#include "headers.h"

class Person {
public:
    Person()=default;
    Person(const string &name, const string &address);
    const string& getName();
    const string& getAddress();
    void setName(string& n);
    void setAddress(string &a);
private:
    string name;
    string address;
};


#endif //CLION1_PERSON_H
