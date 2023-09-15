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
//    string s1(p,e);
//    string s2(s1, 0);
//    cout<<s1<<endl;
//    cout<<s2<<endl;

    //test replace insert args
    string s="Hello world!";
    string s1=s,s2=s,s3=s,s4=s,s5=s,s6=s,s7=s,s8=s,s9=s;
    string ss="naughty dog";
    //replace (pos, len, args)
    s1.replace(6, 5, ss);
    s2.replace(6, 5, ss, 0, ss.size());
    const char *cp="naughty dog";//c风格字符串
    s3.replace(6,5,cp);

    cout<<s2<<endl;
    return 0;
}
