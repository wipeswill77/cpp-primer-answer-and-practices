//sun xinyu
//2023年9月18日11:13:54
#include <iostream>
#include <vector>
#include "algorithm"
using namespace std;

void unique_sort(vector<string> &sv){
    for (auto output: sv) {
        cout<<output<<" ";
    }
    cout<<endl;
    sort(sv.begin(), sv.end());
    auto after_sort = unique(sv.begin(), sv.end());
    for (auto output: sv) {
        cout<<output<<" ";
    }
    cout<<endl;
    sv.erase(after_sort, sv.end());
    for (auto output: sv) {
        cout<<output<<" ";
    }
    cout<<endl;
}

int main() {
    string input;
    vector<string> sv;
    while(cin>>input)
        sv.push_back(input);
    unique_sort(sv);
    vector<int> vec;
    for(int i=0;i<10;i++)
        vec.push_back(i);

    fill_n(vec.begin(),vec.size(),0);

    return 0;
}
