#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<string> s;

    s.push("kunal");
    s.push("kumar");
    s.push("sharma");

    cout<<"top elements-> "<<s.top()<<endl;

    s.pop();
    cout<<"top elements-> "<<s.top()<<endl;
    cout<<"size of stack"<<s.size()<<endl;

    cout<<"Empty or not"<<s.empty()<<endl;
}