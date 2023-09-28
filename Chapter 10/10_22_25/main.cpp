//sun xinyu
//2023年9月21日08:45:27
//exercise 10_22 to 25

#include <iostream>
#include "vector"
#include "functional" //bind

using namespace std;
using namespace placeholders;

//10_22
bool find_not_longer_than_sz(const string& s,string::size_type sz){
    return s.size()<=sz;
}
void f10_22(){
    vector<string> vector1{"hello world", "nihao", "apex", "callofduty"};
    unsigned int sz=6;

    auto p = count_if(vector1.begin(), vector1.end(), bind(find_not_longer_than_sz, _1, sz));
    cout<<p<<endl;
}

//10_23
//bind接受的参数：第一个参数为使用的函数名称，后面依次为该函数的参数列表。

//10_24
bool check_size(const int& s,string::size_type sz){
    return s>sz;
}
void f10_24(){
    vector<int> vector1;
    vector1.reserve(10);
    for (int i = 0; i < 10; i++) {
        vector1.push_back(i);
    }
    string s="apex";
    auto f= find_if(vector1.begin(),vector1.end(),bind(check_size,_1,s.size()));
    cout<<*f<<endl;
}

//10_25 见 lambda_practice程序

int main() {
    f10_22();
    f10_24();
    return 0;
}
