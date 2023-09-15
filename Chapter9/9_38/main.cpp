//sun xinyu
//2023年9月12日15:47:15
//Exercise 9.38: Write a program to explore how vectors grow in the library
//you use.

//result: the capacity of vector doubles each time

#include <iostream>
#include "vector"
using namespace std;

int main() {
    vector<int> abc;
    for (int i = 0; i < 100; i++) {
        abc.push_back(i);
        cout<<i<<"  "<<abc.capacity()<<endl;
    }
    return 0;
}
