#include<iostream>
using namespace std;
int getBit(int n, int x){
    return ((n & (1<<x))==0);
}

int setBits(int n, int x){
    return (n| (1<<x));
    
}

int clearBits(int n, int x){
    int mask = ~(1<<x);
    return (n & mask);
}

int updateBit(int n, int x, int value){
    n = clearBits(n, x);
    return n | value<<x;
}
/*
// void printBinary(int n){
//     if (n > 1)
    
//     printBinary(n / 2);
//     cout << n % 2;
    
// }*/

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    //printBinary(n);
    setBits(n,x);

    return 0;
}