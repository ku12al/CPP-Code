#include<iostream>
#include<queue>
using namespace std;


/*
class Queue {
    int * arr;
    int qfront;
    int rear;
    int size;
}

Queue(){
    size = 1000;
    arr = new int[size];
    qfront = 0;
    rear = 0;
}

bool isEmpty(){
    if(qfront == rear){
        return true;
    }
    else{
        return false;
    }

}
void enqueue(int data){
    if(rear ==size){
        cout<<"queue is full"<<endl;
    }
    else{
        arr[rear] = data;
        rear++;
    }
}

int dequeue(){
    if(qfront == rear){
        return -1;
    }
    else{
        int ans  = arr[qfront];
        arr[qfront] = -1;
        qfront++;
        if(qfront == rear){
            qfront = 0;
            rear = 0;
        }

    }
}
int front(){
    if(qfront == rear){
        return -1;
    }
    else{
        return arr[qfront];
    }
}
void display(queue<int> &q){
    // while(!q.empty()){
        cout<<q.back()<<" ";
    //     break;
    // }
}

int main(){
    //create a queue
    queue<int> q;

    q.push(10);
    q.push(15);
    q.push(18);
    cout<<q.front()<<" ";
    display(q);
    q.pop();
    cout<<q.front()<<" ";
    display(q);


    return 0;
}*/