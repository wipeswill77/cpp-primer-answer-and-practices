// exercise 8.11
// sun xinyu
//2023年9月5日13:27:16
// question:The program in this section defined its istringstream
//object inside the outer while loop. What changes would you need to make if
//record were defined outside that loop? Rewrite the program, moving the
//definition of the changes that are needed.


#include <iostream>
#include <string>
#include <sstream>
#include "vector"
using namespace std;

struct PersonInfro{
    string name;
    vector<string> phones;
};

int main() {
    string line,word;
    vector<PersonInfro> people;
    istringstream record;
    while (getline(cin, line)) {
        PersonInfro infro;
        record.clear();
        record.str(line);
        record>>infro.name;
        while (record >> word) {
            infro.phones.push_back(word);
        }
        people.push_back(infro);
    }
    for (auto output: people) {
        cout<<output.name<<endl;
        for (auto n: output.phones) {
            cout<<n<<" ";
        }
        cout<<endl;
    }
    return 0;
}
