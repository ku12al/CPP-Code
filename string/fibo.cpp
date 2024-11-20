#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//factorial number of elements
int fact(int n){
      if(n<=1)return 1;

      return n*fact(n-1);
}
//fibbonacci series of elements
int fib(int n){
      if(n<=1)return n;

      return fib(n-1)+fib(n-2);
}

//strong number - sum of factorial of each digit in a number equal to the number
bool strongNum(int n){
      int p = n;
      int sum = 0;
      while(n>0){
            int q = n%10;
            sum += fact(q);
            n/=10;
      }
      return sum == p;
}

//automorphic number - length of number or square of number last digit == number
bool aoutomorphic(int n){
      // int sum = 0;
      int temp = n;
      int square = n*n;
      int count=0;
      while(temp>0){
            if(temp%10 != square%10){
                  return false;
            }
            temp/=10;
            square/=10;
      }
      return true;
}

//harshad number - number divisible by sum of its digits is called harshad number
bool harshadNum(int n){
      int temp = n;
      int sum = 0;
      while(n>0){
            int l = n%10;
            sum += l;
            n/=10;
      }
      
      return temp%sum == 0;
}


int permutation(int n, int r){
      return fact(n)/fact(n-r);
}

int numAndDen(int n1, int n2, int d1, int d2){
      float temp = (n1*d2)+(n2*d1)/(n1*n2);
      return temp;
}
int main(){
      int n1, n2, d1, d2;
      cin>>n1>>n2>>d1>>d2;
      // int r;
      // cin>>r;
       // cout<<fib(n)<<" ";
      // cout<<fact(n)<<endl;
      // cout<<strongNum(n)<<endl;
      // cout<<aoutomorphic(n)<<endl;
      // cout<<harshadNum(n)<<endl;
      // cout<<permutation(n, r)<<endl;
      cout<<numAndDen(n1, n2, d1, d2)<<endl;
      return 0;
}