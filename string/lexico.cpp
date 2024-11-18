#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
      string str;
      cin>>str;

      string ans = "";
      for(auto& ch: str){
            if(ch == 'z'){
                  ch = 'a';
            }else if(ch == 'Z'){
                  ch = 'A';
            }else{
                  ch = ch + 1;
            }

      }
      cout<<str<<endl;
      return 0;

}