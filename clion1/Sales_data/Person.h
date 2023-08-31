//
// Created by 31053 on 2023/8/30.
//

#ifndef CLION1_PERSON_H
#define CLION1_PERSON_H

#include "../headers.h"

class Person {
public:
    const string& getName() const { return name; }
    string getAddress() { return address; }
private:
    string name;
    string address;
};


#endif //CLION1_PERSON_H
