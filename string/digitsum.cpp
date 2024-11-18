#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
      string str;
      cin>>str;

      string ans = "0123456789";
      int sum =0;
      for(char& c : str){
            // if(isdigit(c)){
            //       sum+=c - '0';
            // }
            if(ans.find(c)!=string::npos){
                  ans2+=c;
            }
      }
      cout<<sum<<endl;
      return 0;

}