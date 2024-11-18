#include <bits/stdc++.h>
using namespace std;


//palindrome
bool isPalindrome(int n){
    int rev = 0;
    int dup = n;
    while(n>0){
        int rem = n%10;
        rev = (rev*10)+ rem;
        n = n/10;
    }
    return rev == dup;
}


//prime number
bool isPrime(int n){
    if(n==1) return false;
    for(int i = 2; i<=sqrt(n);i++){
        if(n%i == 0) return false;
    }
    return true;
}


//armstrong number
bool isArmstrong(int n){
    int len = to_string(n).length();
    int temp = n;
    int sum=0;
    while(n>0){
        int rem = n%10;
        sum += pow(rem,len);
        n= n/10;
    }
    return sum == temp;
}

//perfect
bool isPerfect(int n){
    int sum = 0;
    for(int i =1; i<n; i++){
        if(n%i==0) sum += i;
    }
    return sum == n;
}

//Leap year
bool isLeapYear(int n){
    if(n%400 == 0) return true;
    if(n%100 == 0) return false;
    if(n%4 == 0) return true;
    return false;
}

int main(){
    // int a, b;
    // cin>> a>> b;
    // for(int i= a;i<=b;i++){
    //     if(isArmstrong(i)){
    //         cout<<i<<" ";
    //     }
    // }
    int n;
    cin>>n;
    if(isLeapYear(n)) cout<<"Is Leap Year";
    else cout<<"Not leap year";
}