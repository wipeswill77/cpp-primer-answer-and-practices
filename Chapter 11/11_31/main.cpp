//sun xinyu
//2023年9月26日14:32:16
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    multimap<string, string> author_works;

    author_works.insert(make_pair("zzf", "lalla"));
    author_works.insert(make_pair("zzf", "b"));
    author_works.insert(make_pair("sxy", "g"));
    author_works.insert(make_pair("zzf", "a"));
    map<string,vector<string>> ordered_list;
    for (auto item: author_works) {
        ordered_list[item.first].push_back(item.second);
    }
    for(auto output:ordered_list){
        cout<<output.first<<" ";
        sort(output.second.begin(), output.second.end());
        for(auto output2:output.second)
            cout<<output2<<" ";
        cout<<endl;
    }


    auto it = author_works.find("zzf");
    size_t nums = author_works.count("zzf");
    while (nums > 0) {
        if (it != author_works.end())
            it = author_works.erase(it);
        nums--;
    }

    for (auto outpu: author_works)
        cout << outpu.first << " " << outpu.second << endl;
    return 0;
}
