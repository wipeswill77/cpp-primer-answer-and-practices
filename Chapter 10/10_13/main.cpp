//sun xinyu
//2023年9月18日13:54:04

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

bool split_string(string& s){
    return s.size()>=5;
}

int main() {
    string s=" i love zhang zifeng, i want to play Apex or Call of duty.";
    vector<std::string> result{"i","love","zhang","zifeng","ni","you","callofduty"};
    for(auto output:result) {
        cout<<output<<" ";
    }
    cout<<endl;
    auto flag=partition(result.begin(),result.end(), split_string);
    for(auto output:result)
        cout<<output<<" ";
    cout<<endl;
    for(auto be=result.cbegin();be!=flag;be++){
        cout<<*be<<" ";
    }
    return 0;
}
