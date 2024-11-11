#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties
    public:
        int *arr;
        int top;
        int size;

    //behavior
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;

    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    int peek(){
        if(top >= 0 && top < size){
            return arr[top];
        }else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    Stack st(5);
    st.push(33);
    st.push(78);
    st.push(55);
    st.push(33);
    st.push(78);
    st.push(55);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    
    if(st.isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }

    

    /*stack<int> s;

    s.push(3);
    s.push(4);

    s.pop();

    cout<<"Printing top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        cout<<"Stack is not empty!"<<endl;
    }

    cout<<"size of stack is "<<s.size()<<endl;*/
    return 0;
}