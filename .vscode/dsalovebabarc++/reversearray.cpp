#include<iostream>
using namespace std;

void rec(int i, int n){
    if(i>n) return;

    
    rec(i+1,n);
    cout<<i<<" ";
    
}

int main(){
    int i=1;
    int n=5;
    rec(1,n);
    // for(int i=5;i*i<=n;i+=i){
    //     cout<<i<<" ";
    // }
}