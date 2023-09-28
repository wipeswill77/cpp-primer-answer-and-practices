//sun xinyu
//2023年9月26日10:36:50

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    multimap<string,string> name;
    vector<multimap<string,string>> students_name;
    string family_name,last_name;
    while (cin >> family_name && cin >> last_name) {
        name.insert(make_pair(family_name, last_name));
    }
    multimap<string,string>::iterator it=name.find("zhang");
    if(it!=name.end())
        cout<<"found zhang"<<endl;
    for (auto output: name) {
        cout<<output.first<<" "<<output.second<<endl;
    }
    return 0;
}
