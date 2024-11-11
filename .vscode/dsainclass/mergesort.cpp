#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int i=mid-l+1;
    int j=r-mid;

    int *a=new int[i];
    int *b=new int[j];

    // int k=l;
    for(int i=0;i<j;i++){
        a[i]=a[l+i];
    }
    //k=mid+1;
    for(int i=0; i<j; i++){
        b[i]=b[mid+1+i];
    }
    int n=0;
    int m=0;
    int p=l;

    while(n<i&&m<j){
        if(b[j]<a[i]){
            arr[m]=b[j];
            m++;p++;
        }
        else{
            arr[m]=a[i];
            n++;p++;
        }

    }
    while(n<i){
        arr[p]=a[i];
        n++;p++;
    }
    while(m<j){
        arr[]
    }



}

void mergesort(int arr[],int l, int r){
    //base case
    if(l>=r)return ;
    int mid=(l+r)/2;
    

    //recursive case
    mergesort(arr,l,mid);
    
    mergesort(arr,mid+1,r);

    merge(arr,l,mid,r);

}
int main(){
    int n;
    cin>>n;
    int l=0;
    int r=n-1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    mergesort(arr,l,r);

    return 0;
}