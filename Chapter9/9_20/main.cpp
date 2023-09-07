//sun xinyu
//2023年9月6日11:18:15
//Exercise 9.20: Write a program to copy elements from a list<int> into
//two deques. The even-valued elements should go into one deque and the
//odd ones into the other.

#include <iostream>
#include <vector>
#include "list"
#include "deque"
using namespace std;

int main() {
    int inputnum;
    list<int> list1;
    vector<int> odds;
    vector<int> evens;
    while(cin>>inputnum)
        list1.emplace_back(inputnum);
    auto iter1=odds.cend();
    auto iter2=evens.cend();
    for (auto p = list1.cbegin(); p != list1.cend(); p++) {
        if(*p%2==0){
            //odds.push_back(*p);
            iter1 = odds.insert(iter1, *p);
        }else{
            evens.push_back(*p);
        }

    }
    cout<<"odds: "<<endl;
    for(const auto output:odds)
        cout << output << " ";
    cout<<"evens: "<<endl;
    for(const auto output:evens)
        cout << output << " ";

    return 0;
}
