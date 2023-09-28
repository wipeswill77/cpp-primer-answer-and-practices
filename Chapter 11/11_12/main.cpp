//sun xinyu
//2023年9月25日18:26:40

#include <iostream>
#include <vector>

using namespace std;

int main() {
    string input_str;
    int input_int;
    vector<pair<string,int>> vec;
    while(cin>>input_str&&cin>>input_int){
        vec.emplace_back(input_str, input_int);
    }
    for (const auto& output: vec) {
        cout<<output.first<<" "<<output.second<<endl;
    }
    return 0;lpp
}
