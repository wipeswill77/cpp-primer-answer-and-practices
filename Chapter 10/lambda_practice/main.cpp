//sun xinyu
//2023年9月18日15:32:55
#include <iostream>
#include <vector>
#include <algorithm>
#include "functional"

using namespace std;
using namespace placeholders;
bool check_size(const string &s, string::size_type sz){
    return s.size()<sz;
}

int main() {
    //exercise 10.14
    int num1 = 10, num2 = 8;
    auto sum = [](int &a, int &b) { return a + b; };
    cout << sum(num1, num2) << endl;

    //exercise 10.15
    auto sum2 = [num1](int b) { return num1 + b; };
    cin >> num2;
    cout << sum2(num2) << endl;

    //exercise 10.16
    //对于一个vector<string>对象中的元素，计算长度大于等于一个给定单词的元素有多少个，并且依此按照长度，字典顺序输出这些单词。
    //for_each lambda function
    vector<string> vector1{"happy","do","tonight","when","are","apple"};
    string word;
    cin>>word;

    sort(vector1.begin(), vector1.end());//字典排序
    stable_sort(vector1.begin(), vector1.end(),
                [](const string& s1,const string& s2){return s1.size()<s2.size();});//按长度排序

    //find_if version
    auto f=find_if(vector1.begin(),vector1.end(),
                   [word](const string& s){return s.size()>=word.size();});

    //partition version exercise 10.18
    auto p= partition(vector1.begin(),vector1.end(),
                      [word](const string& s){return s.size()<word.size();});
    //bind function version exercise 10.25
    auto pbind = partition(vector1.begin(), vector1.end(), bind(check_size, _1, word.size()));
    int count=vector1.end()-f;//符合要求的元素数量
    for_each(pbind,vector1.end(),[](const string& s){cout<<s<<" ";});


    return 0;
}
