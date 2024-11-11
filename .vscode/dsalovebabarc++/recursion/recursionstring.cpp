#include<iostream>
using namespace std;


//power of a number
int power(int a, int b){
    //base case
    if(b==0) return 1;
    if(b==1) return a;
    

    //recursion case
    int ans = power(a,b/2);
    if(b%2==0){
        return ans*ans; 
    }else{
        return a*ans*ans;
    }
}
int main(){
    int a,b;
    cin>>a>>b;

    int ans = power(a,b);

    cout<<ans<<endl;

    return 0;
}
/*
// //chech palindrome string = reverse string is called palidrome.

// bool palindrome(string s, int start, int end){
//     //base case
//     if(start > end)return true;

//     if(s[start] != s[end]){
//         return false;
//     }
//     else{
//         //Recursion call
//         return palindrome(s, start+1, end-1);
//     }
// }
// int main(){
//     string str = "aabbaa";
    
//     bool isok = palindrome(str, 0, str.length()-1);

//     if(isok){
//         cout<<"its a palidrome"<<endl;
//     }
//     else{
//         cout<<"its not a palidrome"<<endl;
//     }
//     return 0;
// }
*/

/*
//reverse string question
// void reverseString(string& s, int i, int j) {
//     cout<<s<<endl;
//     //base case
// if(i>j){
//     return ;
// }
//     //processing case
//     swap(s[i], s[j]);
//     i++; j--;


//     //recursive case 
//     reverseString(s,i,j);

// }

// int main(){
//     string name = "kunal";
//     cout<<endl;
//     reverseString(name, 0, name.length()-1);

//     cout<<endl;
//     cout<<name<<endl;

//     return 0;
// }*/