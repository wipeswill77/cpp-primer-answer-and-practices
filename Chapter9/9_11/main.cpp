//exercise 9.11,12,13
//sun xinyu
//2023年9月6日09:09:05
//Exercise 9.11: using all kinds of way to initialize a vector.
//Exercise 9.12: Explain the differences between the constructor that takes a
//container to copy and the constructor that takes two iterators.
//
//Exercise 9.13: How would you initialize a vector<double> from a
//list<int>? From a vector<int>? Write code to check your answers.
#include <iostream>
#include <list>
#include <forward_list>
#include "vector"

using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2(v1);
    vector<int> v3 = v2;
    vector<int> v4{1, 2, 3, 4};
    vector<int> v5 = {9, 8, 7, 6, 5, 4};
    vector<int> v6(v5.cbegin(),v5.cend());
    vector<int> v7(10,3);
    //The constructor that takes another container as an argument (excepting array)
    //assumes the container type and element type of both containers are identical.
    //It will also copy all the elements of the received container into the new one:
    list<int> numbers = { 1, 2, 3, 4, 5 };
    list<int> numbers2(numbers);        // ok, numbers2 has the same elements as numbers
    vector<int> numbers3(numbers);      // error: no matching function for call...
    list<double> numbers4(numbers);     // error: no matching function for call...

    //The constructor that takes two iterators as arguments does not require the container
    //types to be identical. Moreover, the element types in the new and original containers
    //can differ as long as it is possible to convert the elements we’re copying to the
    //element type of the container we are initializing. It will also copy only the object
    //delimited by the received iterators.

    list<int> numbers_new = { 1, 2, 3, 4, 5 };
    list<int> numbers21(numbers_new.begin(), numbers_new.end());        // ok, numbers2 has the same elements as numbers
    vector<int> numbers31(numbers_new.begin(), --numbers_new.end());  // ok, numbers3 is { 1, 2, 3, 4 }
    list<double> numbers41(++numbers_new.begin(), --numbers_new.end());        // ok, numbers4 is { 2, 3, 4 }
    forward_list<float> numbers5(numbers_new.begin(), numbers_new.end());   // ok, number5 is { 1, 2, 3, 4, 5 }
    return 0;
}
