//
// Created by 31053 on 2023/9/27.
//
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
#include <memory>

using namespace std;

#ifndef INC_11_PRACTICE_STRBLOB_H
#define INC_11_PRACTICE_STRBLOB_H


class StrBlob {
public:
    typedef vector<string>::size_type size_type;
    //构造函数
    StrBlob();
    StrBlob(initializer_list<string> il);
    //成员函数
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    //添加和删除元素
    void push_back(const string &t) { data->push_back(t); }
    void push_back(const string &t)const { data->push_back(t); }
    void pop_back();

    //获得元素
    string &front();
    string &back();

private:
    shared_ptr<vector<string>> data;

    void check(size_type i, const string &msg) const;
};


#endif //INC_11_PRACTICE_STRBLOB_H
