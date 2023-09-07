// sun xinyu
// 2023年9月6日10:41:25
//
// Exercise 9.15: Write a program to determine whether two vector<int>s
// are equal.
// Exercise 9.16: Repeat the previous program, but compare elements in a
// list<int> to a vector<int>.

#include <iostream>
#include <list>
#include "vector"

using namespace std;

bool compare(const vector<int> &a, const vector<int> &b) {
    if (a > b) {
        cout << "a>b" << endl;
        return true;
    } else {
        cout << "a<b" << endl;
        return false;
    }
}

bool compare_diff(const list<int> &a, const vector<int> &b) {
    vector<int> va;
    va.assign(a.cbegin(),a.cend());
    if (va > b) {
        cout << "a>b" << endl;
        return true;
    } else {
        cout << "a<b" << endl;
        return false;
    }
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    list<int> la = {1, 2, 3, 4, 5};
    vector<int> b={1,2,3,4,5,6};
    if(compare_diff(la,b))
        cout<<">";
    else
        cout<<"<";

    a.push_back(7);
    a.emplace_back(8);
    for (auto o: a) {
        cout << o << " ";
    }
    return 0;
}
