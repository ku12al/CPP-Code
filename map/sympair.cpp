#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin >> n;
      vector<pair<int, int>> arr;
      for(int i=0; i<n;i++){
            int x, y;
            cin >> x >> y;
            arr.push_back(make_pair(x, y));
      }

      vector<pair<int, int>> ans;
      for(int i=0; i<n; i++){
            if((arr[i].second == arr[i+1].second || arr[i].second == arr[i+1].first) && (arr[i].first == arr[i+1].second || arr[i].first == arr[i+1].first)){
                  ans.push_back(make_pair(arr[i].second, arr[i].first));
            }
      }
      cout<<endl;
      for(int i=0; i<ans.size(); i++){
            cout << ans[i].first << " " << ans[i].second << " ";
      }

      return 0;
}