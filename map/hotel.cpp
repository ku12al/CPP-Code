#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> sorting(vector<int>& arr){
      int n = arr.size();
      int p = n/2;
      sort(arr.begin(), arr.begin()+p);
      sort(arr.begin()+p, arr.end(), greater<int>());
      return arr;
}

int main(){
      int n;
      cin>>n;

      vector<int> ans(n);
      for(int i=0;i<n;i++){
            cin>>ans[i];
      }
      vector<int> ans2 = sorting(ans);
      for(int i=0;i<ans2.size();i++){
            cout<<ans2[i]<<" ";
      }
      return 0;
}