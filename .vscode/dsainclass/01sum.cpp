#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int start = 0;
    int end = n-1;

    while(start < end){
        if(arr[start] == 0){
            start++;
        }else if(arr[end] == 1){
            end--;
        }
        else{
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<"sorted Array: "<<arr[i]<<endl;
    }
}