#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string consonantansvowel(string& str){
      string vowel = "";
      string consonant = "";

      for(int i=0; i<str.size();i++){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] =='o' || str[i] == 'u'){
                  vowel += str[i];
            }else{
                  consonant += str[i];
            }
      }
      return consonant + "\n" + vowel;

}

// string solve3(string& str){
//       int n = str.length();
//       // string ans = reverse(str.begin(), str.end());
      
//       cout<<ans<<endl;
//       for(int i=0;i<n;i++){
//             if(str[i]!=ans[i]){
//                   return "NO";
//             }
//       }
//       return "YES";
// }

string solve2(string& str){
      int n = str.length();
      string ans = "";
      for(int i=n-1; i>=0; i--){
            ans+=str[i];
      }
      // cout<<ans<<endl;
      for(int i=0;i<n;i++){
            if(str[i]!=ans[i]){
                  return "NO";
            }
      }
      return "YES";
}
string solve(string& str){
      int n = str.size();
      int i = 0;
      int j = n-1;
      while(i<j){
            if(str[i]!=str[j]){
                  return "NO";
            }
            i++;
            j--;
      }
      return "YES";
}

int main(){
      int n;
      cin>>n;

      string str;
      cin>>str;


      cout<<consonantansvowel(str)<<endl;
      return 0;
}