#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int k=0;
    cin >> k;
    int s=0; int e=n-1;
    int mid=(s+e)/2;

    for(int i=0; i<n; i++){
        
        if(arr[i]>mid){
            s = mid  + 1;
        }
        else if(arr[i]<mid){
            mid = mid - 1;
        }
        else{
            return mid;
        }
    }
}