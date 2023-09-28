//2023年9月26日14:03:16
#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main() {
    map<string,vector<int>> m;
    vector<int> v{1,2,3};
    m.insert(make_pair("nihao",v));
    auto p2=m.find("nihao");
    map<string,vector<int>>::iterator p=m.find("nihao");
    for(auto output:p2->second)
        cout<<output<<endl;
    return 0;
}
