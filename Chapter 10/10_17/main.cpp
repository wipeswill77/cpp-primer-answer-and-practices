//sun xinyu
//2023年9月18日16:04:42
#include <iostream>
#include <vector>
#include <algorithm>
#include "Sales_data.h"
using namespace std;

int main() {
    vector<Sales_data> vec;
    vec.push_back(Sales_data("21"));
    vec.push_back(Sales_data("127"));
    vec.push_back(Sales_data("124"));
    sort(vec.begin(),vec.end(),[](Sales_data& a,Sales_data& b){ return a.get_isbn() < b.get_isbn(); });
    for(auto ouput:vec) {
        cout<<ouput.get_isbn()<<endl;
    }
    return 0;
}
