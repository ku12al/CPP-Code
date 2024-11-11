#include <iostream>
using namespace std;

int sum(int arr[], int i, int j){
    if(i>j ){
        return 0;
    }
    int ans = arr[i];
    return ans + sum(arr,i+1,j);
    // int ans=0;
    // while(i < j){
    //     ans += arr[i++];
    // }
    // return ans;
}
void subarraySum(int arr[], int n, int target){
    for(int i = 0; i<n;i++){
        for(int j=i;j<n;j++){
            int sum = arr[i] + arr[j];
            if(sum==target){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}
int main() {
    // Write C++ code here
    
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int target =0;
    cin>>target;
    
    subarraySum(arr,n,target);
    return 0;
}