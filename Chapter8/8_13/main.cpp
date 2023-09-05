// exercise 8.13
// sun xinyu
// 2023年9月5日16:20:30
// question:Rewrite the phone number program from this section to read
//from a named file rather than from cin.
//

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "ostream"
#include "vector"

using namespace std;

struct PersonInfro {
    string name;
    vector<string> phones;
};

int main() {
    ifstream fin("../../people.txt");
    string line, word;
    vector<PersonInfro> people;
    vector<PersonInfro> badinfrocollection;
    istringstream record;
    ostringstream formatted, badnums;
    while (getline(fin, line)) {
        badnums.clear();//重置为有效状态
        formatted.clear();
        badnums.str("");//需要把流中的值清空，否则流中的值会积累。
        formatted.str("");

        PersonInfro infro;
        record.clear();
        record.str(line);
        record >> infro.name;

        while (record >> word) {
            if (word.size() != 11) {
                badnums << word << " ";
            } else {
                formatted << word << " ";
                infro.phones.push_back(word);
            }
        }
        cout << infro.name << "  " << formatted.str() << endl;
        if (badnums.str().empty()) {

        } else {
            cout << "the bad numbers are here:" << endl << infro.name << "  " << badnums.str() << endl;
        }
        people.push_back(infro);
    }

    return 0;
}
