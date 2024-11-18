#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
      string str;
      cin>>str;

      int i=0;
      int j=str.length()-1;

      string str2 = "(){}[]1234567890!@#$%^&*_+-";
      string neww = "";
      for(char ch: str){
            if(str2.find(ch)!=string::npos){
                  continue;
            }
            neww += ch;
      }
      cout<<neww<<endl;
      return 0;
}