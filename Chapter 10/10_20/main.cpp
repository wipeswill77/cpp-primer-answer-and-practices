//sun xinyu
//2023年9月19日08:51:09

//Exercise 10.20: The library defines an algorithm named count_if. Like
//find_if, this function takes a pair of iterators denoting an input range and
//a predicate that it applies to each element in the given range. count_if
//returns a count of how often the predicate is true. Use count_if to rewrite
//the portion of our program that counted how many words are greater than length 6.
#include <iostream>
#include <algorithm>
#include "vector"
using namespace std;

int main() {
    vector<string> v;
    string sinput;
    while (cin >> sinput) {
        v.push_back(sinput);
    }
    cout<<count_if(v.begin(),v.end(),[](const string& s){return s.size()>6;});
    return 0;
}
