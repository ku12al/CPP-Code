#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int N = 1000;
int arr[N];

void printFunction(int i, int j){
    while(i<=j)cout<<arr[i]<<" ";
    cout<<endl;
}

int subarray(int i, int j){
    int sum = 0;
    while(i<=j){
        sum += arr[i];
        i++;
    }
    return sum;
}
int main(){
    int n;cin >> n;
    int k;cin >> k;
    for(int i=0; i<n; i++)cin >> arr[i];
    int window = k;
    vector<int> arr = {1,2,3,4,5};
    for(int i=0; i<n; i++){
        printFunction(i,window-1);
        window++;
        if(window>n)break;

    }
}