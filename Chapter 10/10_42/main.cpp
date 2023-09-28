//sun xinyu
//2023年9月25日11:20:24
#include <iostream>
#include <list>

using namespace std;
int main() {
    list<string> list1;
    string sinput;
    while(cin>>sinput)
        list1.push_back(sinput);
    list1.sort();
    list1.unique();
    for (auto output: list1) {
        cout << output << " ";
    }
    cout<<endl;
    return 0;
}
