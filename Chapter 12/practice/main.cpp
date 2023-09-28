//sun xinyu
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int main() {
    //smart pointer
    //shared_ptr, unique_ptr and weak_ptr

    //operations sp and up supported
    shared_ptr<vector<int>> sp1,sp2;
    unique_ptr<vector<int>> sp3;
    swap(sp1,sp2);//交换指针
    // only sp support
    sp1= make_shared<vector<int>>(10,2);
    sp1.use_count();//返回与sp1共享的
    sp1.unique();//if sp1.use_count()==1, return true;
    return 0;


}
