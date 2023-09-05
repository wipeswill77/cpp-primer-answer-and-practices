//exercise 9.4 and 9.5
//sunxinyu
//2023年9月5日16:58:50
//question:
//Exercise 9.4: Write a function that takes a pair of iterators to a
//vector<int> and an int value. Look for that value in the range and return
//a bool indicating whether it was found.
//
//Exercise 9.5: Rewrite the previous program to return an iterator to the
//requested element. Note that the program must handle the case where the
//element is not found.

#include <iostream>
#include <vector>

using namespace std;

bool func(vector<int>::iterator pb, vector<int>::iterator pe, const int &num){
    while (pb != pe) {
        if(*pb==num)
            return true;
    }
    return false;
}
vector<int>::iterator func2(vector<int>::iterator pb, vector<int>::iterator pe, const int &num){
    while (pb != pe) {
        if(*pb==num)
            return pb;
    }
    return pe;
}
int main() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    auto p=v.begin();
    auto p2=v.rbegin();
    cout<<*p<<endl<<*p2<<endl;
    return 0;
}
