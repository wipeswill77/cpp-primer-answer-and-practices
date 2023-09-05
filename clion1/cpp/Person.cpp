//
// Created by 31053 on 2023/8/30.
//

#include "../h/Person.h"


void Person::setAddress(string &a) {
    address=a;
}

Person::Person(const string &name, const string &address) : name(name), address(address) {}

const string &Person::getName() {
    return name;
}

const string &Person::getAddress() {
    return address;
}

void Person::setName(string &n) {
    name=n;
}
