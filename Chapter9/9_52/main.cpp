//sun xinyu
//2023年9月15日11:55:15
//exercise 9_52

#include <stack>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

void output(stack<char> stack1){
    string output;
    while (!stack1.empty()) {
        output.push_back(stack1.top());
        stack1.pop();
    }
    reverse(output.begin(), output.end());
    cout<<output<<endl;
}

int main()
{
    string expression = "I love (name:(Zhang zifeng)(dengziqi)).";
    stack<char> s;
    for (auto item:expression) {
        if(item!=')'){
            s.push(item);
        }else{
            while(true){
                if(s.top()=='('){
                    s.pop();
                    break;
                }
                s.pop();
            }
            string add_Name = "Zhang zifeng";
            for (auto input: add_Name) {
                s.push(input);
            }
            output(s);
        }
    }
    output(s);
    return 0;
}