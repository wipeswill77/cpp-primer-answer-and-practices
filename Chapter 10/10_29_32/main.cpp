//sun xinyu
//2023年9月21日09:53:55
#include <iostream>
#include <iterator>
#include <list>
#include <forward_list>
#include "vector"
#include "fstream"
#include "algorithm"

using namespace std;

//10_29
void f10_29() {
    string file_name = "../data.txt";
    fstream in_file(file_name);
    if (!in_file) {
        cerr << "open " << file_name << " failed" << endl;
        return;
    }
    vector<string> svec;
    istream_iterator<string> in(in_file), eof;
    while (in != eof) {
        cout << *in++ << endl;
    }
}

//10_30
void f10_30() {
    istream_iterator<int> in(cin), eof;
    vector<int> ivec;
    while (in != eof) {
        ivec.push_back(*in++);
    }
    sort(ivec.begin(), ivec.end());
    ostream_iterator<int> os_out(cout, " ");
    copy(ivec.begin(), ivec.end(), os_out);
}

//10_31
void f10_31() {
    istream_iterator<int> in(cin), eof;
    vector<int> ivec;
    while (in != eof) {
        ivec.push_back(*in++);
    }
    sort(ivec.begin(), ivec.end());
    ostream_iterator<int> os_out(cout, " ");
    unique_copy(ivec.begin(), ivec.end(), os_out);
}

//10_33
void f10_33(int argc, char **argv) {
    if (argc != 4) {
        cerr << "参数输入错误。";
        return;
    }
    ifstream ints_file(argv[1]);
    if(!ints_file){
        cerr<<"input file open failed."<<endl;
        return;
    }
    ofstream out_even(argv[2]), out_odd(argv[3]);
    istream_iterator<int> in(ints_file), eof;
    ostream_iterator<int> iter_even(out_even,"\n"),iter_odd(out_odd," ");

    while(in!=eof){
        if(*in%2==0)
            iter_even=*in++;
        else
            iter_odd=*in++;
    }
    ints_file.close();
    out_even.close();
    out_odd.close();

}


int main(int argc, char **argv) {
    //f10_29();
    //f10_31();
    //f10_33(argc, argv);

    //list中splice测试
    list<int> lst1,lst2{7,8,9};
    forward_list<int> flst1,flst2{1,2,3};
    auto p=flst1.before_begin();
    for(int i=0;i<10;i++){
        p=flst1.insert_after(p,i);
        lst1.push_back(i);
    }
    auto plst=lst2.begin();
    auto pflst=flst2.begin();
    lst1.splice(lst1.begin(),lst2,plst);
    flst1.splice_after(flst1.before_begin(),flst2,flst2.before_begin(),flst2.end());

    for(auto output:flst2)
        cout<<output<<" ";
    cout<<endl;

    for(auto output:flst1)
        cout<<output<<" ";
    cout<<endl;

    return 0;
}
