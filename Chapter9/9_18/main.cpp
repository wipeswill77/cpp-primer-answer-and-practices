//sun xinyu
// 2023年9月6日11:12:17
//
// Exercise 9.18: Write a program to read a sequence of strings from the
//standard input into a deque. Use iterators to write a loop to print the
//elements in the deque.

#include <iostream>
#include "deque"

using namespace std;

int main() {
    string sin;
    deque<string> deque1;
    while (cin >> sin) {
        deque1.emplace_back(sin);
    }

    for (auto p = deque1.cbegin(); p != deque1.cend(); p++) {
        cout << *p << endl;
    }
    return 0;
}
