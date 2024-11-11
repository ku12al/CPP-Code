#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void kthelement(int k){

// }

// void print(queue<int> que){
//     while(!que.empty()){
//         cout << que.front() <<" ";
//         que.pop();
//     }
//     cout<<endl;

// }

int main(){
//     queue<int> que;
//     //priority_queue<int> que;
//    // priority_queue<int, vector<int>, greater<int>>minHeap; 

//     que.push(1);
//     print(que);
//     que.push(8);
//     print(que);
//     que.push(3);
//     print(que);
//     que.push(2);
//     print(que);
//     que.push(56);
//     print(que);
//     que.push(34);
//     print(que);
//     que.push(4);
//     print(que);

    vector<int> a = {-3,4,3,-1,4,9,-2};

    int k;cin>>k;
    /*first approach
    // sort(a.begin(),a.end());

    // for(int i=0;i<a.size();i++){
    //     if(a[i] == k){
    //         cout<<i<<endl;
    //         break;
    //     }
    // }
    // return 0;
    */

   /*second approach*/

   priority_queue<int> max_heap;

   for(int i=0;i<a.size();i++){
        if(max_heap.size()>k){
            max_heap.pop();
        }
        max_heap.push(a[i]);
   }
   cout<<"Your kth Element ->";

   while(max_heap.size()!=1)max_heap.pop();

   cout<<max_heap.top();

   
    
}