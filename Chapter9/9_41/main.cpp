//sun xinyu
//2023年9月12日16:12:07
//Exercise 9.41: Write a program that initializes a string from a
//vector<char>.

#include <iostream>
#include "vector"

using namespace std;

int main() {
    vector<char> cv;
    for (int i = 65; i <= 122; i++) {
        char c=static_cast<char>(i);
        cv.push_back(c);
    }
    auto p=cv.begin();
    auto e=cv.end();
    string s1(p,e);
    string s2(s1, 0);

    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}
