//sun xinyu
//2023年9月15日17:05:48

#include "algorithm"
#include <iostream>
#include <vector>
#include <list>

using namespace std;
int main() {
    vector<int> intv;
    for(int i=0;i<20;i++){
        intv.push_back(i);
    }
    cout << count(intv.begin(), intv.end(), 3)<<endl;

    list<string> strl;
    string s;
    while (cin>>s){
        strl.push_back(s);
    }
    cout<<count(strl.begin(),strl.end(),"zzf")<<endl;
    return 0;
}
