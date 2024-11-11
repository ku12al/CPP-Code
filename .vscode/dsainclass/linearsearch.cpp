#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int s;
    cin>>s;
    
    int ans = -1;
    for(int i=0; i<n; i++){
        if(arr[i]==s){
        ans=i;
        break;
    }
    }
    if(ans!=-1){
        cout<<s<<" element are present in array"<<endl;
    }
    else{
        cout<<s<<" element are not present in array"<<endl;
    }

    return 0;
}
