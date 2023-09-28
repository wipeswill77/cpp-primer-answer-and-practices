//sun xinyu
//2023年9月19日09:10:11

//Exercise 10.21: Write a lambda that captures a local int variable and
//decrements that variable until it reaches 0. Once the variable is 0 additional
//calls should no longer decrement the variable. The lambda should return a
//bool that indicates whether the captured variable is 0.

#include <iostream>
using namespace std;

int main() {
    int a=5;
    auto f = [&a]()->bool {
        if(a==0){
            return a==0;
        }
        else{
            a--;
            return a==0;
        }

    };
    if(f())
        cout << "a=0";
    else
        cout<<a;
    a=0;
    if(f())
        cout << "a=0";
    else
        cout<<a;

    return 0;
}
