#include<iostream>
using namespace std;
const int N = 100;
int dp[N];
int timer =0;
int fib(int n){
    if(n<=1){
        return n;
    }
    
    if(dp[n]!=-1){
        return dp[n];
    }

    cout<< timer++<<endl;


    int ans = fib(n-2) + fib(n-1);
    dp[n] = ans;
    return ans;
    
}

int main(){

   for(int i=0;i<100;i++){
    dp[i] = -1;
   }
   fib(10);


    //return 0;
}