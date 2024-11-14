#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int asciiVal(char chr){
      return (int)chr;

}
string consonantansvowel(string& str){
      string vowel = "";
      string consonant = "";

      for(int i=0; i<str.size();i++){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] =='o' || str[i] == 'u'){
                  vowel += str[i];
            }else if(str[i]){
                  consonant += str[i];
            }
      }
      return consonant + "\n" + vowel;

}

int main(){
      int n;
      cin>>n;

      string str;
      cin>>str;

      int p;
      cin>>p;
      // cout<<consonantansvowel(str)<<endl;
      if (p >= 0 && p < str.size()) {
        cout << asciiVal(str[p]) << endl;
      } else {
        cout << "Index out of bounds" << endl;
      }
      return 0;
}