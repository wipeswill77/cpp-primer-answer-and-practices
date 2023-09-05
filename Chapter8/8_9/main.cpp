#include <iostream>
#include <istream>
#include <sstream>

using namespace std;

istream &f1(istream &s) {
    string string1;
    while (s >> string1)
        cout << string1 << endl;
    s.clear();
    return s;
}

int main() {
    istringstream ss("Hello!");
    f1(ss);
    return 0;
}
