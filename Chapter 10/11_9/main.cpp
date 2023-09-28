//sun xinyu
//2023年9月25日14:47:14
//从文件中读取一篇文章。使用一个map将单词与list相互关联，list中保存该单词可能出现的行号。
//使用set设立黑名单，过于简单的单词不予出现
#include <iostream>
#include <list>
#include <map>
#include <fstream>
#include <set>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    map<string, list<unsigned int>> collection;
    ifstream article("../article.txt");
    set<string> black_list{"a","the"};
    string name_added_to_black_list;

    cin>>name_added_to_black_list;
    black_list.insert(name_added_to_black_list);

    string input_words;
    list<unsigned int> lines;
    ofstream statistic_data("../words appear times.txt");
    unsigned int numofwords=0;
    if (!article.is_open()) {
        cerr << "article opened fail!" << endl;
        return 1;
    }
    if (!statistic_data.is_open()) {
        cerr << "statistic_data opened fail!" << endl;
        return 2;
    }
    for (unsigned int line_flag = 1; getline(article, input_words); line_flag++) {
        istringstream certain_line(input_words);
        while (certain_line>>input_words){
            numofwords++;
            transform(input_words.begin(),input_words.end(),input_words.begin(),::tolower);
            if(input_words[input_words.size()-1]=='.'||input_words[input_words.size()-1]==','){
                input_words.erase(input_words.end()-1);
            }
            if(black_list.find(input_words)!=black_list.end())
                continue;

            collection[input_words].push_back(line_flag);

        }

    }
    statistic_data<<"the number of the words in article is "<<numofwords<<endl;
    for (auto items: collection) {
        items.second.sort();
        items.second.unique();
        statistic_data<<items.first<<" occurs in lines of";
        for(auto line:items.second) {
            statistic_data<<" "<<line;
        }
        statistic_data<<"."<<endl;
    }
    statistic_data.close();
    article.close();
    return 0;
}
