#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
      string s1;
      cin >> s1;

      string s2;
      cin >> s2;

      int count=0;
      for (int i=0;i < s1.length();i++)
      {
            string s3;
            for (int j = i; j < s1.length(); j++)
            {
                  s3+=s1[j];
                  if(s2.find(s3) != string::npos){
                        count++;
                  }
            }
      }

      cout<<count<<endl;
      return 0;
}