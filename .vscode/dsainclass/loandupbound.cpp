#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
    int target;
    cin >> target;

    int l=0,r=n-1;
    int ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]>=target){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans;
    return 0;
}

