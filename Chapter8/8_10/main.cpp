// c++ primer exercise 8.10
// sun xinyu
// 2023年9月5日11:16:46
//
// question: Write a program to store each line from a file in a
// vector<string>. Now use an istringstream to read each element from
// the vector a word at a time.
//

#include <iostream>
#include "vector"
#include "sstream"
#include "fstream"
using namespace std;



int main() {
    ifstream inf("../../file1.txt");
    string s,word;
    vector<string> vs,result;

    while(getline(inf,s)){
        vs.push_back(s);
    }

    for(auto s:vs){
        istringstream iss(s);
        while(iss>>word)
            result.push_back(word);
        iss.clear();
    }

    for(auto output:vs)
        cout<<output<<endl;

    for(auto output:result)
        cout<<output<<endl;
    return 0;
}
