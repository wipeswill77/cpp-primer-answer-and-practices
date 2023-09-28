//sun xinyu
//2023年9月27日09:44:40
#include <iostream>
#include <fstream>
#include <map>
#include <sstream>

using namespace std;



int main() {
    ifstream rules("../rules.txt"),input("../input.txt");
    //检查文件打开情况
    if(!rules.is_open()){
        cerr<<"rules.txt open failed!"<<endl;
        return 1;
    }
    if(!input.is_open()){
        cerr<<"input.txt open failed!"<<endl;
        return 2;
    }
    //将rules转为可以使用的map对象
    map<string,string> tf_rule;
    string words,line;

    while(getline(rules,line)) {
        istringstream istr(line);
        string key_word,value_word;
        while(istr>>key_word&& getline(istr,value_word)) {//读取第一个需要被替换的值，剩余部分是替换成的值
            tf_rule[key_word]=value_word.substr(1);
        }
    }
    //替换input中的值
    while(getline(input,words)){
        istringstream word(words);
        string s;
        while (word>>s) {
            auto it=tf_rule.find(s);
            if(it!=tf_rule.end()){
                cout<<it->second<<" ";
            }else{
                cout<<s<<" ";
            }
        }
        cout<<endl;
    }
    input.close();
    rules.close();
    return 0;
}
