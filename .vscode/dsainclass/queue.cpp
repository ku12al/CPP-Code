#include<iostream>
#include<queue>
using namespace std;

void display(queue<int> & queue){
    while(!queue.empty()){
        cout<<queue.front()<<" ";
        queue.pop();
    }
}
void reverseQueue(queue<int>& Queue)
{
    //base case
    if(Queue.size() == 0)return;

    int front = Queue.front();

    Queue.pop();

    reverseQueue(Queue);

    Queue.push(front);


}

int main(){
    queue<int> que;

    que.push(10);
    que.push(20);
    que.push(30);

    reverseQueue(que);
    display(que);

    return 0;


 
}