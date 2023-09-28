//sun xinyu
//2023年9月18日13:40:27
#include <iostream>
#include <vector>
#include <algorithm>
#include "Sales_data.h"
using namespace std;

bool compareIsbn(Sales_data &s1,Sales_data& s2){
    return s1.get_isbn()<=s2.get_isbn();
}

int main() {
    Sales_data s1(1);
    vector<Sales_data> v;
    for (int i = 10; i > 0; i--) {
        v.emplace_back(i);
    }
    sort(v.begin(),v.end(), compareIsbn);
    for(auto output:v) {
        cout<<output.get_isbn()<<" ";
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
