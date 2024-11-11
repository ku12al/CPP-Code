#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// void reverse(priority_queue<int>& pq){

//     if(pq.size()==0)return;

//     int num = pq.top();
//     pq.pop();

//     reverse(pq);

//     pq.push(num);
// }

void print(priority_queue<int, vector<int>, greater<int>>pq){
    while(!pq.empty()){
        cout << pq.top() <<" ";
        pq.pop();
    }
    cout<<endl;

}

int main(){
    queue<int> que;
    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>>pq; 

    pq.push(1);
    print(pq);
    pq.push(8);
    print(pq);
    pq.push(3);
    print(pq);
    pq.push(2);
    print(pq);
    pq.push(56);
    print(pq);
    pq.push(34);
    print(pq);
    pq.push(4);

    print(pq);

    //reverse(pq);
    //print(pq);

    
}