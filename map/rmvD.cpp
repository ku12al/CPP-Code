#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
      int n;
      cin>>n;
      
      vector<int> arr(n);
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }

       for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                  arr.erase(arr.begin() + i);
                  i--;
            }
      }

      for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
      }
      return 0;
}