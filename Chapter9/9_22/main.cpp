//sun xinyu
//2023年9月6日11:48:32
//
// exercise 9.22: if iv is the vector of ints, what's wrong with the following program?
// and how to fix it?

//vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
//while (iter != mid)
//    if (*iter == some_val)
//        iv.insert(iter,2 * some_val);

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> iv{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto iter=iv.begin();
    auto mid=[&] { return iv.begin()+iv.size()/2;};
    //lambda表达式，后面mid()每次都重新生成新的mid

    while (iter != mid()) {
        if(*iter==1) {
            iter = iv.insert(iter, 2);
            iter++;
        }
        iter++;
    }
    for (auto output: iv) {
        cout<<output<<endl;
    }

    return 0;
}
