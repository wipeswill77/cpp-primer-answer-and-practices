#include <iostream>
#include "vector"
#include "list"

using namespace std;

int main() {
    list<const char *> l1{"nnihao", "mwomen", "jhahahah"};
    vector<string> v;
    v.assign(l1.begin(), l1.end());
    for (auto output: l1) {
//        for(int i=0;i<6;i++)
//            cout<<output+i<<" ";
//        cout<<endl;
        cout << output << endl;
    }
    for (const auto &output: v) {
        cout << output;
    }
    return 0;
}
