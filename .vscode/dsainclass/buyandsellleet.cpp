#include<iostream>
usign namespace std;

int n=prices.size();
int profit=0;
int mn=prices[0];
for(int i=0;i<n;i++){
    int curr_profit=prices[i]-mn;
    if(curr_profit>profit){
        profit=curr_profit;
    }
    mn=min(mn,prices[i]);
}
return profit;