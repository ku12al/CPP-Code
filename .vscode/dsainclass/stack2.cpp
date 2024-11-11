#include<iostream>
#include<stack>
using namespace std;
// void insert_at_bottom(stack<int> &st, int val){
//     stack<int> st2;
//     while(!st.empty()){
//         st2.push(st.top());
//         st.pop();
//     }
//     st.push(val);
//     while(!st2.empty()){
//         st.push(st2.top());
//         st2.pop();
//     }
// }

void recursiveAtBottom(stack<int>& st, int x){
    if(st.size() == 0){
        st.push(x);
        //st.pop();
        return;
    }
    int num = st.top();
    st.pop();
    
    recursiveAtBottom(st, x);
    st.push(num);
    
    
}

void display(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    // int n;
    // cin>>n;

    stack<int>st;
    st.push(2);
    st.push(3);
    st.push(5);
    
    // int x;
    // cin>>"write value at bottom">>x;
    // insert_at_bottom(st, 2);
    // display(st);
    recursiveAtBottom(st, 5);
    display(st);


    return 0;
}