//sun xinyu
//2023年9月14日15:52:09
//Exercise 9.51: Write a class that has three unsigned members
//representing year, month, and day. Write a constructor that takes a string
//representing a date. Your constructor should handle a variety of date
//formats, such as January 1, 1900, 1/1/1900, Jan 1, 1900, and so on.

#include <iostream>
#include <vector>
#include "string"

using namespace std;

class aaa {
public:
    aaa() = default;

    aaa(const string &date) {

        if (date.find_first_of('/') == string::npos) {
            //"Jan 1 1999" and "January 1, 1999"
            if (date.find("Jan") < date.size()) month = 1;
            if (date.find("Feb") < date.size()) month = 2;
            if (date.find("Mar") < date.size()) month = 3;
            if (date.find("Apu") < date.size()) month = 4;
            if (date.find("May") < date.size()) month = 5;
            if (date.find("Jun") < date.size()) month = 6;
            if (date.find("Jul") < date.size()) month = 7;
            if (date.find("Aug") < date.size()) month = 8;
            if (date.find("Sep") < date.size()) month = 9;
            if (date.find("Oct") < date.size()) month = 10;
            if (date.find("Nov") < date.size()) month = 11;
            if (date.find("Dec") < date.size()) month = 12;

            string::size_type pos = date.find_first_of(numbers);
            if (date.find_first_of(numbers, pos + 1) == (pos + 1)) {
                string a = date.substr(pos, pos + 1);
                day = stoul(a);
            }else{
                string a=date.substr(pos,pos);
                day = stoul(a);
            }
            string y=date.substr(date.size()-5,date.size()-1);
            year = stoul(y);
        }else{
            // "1/1/1999"
            string::size_type pos=0,pre_pos=pos;
            pos=date.find_first_of('/',pos)-1;
            if (pos-pre_pos==1){
                month = stoul(date.substr(pre_pos, 2));
            }else{
                month = stoul(date.substr(pre_pos, 1));
            }

            pre_pos=pos+2;
            pos+=2;
            pos=date.find_first_of('/',pos)-1;
            if (pos-pre_pos==1){
                day= stoul(date.substr(pre_pos, 2));
            }else{
                day= stoul(date.substr(pre_pos, 1));
            }
            pos+=2;
            year= stoul(date.substr(pos, 4));

        }
    }

    string numbers{"123456789"};
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    unsigned int day = 0;
    unsigned int month = 0;
    unsigned int year = 0;
};

int main() {
    string date = "10/1/1999";
    aaa b(date);
    cout << "Month: " << b.month << endl;
    cout << "Day: " << b.day << endl;
    cout << "Year: " << b.year << endl;
    return 0;
}
