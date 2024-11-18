#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
      string s1;
      cin>>s1;

      string s2;
      cin>>s2;
      // string ans = "0123456789";
      string ans = "";
      unordered_map<char, int> mp;
      for(char& ch : s1){
            mp[ch]++;
      }
      for(char& ch : s2){
            mp[ch]++;
      }
      
      for(auto it: mp){
            if(it.second == 1){
                  ans+=it.first;
            }
      }
      
      cout<<ans<<endl;
      return 0;

}