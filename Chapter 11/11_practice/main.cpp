//sun xinyu
//2023年9月25日11:38:23
#include "StrBlob.h"

int main() {
    unordered_map<string,int> unorderedMap;
    map<string, unsigned int> count_words;
    string s;
    while (cin >> s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        if(s[s.size()-1]=='.'||s[s.size()-1]==','){
            s.erase(s.end()-1);
        }
        count_words[s]++;
    }

    for (const auto &output: count_words) {
        cout << output.first << " occurs " << output.second << ((output.second > 1) ? " times" : " time");
        cout << endl;
    }
    return 0;
}
