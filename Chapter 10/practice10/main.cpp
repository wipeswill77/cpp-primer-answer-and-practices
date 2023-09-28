#include <iostream>
#include <vector>
#include <list>

using namespace std;
int main() {
    std::vector<const char *> roster1{"Mooophy", "pezy", "Queequeg"};
    std::list<const char *> roster2{"Mooophy", "pezy", "Queequeg", "shbling", "evan617"};
    std::cout << std::equal(roster1.cbegin(), roster1.cend(), roster2.cbegin())<<endl;
    std::cout << (void*)roster1[0] << std::endl;
    std::cout << (void*)roster2.front() << std::endl;
    int a1[] = {0,1,2,3,4,5,6,7,8,9};
    int a2[sizeof(a1)/sizeof(*a1)]; // a2 has the same size as a1
// ret points just past the last element copied into a2
    auto ret = copy(begin(a1), end(a1), a2); // copy a1 into a2
}
