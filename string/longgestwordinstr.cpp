#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
      string str;
      cin>> str;


      int i = 0;
      int j = 0;
      int maxi =  0;
      while(j<str.size()){
            if(str[j+1]==' '){
                  maxi = max(maxi, j-i+1);
                  i = j+2;
            }else{
                  j++;
            }
      }

      cout<<maxi<<endl;
      return 0;
}