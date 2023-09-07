//sun xinyu
//2023年9月6日13:49:44

//Exercise 9.27: Write a program to find and remove the odd-valued
//elements in a forward_list<int>.
//Exercise 9.28: Write a function that takes a forward_list<string> and
//two additional string arguments. The function should find the first string
//and insert the second immediately following the first. If the first string is
//not found, then insert the second string at the end of the list.
#include <iostream>

#include "forward_list"

using namespace std;

//my function
void delete_odds(forward_list<int> &fl) {
    auto p = fl.before_begin();
    auto pnext = fl.begin();
    while (pnext != fl.end()) {
        if (*pnext % 2 == 1) {
            pnext = fl.erase_after(p);
        } else {
            p = pnext;
            pnext++;
        }
    }
}

//a much better funcion
//使用lambda表达式，不需要循环，只需要两行代码。
//每次调用flist.remove_if(is_odd)时，flist中的对象传递给is_odd中的i，判断奇偶
auto remove_odds(forward_list<int>& flist)
{
    auto is_odd = [] (int i) { return i & 0x1; };
    flist.remove_if(is_odd);
}
//my function
void find_and_insert(forward_list<string> &a, string s1, string s2) {
    auto p=a.begin();
    auto pre=a.before_begin();
    while(p!=a.end()){
        if (*p == s1) {
            p=a.insert_after(p,s2);
            pre=p;
            p++;
            return;
        }else{
            pre=p;
            p++;
            if(p==a.end()){
                a.insert_after(pre,s2);
            }
        }
    }
}

int main() {
    forward_list<int> fl{1, 2, 3, 4, 5, 6, 7, 8, 9};
    forward_list<string> fls{"aaa","bbb","ccc","ddd"};
    find_and_insert(fls,"ddd","found");
    remove_odds(fl);
    for (auto output: fls) {
        cout << output << " ";
    }
    cout << endl;
    return 0;
}
