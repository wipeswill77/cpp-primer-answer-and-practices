//sun xinyu
//2023年9月14日08:57:14
//Exercise 9.43: Write a function that takes three strings, s, oldVal, and
//newVal. Using iterators, and the insert and erase functions replace all
//instances of oldVal that appear in s by newVal. Test your function by
//using it to replace common abbreviations, such as “tho” by “though” and
//“thru” by “through”.



#include <iostream>
#include "string"

using namespace std;

//exercise 9.43
//using iterator, erase and insert
void replaceString_1(string &str_need_replace, const string &s_erased, const string &s_insert) {
    for (auto p = str_need_replace.begin(); p != str_need_replace.end() - s_erased.size() + 1; p++) {
        string item;
        item.assign(p, p + s_erased.size());
        if (item == s_erased) {
            p = str_need_replace.erase(p, p + s_erased.size());
            auto be = s_insert.begin();
            auto en = s_insert.end();
            p = str_need_replace.insert(p, be, en);
            p += s_insert.size();
        }
    }
}

//exercise 9.44
//using replace and index(下标)
void replaceString_2(string &str_need_replace, const string &s_erased, const string &s_insert) {
    for (int i = 0; i < str_need_replace.size() - s_erased.size() + 1; i++) {
        string item;
        item.assign(str_need_replace, i, s_erased.size());
        if (item == s_erased) {
            str_need_replace.replace(i, s_erased.size(), s_insert);
            i += s_erased.size() - 1;
        }
    }
}

//exercise 9.45
//add prefix and suffix to a string
void add_prefix_and_suffix(string &s, const string prefix, const string suffix) {
    s.append(suffix);
    s.insert(0, prefix);
}

//exercise 9.46
//only using insert and control the length of string
void add_prefix_and_suffix_rewrite(string &s, const string prefix, const string suffix) {
    s.insert(s.size(), suffix);
    s.insert(0, prefix);
}

int main() {
    string str_need_replace = "thoothotha";
    string s1 = "tho";
    string s2 = "thought";
    replaceString_2(str_need_replace, s1, s2);
    cout << str_need_replace << endl;

    string name = "zzf";
    string sprefix = "love";
    string ssuffix = "girl";
    add_prefix_and_suffix_rewrite(name, sprefix, ssuffix);
    cout << name << endl;
    return 0;
}
