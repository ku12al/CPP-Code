#include<iostream>
using namespace std;

bool isPalindrome(string S){
	int n=S.length();
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(S[s] != S[e])
        {
            return false;
        }else{
            s++;
            e--;
        }
    }
    return true;
}


int main(){
    string a = "programing";
    int i=3;
    int j=7;
    string c=a.substr(i,j-i+1);
    cout<<c;
}