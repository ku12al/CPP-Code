#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int solve(vector<int>& v, int k){
      
//       return maxi;
// }

int main(){
      int n,k;
      cin>>n>>k;

      vector<int> v(n);
      for(int i=0;i<n;i++){
            cin>>v[i];
      }
      
      // int n = v.size();

      vector<int> ans;
      for(int i = 0; i < n;i++){
            if(v[i]%2==0){
                  ans.push_back(v[i]-1);
            }else{
                  ans.push_back(v[i]);
            }
      }

      unordered_map<int, int> mp;

      for(int i=0;i<ans.size();i++){
            int p = ans[i];
            for(int j=i+1;j<i+k;j++){
                  p+=ans[j];
                  mp[p]++;
            }
      }

      // for
      int maxi = 0;
      for(auto it: mp){
            if(it.second > 1){
                  maxi = max(maxi, it.first);
            }
            // cout<<it.first<<" "<<it.second<<endl;
      }
      cout<<maxi<<endl;
}