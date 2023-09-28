//
// Created by 31053 on 2023/9/27.
//

#include "StrBlob.h"

StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}

StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}

void StrBlob::check(StrBlob::size_type i, const std::string &msg) const {
    if(i>=data->size())
        throw out_of_range(msg);
}

string& StrBlob::front() {
    check(0,"front on an empty StrBlob");
    return data->front();
}
string& StrBlob::back() {
    check(0,"back on an empty StrBlob");
    return data->back();
}
void StrBlob::pop_back() {
    check(0,"pop_back on an empty StrBlob");
    data->pop_back();
}