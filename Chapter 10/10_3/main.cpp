//sun xinyu
//2023年9月16日10:36:59
#include <iostream>
#include <numeric>
#include "vector"
#include "algorithm"
using namespace std;
int main() {
    vector<int> numbers;
    for (int i = 0; i < 10; i++)
        numbers.push_back(i);
    cout << accumulate(numbers.begin(), numbers.end(), 0);
    return 0;
}
