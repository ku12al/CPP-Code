#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> rotate(vector<int>& ans, int k){
      int n = ans.size();
      k = k%n;
      for(int i=0;i<k;i++){
            ans.push_back(ans[i]);
      }
      return ans;
}
int midian(vector<int>& arr){
      int n = arr.size();
      int l = 0, r = n - 1;
      int mid = (l + r) / 2;
      if(arr.size()%2==0){
            return (arr[mid] + arr[mid+1])/2;
      }else{
            return arr[mid];
      }
}
int sum(vector<int>& arr){
      int n = arr.size();
      int sum = 0;
      for(int i=0;i<n;i++){
            sum+=arr[i];
      }
      return sum;
}

int main(){
      int n;
      cin>>n;

      vector<int> ans(n);
      for(int i=0;i<n;i++){
            cin>>ans[i];
      }
      // cout<<sum(ans)<<endl;
      // cout<<midian(ans)<<endl;
      int k;
      cin>>k;
      vector<int> ans2 = ans;
      ans2 = rotate(ans2, k);
      for(int i=0; i<k; i++){
            cout<<ans2[i]<<" ";
      }
      return 0;
}